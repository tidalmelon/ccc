#include<stdio.h>

int main() {

    struct bs {
        unsigned a:1; // 类型也可以为int
        unsigned b:3; // 111 1+ 2 + 4 = 7， max=7 不能超过7
        unsigned c:4;
    } bit, *pbit;

    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c);

    pbit = &bit;

    pbit->a = 0;
    pbit->b&=3; // 111&011=011
    pbit->c|=1; // 1111|1 = 1111=15 = 1+2+4+8

    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);


    return 0;
}

