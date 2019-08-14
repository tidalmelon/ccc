#include<stdio.h>

typedef struct list_node {
    char a;
    char b;
} list_node;

int main() {
    list_node node = {'a', 'b'};
    printf("%c %d\n", node.a, node.a);

    list_node *ptr = &node;

    char *ptr_a = &(node.a);

    char *ptr_b = &(node.b);

    printf("++++++memory address++++++\n");
    printf("prt=%p\tprt_a=%p\n", ptr, ptr_a);
    printf("prt=%p\tprt_b=%p\n", ptr, ptr_b);
    printf("++++++memory address++++++\n");
    
    printf("size of list_node = %d\n", sizeof(node));
    printf("size of list_node * = %d\n", sizeof(ptr));


    printf("size of char=%d\n", sizeof(char));

    return 0;
}

