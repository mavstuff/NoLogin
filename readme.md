## NoLogin for Windows

**NoLogin** app for Windows that simulates **/sbin/nologin** for Linux
Prints the message and then pauses indefinitely

Useful for setting as the shell for OpenSSH users
Sample sshd_config file:

    Match Group Guests
	    ForceCommand C:/ProgramData/ssh/NoLogin.exe

(c) 2022 Artem Moroz, artem.moroz@gmail.com