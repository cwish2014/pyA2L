﻿/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include "RuleContext.h"
#include "internal/Synchronization.h"

// GCC generates a warning when forward-declaring ATN if ATN has already been
// declared due to the attributes added by ANTLR4CPP_PUBLIC.
// See: https://gcc.gnu.org/bugzilla/show_bug.cgi?id=39159
// Add constant that can be checked so forward-declarations can be omitted.
#define ANTLR4CPP_ATN_DECLARED

namespace antlr4 {
namespace atn {

    class LexerATNSimulator;
    class ParserATNSimulator;

    class ANTLR4CPP_PUBLIC ATN {
       public:

        static constexpr size_t INVALID_ALT_NUMBER = 0;

        /// Used for runtime deserialization of ATNs from strings.
        ATN();

        ATN(ATNType grammarType, size_t maxTokenType);

        ATN(const ATN &) = delete;

        ATN(ATN &&) = delete;

        ~ATN();

        ATN &operator=(const ATN &) = delete;

        ATN &operator=(ATN &&) = delete;

        std::vector<ATNState *> states;

        /// Each subrule/rule is a decision point and we must track them so we
        /// can go back later and build DFA predictors for them.  This includes
        /// all the rules, subrules, optional blocks, ()+, ()* etc...
        std::vector<DecisionState *> decisionToState;

        /// Maps from rule index to starting state number.
        std::vector<RuleStartState *> ruleToStartState;

        /// Maps from rule index to stop state number.
        std::vector<RuleStopState *> ruleToStopState;

        /// The type of the ATN.
        ATNType grammarType;

        /// The maximum value for any symbol recognized by a transition in the ATN.
        size_t maxTokenType;

        /// <summary>
        /// For lexer ATNs, this maps the rule index to the resulting token type.
        /// For parser ATNs, this maps the rule index to the generated bypass token
        /// type if the
        /// <seealso cref="ATNDeserializationOptions#isGenerateRuleBypassTransitions"/>
        /// deserialization option was specified; otherwise, this is {@code null}.
        /// </summary>
        std::vector<size_t> ruleToTokenType;

        /// For lexer ATNs, this is an array of {@link LexerAction} objects which may
        /// be referenced by action transitions in the ATN.
        std::vector<Ref<const LexerAction>> lexerActions;

        std::vector<TokensStartState *> modeToStartState;

        /// <summary>
        /// Compute the set of valid tokens that can occur starting in state {@code s}.
        ///  If {@code ctx} is null, the set of tokens will not include what can follow
        ///  the rule surrounding {@code s}. In other words, the set will be
        ///  restricted to tokens reachable staying within {@code s}'s rule.
        /// </summary>
        misc::IntervalSet nextTokens(ATNState *s, RuleContext *ctx) const;

        /// <summary>
        /// Compute the set of valid tokens that can occur starting in {@code s} and
        /// staying in same rule. <seealso cref="Token#EPSILON"/> is in set if we reach end of
        /// rule.
        /// </summary>
        misc::IntervalSet const &nextTokens(ATNState *s) const;

        void addState(ATNState *state);

        void removeState(ATNState *state);

        int defineDecisionState(DecisionState *s);

        DecisionState *getDecisionState(size_t decision) const;

        size_t getNumberOfDecisions() const;

        /// <summary>
        /// Computes the set of input symbols which could follow ATN state number
        /// {@code stateNumber} in the specified full {@code context}. This method
        /// considers the complete parser context, but does not evaluate semantic
        /// predicates (i.e. all predicates encountered during the calculation are
        /// assumed true). If a path in the ATN exists from the starting state to the
        /// <seealso cref="RuleStopState"/> of the outermost context without matching any
        /// symbols, <seealso cref="Token#EOF"/> is added to the returned set.
        /// <p/>
        /// If {@code context} is {@code null}, it is treated as
        /// <seealso cref="ParserRuleContext#EMPTY"/>.
        /// </summary>
        /// <param name="stateNumber"> the ATN state number </param>
        /// <param name="context"> the full parse context </param>
        /// <returns> The set of potentially valid input symbols which could follow the
        /// specified state in the specified context. </returns>
        /// <exception cref="IllegalArgumentException"> if the ATN does not contain a state with
        /// number {@code stateNumber} </exception>
        misc::IntervalSet getExpectedTokens(size_t stateNumber, RuleContext *context) const;

        std::string toString() const;

       private:

        friend class LexerATNSimulator;
        friend class ParserATNSimulator;

        mutable internal::Mutex       _mutex;
        mutable internal::SharedMutex _stateMutex;
        mutable internal::SharedMutex _edgeMutex;
    };

}  // namespace atn
}  // namespace antlr4
