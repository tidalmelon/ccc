#include <cstdlib> 
#include<iostream>
using namespace std;

int main() {

    double dd = 29494.19;
    cout << showpoint << dd << endl;

    double *pvalue = NULL;

    //*pvalue 地址为0的是系统内存， 不可访问， 会爆段异常
    //cout << "NULL = " << *pvalue << endl;

    cout << "NULL = " << pvalue << endl;

    pvalue = new double; // 申请内存

    if (pvalue) {
        cout << "memory allcate success" << endl;
    }

    *pvalue = 29494.99;

    cout << *pvalue << endl;

    delete pvalue; // 释放内存




    return 0;
}

/**
 * https://blog.csdn.net/hou09tian/article/details/78483640 c++的double物理模型
 */
