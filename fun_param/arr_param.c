#include<stdio.h>

//void fun(int a[]) {
void fun(int *a) {
    a[1] = 2;
    printf("%d\t%d\n", a[0], a[1]);
}

void fun_2_dim(int b[][3]) {
    b[1][2] = 3;
    printf("\n%d\t%d\n", b[1][2], b[0][0]);
}

void fun_2_dim_1(int **b) {
    printf("\n%d\t%d\n", b[1][2], b[0][0]);
}


int main() {

    int a[5] = {0};
    fun(a);

    int b[3][3] = {0};
    fun_2_dim(b);

    int *p[3];
    p[0] = b[0];
    p[1] = b[1];
    p[2] = b[2];

    fun_2_dim_1(p);

    return 0;
}

