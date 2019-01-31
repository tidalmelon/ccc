#include <uuid/uuid.h>
#include <string>
#include <openssl/md5.h>
#include<stdio.h>

#include<fstream>
#include<sstream>

char* gen_uuid() {
    /*delete [] str */
    uuid_t uu;
    char* str = new char[37];
    uuid_generate(uu);
    uuid_unparse(uu, str);
    return str;
}

std::string gen_md5(std::string& input) {
    unsigned char md[16];
    char tmp[33]={};
    std::string hash="";
    MD5((const unsigned char*)input.c_str(), input.size(), md);
    for(int i=0; i<16; i++){
        sprintf(tmp, "%02X", md[i]);
        hash+=(std::string)tmp; 
    }
    return hash;
}

std::string read_text(std::string& fname) {
    std::ifstream f(fname.c_str(), std::ios::in);
    std::ostringstream tmp;
    tmp << f.rdbuf();
    std::string txt = tmp.str();
    return txt;
}
