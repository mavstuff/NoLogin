// NoLogin app for Windows that simulates /sbin/nologin
// Prints the message and then pauses indefinitely
// useful for setting as the shell for OpenSSH users
//
// Sample sshd_conf file:
// Match Group Guests
//   ForceCommand C:/ProgramData/ssh/NoLogin.exe
//
// 
// (c) 2022 Artem Moroz, artem.moroz@gmail.com

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "No login: This account is currently not available.\n";

    //Sleep indefinitely
    Sleep(INFINITE);

    //will never reach here
    return 0;
}

