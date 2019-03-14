#include<stdio.h>

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

    printf("output: 0\n");
    ////声明一个指针类型: 去掉名字就是指针类型， 去掉*名字 就是指针指向的类型。 明显指向一个函数int (char*, int)
    int (*pfun1)(char*, int);
    pfun1 = fun1;

    ////通过指针调用函数
    char name[] = "jeff";
    int age = 18;
    int a = (*pfun1)(name, age);

    printf("num: %d\n", a);

    return 0;
}


