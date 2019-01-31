#include<iostream>
#include<string>

#include "util.h"

int main() {
    char* uuid = gen_uuid();
    std::cout << uuid << std::endl;
    delete [] uuid;

    std::string input = "123";
    std::string md5 = gen_md5(input);
    std::cout << md5 << std::endl;

    std::string fname = "main.cpp";
    std::string txt = read_text(fname);
    std::cout << txt << std::endl;

}

/**
 * g++ main.cpp util.cpp -luuid -lcrypto
 */
