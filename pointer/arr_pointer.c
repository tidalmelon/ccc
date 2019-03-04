#include<stdio.h>
#include<string.h>

int main() {

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, value;
    value = arr[0];
    printf("%d\n", value);

    value = *arr;
    printf("%d\n-------\n", value);

    value = arr[1];
    printf("%d\n", value);
    value =  *(arr + 1);
    printf("%d\n-------\n\n", value);

    char *str[3] = {"hello,this is a sample", "Hi goodmorning,", "hello world"};

    char s[80];

    strcpy(s, str[0]);
    printf("%s\n", s);

    strcpy(s, *str);
    printf("%s\n--------\n", s);

    strcpy(s, str[2]);
    printf("%s\n", s);

    strcpy(s, *(str+2));
    printf("%s\n--------\n", s);

    return 0;
}

