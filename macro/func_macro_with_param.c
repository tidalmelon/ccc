#include<stdio.h>

#define SSSV(s1, s2, s3, v) s1=length*width; s2=length*height; s3=width*height; v=width*height*length

int main () {
    int length = 3, width = 4, height=5, sa, sb,sc, vv;
    SSSV(sa,sb,sc,vv);


    printf("sa=%d, sb=%d, sc=%d, vv=%d\n", sa, sb, sc, vv);

    return 0;
}

