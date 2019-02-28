#include<stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数声明 */
void cout(struct Books *book);

int main() {

    struct Books book1;
    struct Books book2;

    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    strcpy(book2.title, "C++ Programming");
    strcpy(book2.author, "Nuha Ali");
    strcpy(book2.subject, "C++ Programming Tutorial");
    book2.book_id = 6495408;

    cout(&book1);
    cout(&book2);

    return 0;
}

void cout(struct Books *book){
    printf("title: %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book->title, book->author, book->subject, book->book_id);
}

