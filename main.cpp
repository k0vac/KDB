#include <iostream>
#include "commandhandler.h"
typedef std::__cxx11::string string;
int main()
{
    string input;
    while(1){
    printf("KDB > ");
    std::cin >> input;
    CHEntry(input);
    }
}
