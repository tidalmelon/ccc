#include<stdio.h>

int main() {
    void *p = NULL;

    int *pInt = NULL;

    char *pChar = NULL;

    //pChar = pInt;  // 仅仅是警告：从不兼容的指针类型赋值
    pChar = (char *)pInt;  // 强转, 则没有警告

    pChar = p; // void * 万能指针可以不强转就给左边赋值

    printf("size of void * = %d\n", sizeof(p));
    printf("size of int * = %d\n", sizeof(pInt));
    printf("size of char * = %d\n", sizeof(pChar));

    // 只要是地址都是 8, 这个跟操作系统有关么

    return 0;
}

