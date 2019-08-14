

```
    //已知结构体成员指针，求结构体首地址的正确打开方式
    void *ptr_struct = ptr_b - &((struct list_node*)0)->b;
```
