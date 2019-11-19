#include <stdio.h>

int main(int argc, char const *argv[])
{
    const char* p = "HELLO";
    p = "world";
    printf("%s\n", p);
    return 0;
}