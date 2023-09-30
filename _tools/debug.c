#include <stdio.h>

int main(){
    system("rm ./src/*.gch");
    system("gcc ./src/*");
    system("gcc ./main.c");
    system("./a.out");

    return 0;
}