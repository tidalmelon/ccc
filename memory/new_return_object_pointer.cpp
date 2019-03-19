#include<iostream>
using namespace std;

class Box {
    public:
    Box(){
        cout << "调用构造函数" << endl;
    }
    ~Box() {
        cout << "调用析构函数函数" << endl;
    }
};



int main() {

    Box *p = new Box[4];

    delete [] p;

    return 0;
}

