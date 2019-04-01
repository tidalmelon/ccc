#include<stdio.h>

//int SQ(int y) {
//    return y * y;
//}

#define SQ(y) ((y)*(y))

int main() {
    int i=1;
    while (i<=5) {
        printf("%d^2=%d\n", i, SQ(i)); // SQ(i) 会被替换为 ((i)*(i))
        i++;
    }

    return 0;
}

