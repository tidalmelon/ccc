

```

    //已知结构体成员指针，求结构体首地址的正确打开方式
    void *ptr_struct = ptr_b - &((struct list_node*)0)->b;

    ./pointer/struct_add_sub.c:

    ++++++memory address++++++
    ptr=349537067ptr_a=3495370672
    ptr=3495370672ptr_b=3495370696
    ptr=3495370672
    ++++++memory address++++++2
```
