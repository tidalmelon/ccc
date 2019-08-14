#include<stdio.h>

typedef struct list_node {
    char a;
    int arr[5];
    char b;
} list_node;

int main() {
    list_node node = {'a', 'b'};
    printf("%c %d\n", node.a, node.a);

    list_node *ptr = &node;

    char *ptr_a = &(node.a);

    char *ptr_b = &(node.b);

    printf("++++++memory address++++++\n");
    printf("ptr=%p\tptr_a=%p\n", ptr, ptr_a);
    printf("ptr=%p\tptr_b=%p\n", ptr, ptr_b);
    //void *ptr_struct = ptr_b - sizeof(struct list_node);
    //已知结构体成员指针，求结构体首地址的正确打开方式
    void *ptr_struct = ptr_b - &((struct list_node*)0)->b;

    printf("ptr=%p\n", ptr_struct);
    printf("++++++memory address++++++\n");

    printf("++++++memory address++++++\n");
    printf("ptr=%u\tptr_a=%u\n", ptr, ptr_a);
    printf("ptr=%u\tptr_b=%u\n", ptr, ptr_b);
    printf("ptr=%u\n", ptr_struct);
    printf("++++++memory address++++++\n");


    printf("size of list_node = %d\n", sizeof(node));
    printf("size of list_node * = %d\n", sizeof(ptr));
    printf("size of char=%d\n", sizeof(char));

    return 0;
}

