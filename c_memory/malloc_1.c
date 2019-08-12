#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *str;

    str = (char *)malloc(15*sizeof(char));
    strcpy(str, "runoob");
    strcat(str, "11111111111111111111111111111111111");
    //u=unsigned
    printf("String = %s, Address = %u\n", str, str);

    //str = (char *)realloc(str, 25);
    //strcat(str, ".com");
    // str本身是地址，指向的是字符数组
    //printf("String = %s, Address = %u\n", str, str);
    free(str);

    return 0;
}

