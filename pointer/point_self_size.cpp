#include<stdio.h>
#include<iostream>

int fun1(char *name, int age) {
    printf("age: %d\n", age);

    int num = 0;

    while(*name!='\0') {

        printf("%c, %c, %d\n", *name, *name-32, *name);

        num += *name;
        name ++;
    }

    return num;
}

int main() {
    int arr[10] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *p = arr;

    std::cout << "sizeof(int*): " << sizeof(p) << ":" << sizeof(int*) << std::endl;

    int (*pfun1)(char*, int);
    pfun1 = fun1;

    std::cout << "sizeof: " << sizeof(pfun1) << ":" << sizeof(int(*)(char*,int)) << std::endl;
    
    return 0;

}

/**
 *
 * 
 * */
