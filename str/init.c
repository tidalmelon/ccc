#include<stdio.h>


int main() {


    // 数组首地址是 指针常量, 不能赋值 , 自增操作必须是左值
    //char name1[] = "TOM AN JERRY";
    
    char *name1 = "TOM AND JERRY";

    char *name;
    name = &name1[0];

    size_t i;
    for(i=0; i<13;i++) {
        printf("%ld  %p\n",  name, name);
        name ++;
    }

    printf("%s\n", name);

    return 0;
}

