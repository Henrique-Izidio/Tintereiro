#ifndef TOOL_BOX_H
#define TOOL_BOX_H

#if defined(_WIN32)
#include <windows.h>
#endif

void clearScreen(){
    #if defined(_WIN32)
        system("cls");
    #elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__))
        system("clear");
    #else
        printf("Unknown OS\n");
    #endif
}

void setAnsi(){
    #if defined(_WIN32)
        
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        DWORD mode;
        GetConsoleMode(hConsole, &mode);

        mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(hConsole, mode);
    #elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__))
        // Códigos de escape ANSI são suportados por padrão no Linux e macOS
    #else
        printf("Unknown OS\n");
    #endif
}

#endif /* TOOL_BOX_H */


