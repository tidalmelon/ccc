```
struct tag {
    member-list
    member-list
    member-list
    ...
} variable-list;
```

tag:标签,类名

member-list: 标准的变量定义

variable-list: 结构体变量， 最后一个；前， 可以指定多个变量

```
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

```

```
//没有标签
struct {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} s1;

//没有变量
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
struct SIMPLE t1, t2[20], *t3;


struct {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Books;

Books u1, u2[20], *u3;

```

第一个和第二声明被编译器当作两个完全不同的类型，即使他们的成员列表是一样的，如果令 t3=&s1，则是非法的。



