#include <stdio.h>

void f(void);
int gAll;

int main(int argc, char const *argv[])
{
    printf("in %s gAll = %d\n", __func__, gAll);
    f();
    printf("again in %s gAll = %d\n", __func__, gAll);
    return 0;
}

void f(void)
{
    printf("in %s gAll = %d\n", __func__, gAll);
    gAll += 2;
    printf("again in %s gAll = %d\n", __func__, gAll);
}