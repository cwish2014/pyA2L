/*
**
**  !!! AUTOMATICALLY GENERATED FILE -- DO NOT EDIT !!!
**
*/
#if !defined(__TOKEN_TYPE_HPP)
    #define __TOKEN_TYPE_HPP

    #include <cstdint>
    #include <map>
    #include <string>

const std::map<std::string, int, std::less<>> A2L_KEYWORDS{
    { "<INVALID>",                    0   },
    { "ALIGNMENT_BYTE",               1   },
    { "ALIGNMENT_FLOAT16_IEEE",       2   },
    { "ALIGNMENT_FLOAT32_IEEE",       3   },
    { "ALIGNMENT_FLOAT64_IEEE",       4   },
    { "ALIGNMENT_INT64",              5   },
    { "ALIGNMENT_LONG",               6   },
    { "ALIGNMENT_WORD",               7   },
    { "ANNOTATION",                   8   },
    { "ANNOTATION_LABEL",             9   },
    { "ANNOTATION_ORIGIN",            10  },
    { "ANNOTATION_TEXT",              11  },
    { "BIT_MASK",                     12  },
    { "BYTE_ORDER",                   13  },
    { "CALIBRATION_ACCESS",           14  },
    { "CALIBRATION",                  15  },
    { "NO_CALIBRATION",               16  },
    { "NOT_IN_MCD_SYSTEM",            17  },
    { "OFFLINE_CALIBRATION",          18  },
    { "DEFAULT_VALUE",                19  },
    { "DEPOSIT",                      20  },
    { "ABSOLUTE",                     21  },
    { "DIFFERENCE",                   22  },
    { "DISCRETE",                     23  },
    { "DISPLAY_IDENTIFIER",           24  },
    { "ECU_ADDRESS_EXTENSION",        25  },
    { "EXTENDED_LIMITS",              26  },
    { "FORMAT",                       27  },
    { "FUNCTION_LIST",                28  },
    { "GUARD_RAILS",                  29  },
    { "IF_DATA",                      30  },
    { "MATRIX_DIM",                   31  },
    { "MAX_REFRESH",                  32  },
    { "MONOTONY",                     33  },
    { "MON_DECREASE",                 34  },
    { "MON_INCREASE",                 35  },
    { "STRICT_DECREASE",              36  },
    { "STRICT_INCREASE",              37  },
    { "MONOTONOUS",                   38  },
    { "STRICT_MON",                   39  },
    { "NOT_MON",                      40  },
    { "PHYS_UNIT",                    41  },
    { "READ_ONLY",                    42  },
    { "REF_CHARACTERISTIC",           43  },
    { "REF_MEMORY_SEGMENT",           44  },
    { "REF_UNIT",                     45  },
    { "STEP_SIZE",                    46  },
    { "SYMBOL_LINK",                  47  },
    { "VERSION",                      48  },
    { "ASAP2_VERSION",                49  },
    { "A2ML_VERSION",                 50  },
    { "PROJECT",                      51  },
    { "HEADER",                       52  },
    { "PROJECT_NO",                   53  },
    { "MODULE",                       54  },
    { "A2ML",                         55  },
    { "AXIS_PTS",                     56  },
    { "CHARACTERISTIC",               57  },
    { "ASCII",                        58  },
    { "CURVE",                        59  },
    { "MAP",                          60  },
    { "CUBOID",                       61  },
    { "CUBE_4",                       62  },
    { "CUBE_5",                       63  },
    { "VAL_BLK",                      64  },
    { "VALUE",                        65  },
    { "AXIS_DESCR",                   66  },
    { "CURVE_AXIS",                   67  },
    { "COM_AXIS",                     68  },
    { "FIX_AXIS",                     69  },
    { "RES_AXIS",                     70  },
    { "STD_AXIS",                     71  },
    { "AXIS_PTS_REF",                 72  },
    { "CURVE_AXIS_REF",               73  },
    { "FIX_AXIS_PAR",                 74  },
    { "FIX_AXIS_PAR_DIST",            75  },
    { "FIX_AXIS_PAR_LIST",            76  },
    { "MAX_GRAD",                     77  },
    { "COMPARISON_QUANTITY",          78  },
    { "DEPENDENT_CHARACTERISTIC",     79  },
    { "MAP_LIST",                     80  },
    { "NUMBER",                       81  },
    { "VIRTUAL_CHARACTERISTIC",       82  },
    { "COMPU_METHOD",                 83  },
    { "IDENTICAL",                    84  },
    { "FORM",                         85  },
    { "LINEAR",                       86  },
    { "RAT_FUNC",                     87  },
    { "TAB_INTP",                     88  },
    { "TAB_NOINTP",                   89  },
    { "TAB_VERB",                     90  },
    { "COEFFS",                       91  },
    { "COEFFS_LINEAR",                92  },
    { "COMPU_TAB_REF",                93  },
    { "FORMULA",                      94  },
    { "FORMULA_INV",                  95  },
    { "STATUS_STRING_REF",            96  },
    { "COMPU_TAB",                    97  },
    { "DEFAULT_VALUE_NUMERIC",        98  },
    { "COMPU_VTAB",                   99  },
    { "COMPU_VTAB_RANGE",             100 },
    { "FRAME",                        101 },
    { "FRAME_MEASUREMENT",            102 },
    { "FUNCTION",                     103 },
    { "DEF_CHARACTERISTIC",           104 },
    { "FUNCTION_VERSION",             105 },
    { "IN_MEASUREMENT",               106 },
    { "LOC_MEASUREMENT",              107 },
    { "OUT_MEASUREMENT",              108 },
    { "SUB_FUNCTION",                 109 },
    { "GROUP",                        110 },
    { "REF_MEASUREMENT",              111 },
    { "ROOT",                         112 },
    { "SUB_GROUP",                    113 },
    { "INSTANCE",                     114 },
    { "MEASUREMENT",                  115 },
    { "ARRAY_SIZE",                   116 },
    { "BIT_OPERATION",                117 },
    { "LEFT_SHIFT",                   118 },
    { "RIGHT_SHIFT",                  119 },
    { "SIGN_EXTEND",                  120 },
    { "ECU_ADDRESS",                  121 },
    { "ERROR_MASK",                   122 },
    { "LAYOUT",                       123 },
    { "ROW_DIR",                      124 },
    { "COLUMN_DIR",                   125 },
    { "READ_WRITE",                   126 },
    { "VIRTUAL",                      127 },
    { "MOD_COMMON",                   128 },
    { "DATA_SIZE",                    129 },
    { "S_REC_LAYOUT",                 130 },
    { "MOD_PAR",                      131 },
    { "ADDR_EPK",                     132 },
    { "CALIBRATION_METHOD",           133 },
    { "CALIBRATION_HANDLE",           134 },
    { "CALIBRATION_HANDLE_TEXT",      135 },
    { "CPU_TYPE",                     136 },
    { "CUSTOMER",                     137 },
    { "CUSTOMER_NO",                  138 },
    { "ECU",                          139 },
    { "ECU_CALIBRATION_OFFSET",       140 },
    { "EPK",                          141 },
    { "MEMORY_LAYOUT",                142 },
    { "PRG_CODE",                     143 },
    { "PRG_DATA",                     144 },
    { "PRG_RESERVED",                 145 },
    { "MEMORY_SEGMENT",               146 },
    { "CALIBRATION_VARIABLES",        147 },
    { "CODE",                         148 },
    { "DATA",                         149 },
    { "EXCLUDE_FROM_FLASH",           150 },
    { "OFFLINE_DATA",                 151 },
    { "RESERVED",                     152 },
    { "SERAM",                        153 },
    { "VARIABLES",                    154 },
    { "EEPROM",                       155 },
    { "EPROM",                        156 },
    { "FLASH",                        157 },
    { "RAM",                          158 },
    { "ROM",                          159 },
    { "REGISTER",                     160 },
    { "INTERN",                       161 },
    { "EXTERN",                       162 },
    { "NO_OF_INTERFACES",             163 },
    { "PHONE_NO",                     164 },
    { "SUPPLIER",                     165 },
    { "SYSTEM_CONSTANT",              166 },
    { "USER",                         167 },
    { "RECORD_LAYOUT",                168 },
    { "AXIS_PTS_X",                   169 },
    { "AXIS_PTS_Y",                   170 },
    { "AXIS_PTS_Z",                   171 },
    { "AXIS_PTS_4",                   172 },
    { "AXIS_PTS_5",                   173 },
    { "AXIS_RESCALE_X",               174 },
    { "AXIS_RESCALE_Y",               175 },
    { "AXIS_RESCALE_Z",               176 },
    { "AXIS_RESCALE_4",               177 },
    { "AXIS_RESCALE_5",               178 },
    { "DIST_OP_X",                    179 },
    { "DIST_OP_Y",                    180 },
    { "DIST_OP_Z",                    181 },
    { "DIST_OP_4",                    182 },
    { "DIST_OP_5",                    183 },
    { "FIX_NO_AXIS_PTS_X",            184 },
    { "FIX_NO_AXIS_PTS_Y",            185 },
    { "FIX_NO_AXIS_PTS_Z",            186 },
    { "FIX_NO_AXIS_PTS_4",            187 },
    { "FIX_NO_AXIS_PTS_5",            188 },
    { "FNC_VALUES",                   189 },
    { "ALTERNATE_CURVES",             190 },
    { "ALTERNATE_WITH_X",             191 },
    { "ALTERNATE_WITH_Y",             192 },
    { "IDENTIFICATION",               193 },
    { "NO_AXIS_PTS_X",                194 },
    { "NO_AXIS_PTS_Y",                195 },
    { "NO_AXIS_PTS_Z",                196 },
    { "NO_AXIS_PTS_4",                197 },
    { "NO_AXIS_PTS_5",                198 },
    { "STATIC_RECORD_LAYOUT",         199 },
    { "NO_RESCALE_X",                 200 },
    { "NO_RESCALE_Y",                 201 },
    { "NO_RESCALE_Z",                 202 },
    { "NO_RESCALE_4",                 203 },
    { "NO_RESCALE_5",                 204 },
    { "OFFSET_X",                     205 },
    { "OFFSET_Y",                     206 },
    { "OFFSET_Z",                     207 },
    { "OFFSET_4",                     208 },
    { "OFFSET_5",                     209 },
    { "RIP_ADDR_W",                   210 },
    { "RIP_ADDR_X",                   211 },
    { "RIP_ADDR_Y",                   212 },
    { "RIP_ADDR_Z",                   213 },
    { "RIP_ADDR_4",                   214 },
    { "RIP_ADDR_5",                   215 },
    { "SHIFT_OP_X",                   216 },
    { "SHIFT_OP_Y",                   217 },
    { "SHIFT_OP_Z",                   218 },
    { "SHIFT_OP_4",                   219 },
    { "SHIFT_OP_5",                   220 },
    { "SRC_ADDR_X",                   221 },
    { "SRC_ADDR_Y",                   222 },
    { "SRC_ADDR_Z",                   223 },
    { "SRC_ADDR_4",                   224 },
    { "SRC_ADDR_5",                   225 },
    { "TYPEDEF_CHARACTERISTIC",       226 },
    { "TYPEDEF_MEASUREMENT",          227 },
    { "TYPEDEF_STRUCTURE",            228 },
    { "STRUCTURE_COMPONENT",          229 },
    { "UNIT",                         230 },
    { "DERIVED",                      231 },
    { "EXTENDED_SI",                  232 },
    { "SI_EXPONENTS",                 233 },
    { "UNIT_CONVERSION",              234 },
    { "USER_RIGHTS",                  235 },
    { "REF_GROUP",                    236 },
    { "VARIANT_CODING",               237 },
    { "VAR_CHARACTERISTIC",           238 },
    { "VAR_ADDRESS",                  239 },
    { "VAR_CRITERION",                240 },
    { "VAR_MEASUREMENT",              241 },
    { "VAR_SELECTION_CHARACTERISTIC", 242 },
    { "VAR_FORBIDDEN_COMB",           243 },
    { "VAR_NAMING",                   244 },
    { "NUMERIC",                      245 },
    { "APLHA",                        246 },
    { "VAR_SEPARATOR",                247 },
    { ".",                            248 },
    { "[",                            249 },
    { "]",                            250 },
    { "UBYTE",                        251 },
    { "SBYTE",                        252 },
    { "UWORD",                        253 },
    { "SWORD",                        254 },
    { "ULONG",                        255 },
    { "SLONG",                        256 },
    { "A_UINT64",                     257 },
    { "A_INT64",                      258 },
    { "FLOAT16_IEEE",                 259 },
    { "FLOAT32_IEEE",                 260 },
    { "FLOAT64_IEEE",                 261 },
    { "BYTE",                         262 },
    { "WORD",                         263 },
    { "LONG",                         264 },
    { "PBYTE",                        265 },
    { "PWORD",                        266 },
    { "PLONG",                        267 },
    { "DIRECT",                       268 },
    { "LITTLE_ENDIAN",                269 },
    { "BIG_ENDIAN",                   270 },
    { "MSB_LAST",                     271 },
    { "MSB_FIRST",                    272 },
    { "INDEX_INCR",                   273 },
    { "INDEX_DECR",                   274 },
    { "SYMBOL_TYPE_LINK",             275 },
    { "/begin",                       276 },
    { "/end",                         277 },
};

enum class TokenType : std::uint16_t {
    T__0    = 1,
    T__1    = 2,
    T__2    = 3,
    T__3    = 4,
    T__4    = 5,
    T__5    = 6,
    T__6    = 7,
    T__7    = 8,
    T__8    = 9,
    T__9    = 10,
    T__10   = 11,
    T__11   = 12,
    T__12   = 13,
    T__13   = 14,
    T__14   = 15,
    T__15   = 16,
    T__16   = 17,
    T__17   = 18,
    T__18   = 19,
    T__19   = 20,
    T__20   = 21,
    T__21   = 22,
    T__22   = 23,
    T__23   = 24,
    T__24   = 25,
    T__25   = 26,
    T__26   = 27,
    T__27   = 28,
    T__28   = 29,
    T__29   = 30,
    T__30   = 31,
    T__31   = 32,
    T__32   = 33,
    T__33   = 34,
    T__34   = 35,
    T__35   = 36,
    T__36   = 37,
    T__37   = 38,
    T__38   = 39,
    T__39   = 40,
    T__40   = 41,
    T__41   = 42,
    T__42   = 43,
    T__43   = 44,
    T__44   = 45,
    T__45   = 46,
    T__46   = 47,
    T__47   = 48,
    T__48   = 49,
    T__49   = 50,
    T__50   = 51,
    T__51   = 52,
    T__52   = 53,
    T__53   = 54,
    T__54   = 55,
    T__55   = 56,
    T__56   = 57,
    T__57   = 58,
    T__58   = 59,
    T__59   = 60,
    T__60   = 61,
    T__61   = 62,
    T__62   = 63,
    T__63   = 64,
    T__64   = 65,
    T__65   = 66,
    T__66   = 67,
    T__67   = 68,
    T__68   = 69,
    T__69   = 70,
    T__70   = 71,
    T__71   = 72,
    T__72   = 73,
    T__73   = 74,
    T__74   = 75,
    T__75   = 76,
    T__76   = 77,
    T__77   = 78,
    T__78   = 79,
    T__79   = 80,
    T__80   = 81,
    T__81   = 82,
    T__82   = 83,
    T__83   = 84,
    T__84   = 85,
    T__85   = 86,
    T__86   = 87,
    T__87   = 88,
    T__88   = 89,
    T__89   = 90,
    T__90   = 91,
    T__91   = 92,
    T__92   = 93,
    T__93   = 94,
    T__94   = 95,
    T__95   = 96,
    T__96   = 97,
    T__97   = 98,
    T__98   = 99,
    T__99   = 100,
    T__100  = 101,
    T__101  = 102,
    T__102  = 103,
    T__103  = 104,
    T__104  = 105,
    T__105  = 106,
    T__106  = 107,
    T__107  = 108,
    T__108  = 109,
    T__109  = 110,
    T__110  = 111,
    T__111  = 112,
    T__112  = 113,
    T__113  = 114,
    T__114  = 115,
    T__115  = 116,
    T__116  = 117,
    T__117  = 118,
    T__118  = 119,
    T__119  = 120,
    T__120  = 121,
    T__121  = 122,
    T__122  = 123,
    T__123  = 124,
    T__124  = 125,
    T__125  = 126,
    T__126  = 127,
    T__127  = 128,
    T__128  = 129,
    T__129  = 130,
    T__130  = 131,
    T__131  = 132,
    T__132  = 133,
    T__133  = 134,
    T__134  = 135,
    T__135  = 136,
    T__136  = 137,
    T__137  = 138,
    T__138  = 139,
    T__139  = 140,
    T__140  = 141,
    T__141  = 142,
    T__142  = 143,
    T__143  = 144,
    T__144  = 145,
    T__145  = 146,
    T__146  = 147,
    T__147  = 148,
    T__148  = 149,
    T__149  = 150,
    T__150  = 151,
    T__151  = 152,
    T__152  = 153,
    T__153  = 154,
    T__154  = 155,
    T__155  = 156,
    T__156  = 157,
    T__157  = 158,
    T__158  = 159,
    T__159  = 160,
    T__160  = 161,
    T__161  = 162,
    T__162  = 163,
    T__163  = 164,
    T__164  = 165,
    T__165  = 166,
    T__166  = 167,
    T__167  = 168,
    T__168  = 169,
    T__169  = 170,
    T__170  = 171,
    T__171  = 172,
    T__172  = 173,
    T__173  = 174,
    T__174  = 175,
    T__175  = 176,
    T__176  = 177,
    T__177  = 178,
    T__178  = 179,
    T__179  = 180,
    T__180  = 181,
    T__181  = 182,
    T__182  = 183,
    T__183  = 184,
    T__184  = 185,
    T__185  = 186,
    T__186  = 187,
    T__187  = 188,
    T__188  = 189,
    T__189  = 190,
    T__190  = 191,
    T__191  = 192,
    T__192  = 193,
    T__193  = 194,
    T__194  = 195,
    T__195  = 196,
    T__196  = 197,
    T__197  = 198,
    T__198  = 199,
    T__199  = 200,
    T__200  = 201,
    T__201  = 202,
    T__202  = 203,
    T__203  = 204,
    T__204  = 205,
    T__205  = 206,
    T__206  = 207,
    T__207  = 208,
    T__208  = 209,
    T__209  = 210,
    T__210  = 211,
    T__211  = 212,
    T__212  = 213,
    T__213  = 214,
    T__214  = 215,
    T__215  = 216,
    T__216  = 217,
    T__217  = 218,
    T__218  = 219,
    T__219  = 220,
    T__220  = 221,
    T__221  = 222,
    T__222  = 223,
    T__223  = 224,
    T__224  = 225,
    T__225  = 226,
    T__226  = 227,
    T__227  = 228,
    T__228  = 229,
    T__229  = 230,
    T__230  = 231,
    T__231  = 232,
    T__232  = 233,
    T__233  = 234,
    T__234  = 235,
    T__235  = 236,
    T__236  = 237,
    T__237  = 238,
    T__238  = 239,
    T__239  = 240,
    T__240  = 241,
    T__241  = 242,
    T__242  = 243,
    T__243  = 244,
    T__244  = 245,
    T__245  = 246,
    T__246  = 247,
    T__247  = 248,
    T__248  = 249,
    T__249  = 250,
    T__250  = 251,
    T__251  = 252,
    T__252  = 253,
    T__253  = 254,
    T__254  = 255,
    T__255  = 256,
    T__256  = 257,
    T__257  = 258,
    T__258  = 259,
    T__259  = 260,
    T__260  = 261,
    T__261  = 262,
    T__262  = 263,
    T__263  = 264,
    T__264  = 265,
    T__265  = 266,
    T__266  = 267,
    T__267  = 268,
    T__268  = 269,
    T__269  = 270,
    T__270  = 271,
    T__271  = 272,
    T__272  = 273,
    T__273  = 274,
    T__274  = 275,
    INVALID = 0,
    BEGIN   = 276,
    END     = 277,
    IDENT   = 278,
    FLOAT   = 279,
    INT     = 280,
    HEX     = 281,
    COMMENT = 282,
    WS      = 283,
    STRING  = 284,
};

constexpr std::uint16_t DATA_TYPE_MIN = static_cast<std::uint16_t>(TokenType::IDENT);

#endif  // __TOKEN_TYPE_HPP
