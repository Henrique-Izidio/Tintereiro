#ifndef TOOL_BOX_H
#define TOOL_BOX_H

void clearScreen() {
    #if defined(_WIN32)
        system("cls");
    #elif defined(__linux__) || (defined(__APPLE__) && defined(__MACH__))
        system("clear");
    #else
        printf("Unknown OS\n");
    #endif
}

#endif /* TOOL_BOX_H */
