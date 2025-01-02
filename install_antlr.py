#!/usr/bin/env python
import platform as pf
import requests
import shutil
import os
from subprocess import call

VERSION = "4.9.3"
ANTLR = f"https://www.antlr.org/download/antlr-{VERSION}-complete.jar"
OS = pf.system().lower()
UNAME = pf.uname()

def download_antlr():
    if not shutil.which("curl"):
        raise RuntimeError("curl is not installed. Please install it and try again.")
    print(f"Downloading ANTLR {VERSION}...")
    response = requests.get(ANTLR, stream=True)
    with open(f"antlr-{VERSION}-complete.jar", "wb") as file:
        for chunk in response.iter_content(chunk_size=8192):
            file.write(chunk)
    print("Download complete.")

def install_java():
    if OS == "windows":
        print("Please install Java manually for Windows.")
    elif OS == "linux":
        print("Installing Java on Linux...")
        call(["sudo", "apt-get", "update"])
        call(["sudo", "apt-get", "install", "-y", "default-jre"])
    elif OS == "darwin":
        print("Please install Java using Homebrew: brew install openjdk")

def list_files():
    if OS == "windows":
        call(["dir"], shell=True)
    else:
        call(["ls", "-l", "-A"])

def main():
    print("System Info:", UNAME)
    download_antlr()
    install_java()
    list_files()

if __name__ == "__main__":
    main()
