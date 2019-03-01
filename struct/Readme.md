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
//用结构体标签 tag 声明了3个变量
struct SIMPLE t1, t2[20], *t3;

//也可以用typedef创建新类型
typedef struct {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Books;

Books u1, u2[20], *u3;

```

第一个和第二声明被编译器当作两个完全不同的类型，即使他们的成员列表是一样的，如果令 t3=&s1，则是非法的。

```
//此结构体声明包含了其他结构体
struct COMPLEX {
    char string[100];
    struct Books a;
};
//此结构体的声明包含了指向自己类型的指针
struct NODE {
    char string[100];
    struct NODE *next_node;
}
```

如果两个结构体**互相包含**，则需要对其中一个结构体进行不完整性声明
```
struct B;

//结构体A包含了指向结构体B的指针
struct A {
    struct B *point;
};

//结构体B中包含指向结构体A的指针，**在A声明完后(如上)**，**B也随之进行声明（如下）**
struct B {
    struct A *point;
}

```


### 结构体变量的初始化  

struct_init.c

### 访问结构体成员

struct_visit_mem_and_funparam.c

### 结构体作为函数参数  

struct_visit_mem_and_funpointparam.c








continue:http://www.runoob.com/cprogramming/c-structures.html
https://github.com/lishuhuakai/Redis-Simplify/blob/master/01-Contain-event-loop/adlist.h
