
指针详解
http://www.runoob.com/w3cnote/c-pointer-detail.html
void指针
http://www.runoob.com/w3cnote/c-void-intro.html
范性编程
http://www.runoob.com/w3cnote/c-general-function.html



1. 指针的类型：把声明语句的指针名去掉。这是指针所觉有的类型
```
int*ptr : 指针的类型是。int*
char*ptr; : 指针的类型是 char*
int**ptr; : 指针的类型是 int**
int(*ptr)[3]; : 指针的类型是 int(*)[3]
int*(*ptr)[4]; : 指针的类型是 int*(*)[4]
```

2, 指针所指向的类型:  当你通过指针来访问指针所指向的内存区时，指针所指向的类型决定了编译器将把那片内存区里的内容当作什么来看待。  

你只需把 指针声明语句中的指针名和名字左边的指针声明符* 去掉，剩下的就是 **指针所指向的类型 **


```
int*ptr; 指针所指向的类型为int
char*ptr; 指针所指向的类型为 char
int**ptr; 指针所指向的类型为 int*
int(*ptr)[3]; 指针所指向的类型为 int()[3]
int*(*ptr)[4]; 指针所指向的类型为 int*()[4]
```
