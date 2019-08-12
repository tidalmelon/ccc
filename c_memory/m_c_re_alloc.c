#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char name[100];
    char *description;

    strcpy(name, "Zara ali");

    description = (char*)malloc(30*sizeof(char));

    //description = (char*)calloc(30, sizeof(char));

    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student");
        //strcat(description, " She is in class 10th, She is in class 10thShe is in class 10thShe is in class 10thShe is in class 10thShe is in class 10thShe is in class 10th");
    }

    /*存储更大的描述*/
    description = (char*)realloc(description, 100*sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, " She is in class 10th, She is in class 10th");
    }

    /*如果不增加内存, 会爆错*/
    //strcat(description, " She is in class 10th, She is in class 10thShe is in class 10thShe is in class 10thShe is in class 10thShe is in class 10thShe is in class 10th");

    printf("Name = %s\n", name);
    printf("Description = %s\n", description);

    /*释放内存*/
    free(description);

    return 0;
}



