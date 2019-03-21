#include<iostream>
#include<stdio.h>
#include<string>
#include <stdlib.h>

int main() {

    std::string dt = "2019-03-18 14";

    std::string str2 = dt.substr(11,12); 

    std::cout << str2 << std::endl;

    int hour = atoi(str2.c_str());

    std::cout << hour << std::endl;

    return 0;
}

