#include<stdio.h>

//[] 优先级高于 *
void print(int (*arr)[3]) {
    size_t j = 0;
    for ( ; j<3; j++ ) {
        printf("%d\n", (*arr)[j]);
    }
}

int main() {
    int a[2][3] = {1, 2, 3, 4, 5, 6};

    print(a);
    return 0;
}

// 二维数组在内存中并不区分行和列，如果形参不说明列数, 编译器


