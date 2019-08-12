#include<stdio.h>

void arrlen(int arr[]) {
    printf("len of arr, %d \n", sizeof(arr)); // sizeof int 是 4  则 4 * 8 = 32
    // 数组名作为函数参数都时候，会退化为指针，指向数组第一个元素。  指针长度都是8
}

int main() {

    //question 1,  sizeof 本质 是一个操作符。类似与 +-*% ， 不是一个函数
    printf("size of int = %d\n", sizeof(int));
    
    double d = 3.14;
    printf("size of double = %d\n", sizeof(d));

    // 操作符方式
    printf("size of double = %d\n", sizeof d);

    //question 2, sizeof 返回值类型 unsigned int 
    
    unsigned int a = 10;
    if (a - 20 > 0) {
        printf("bigger than 0\n"); //  结果是这个, 原因：unsigned int 和 int 操作，编译器会把它们都转为 unsigned int 结果也是 unsigned int  必定大于0了
    } else {
        printf("less than 0\n");
    }

    if (sizeof(int) - 7 > 0) {
        printf("bigger than 0, %u \n", sizeof(int)-7); //  结果是这个, 原因：unsigned int 和 int 操作，编译器会把它们都转为 unsigned int 结果也是 unsigned int  必定大于0了
    } else {
        printf("less than 0\n");
    }

    // question 3: 能干什么, 除了上述基本类型，还包括 array

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("len of arr, %d \n", sizeof(arr)); // sizeof int 是 4  则 4 * 8 = 32

    arrlen(arr);

    



    return 0;
}

