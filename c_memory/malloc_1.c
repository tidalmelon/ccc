#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *str;

    str = (char *)malloc(15);
    strcpy(str, "runoob");
    //u=unsigned
    printf("String = %s, Address = %u\n", str, str);

    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    // str本身是地址，指向的是字符数组
    printf("String = %s, Address = %u\n", str, str);
    free(str);

    return 0;
}

