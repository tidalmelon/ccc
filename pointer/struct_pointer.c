#include<stdio.h>

int main() {

    struct MyStruct {
        int a;
        int b;
        int c;
    };

    struct MyStruct ss = {20, 30, 40};
    struct MyStruct *ptr = &ss;
    // 声明了一个指向结构体对象ss的指针
    //指针类型是 MyStruct *ptr
    //指针指向的类型是MyStruct


    int *pstr = (int*)&ss;
    // 声明了一个指向结构体对象ss的指针
    //













    return 0;
}

