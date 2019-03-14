/*************************************************************************
	> File Name: struct_pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  3/11 21:20:28 2019
 ************************************************************************/

#include<iostream>
using namespace std;

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
    //

    std::cout << ptr << std::endl;
    std::cout << pstr << std::endl;

    std::cout << ptr->a << std::endl;
    std::cout << ptr->b << std::endl;
    std::cout << ptr->c << std::endl;

    std::cout << *pstr << std::endl;
    std::cout << *(pstr+1) << std::endl;
    std::cout << *(pstr+2) << std::endl;
    //此方法是不正规的
    //所有的c/c++编译器在排列数组的单元时，总是把各个数组单元存放在连续的存储区里，单元和单元之间没有空隙。
    // 但在存放结构对象的各个成员时，在某种编译环境下, 可能需要字对齐，双字对齐等。需要在两个成员直接添加两个“填充字节”，导致相邻两个字节会有“若干自己的空隙""

    return 0;
}

