#include<stdio.h>

int main() {

    struct MyStruct {
        int a;
        int b;
        int c;
    };

    struct MyStruct ss = {20, 30, 40};
    struct MyStruct *ptr = &ss;
    //1 声明了一个指向结构体对象ss的指针
    //指针类型是 MyStruct *ptr
    //指针指向的类型是MyStruct


    int *pstr = (int*)&ss;
    //2 声明了一个指向结构体对象ss的指针

    //但是pstr 和 他被指向的类型 ptr 是不同的
    //?? 但二者指向的类型不同。
    //
















    return 0;
}

