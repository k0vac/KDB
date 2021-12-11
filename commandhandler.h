#ifndef COMMANDHANDLER_H_INCLUDED
#define COMMANDHANDLER_H_INCLUDED
#include <cstring>
typedef std::string str;
str commands[10] = {"GET", "PSH", "DEL", "CRT", "FOR", "SEL"};
str firstpar = "";
int CHF3(str input);
void CHEntry(str input){
    if(CHF3(input)) {

    } else {
        std::cout << "Invalid Operation Code [" << firstpar << "]. Please try again.\n";
        std::cout << "Input: " << input <<"\n";
    }
}

int CHF3(str input) {
    str command;
    bool validcommand = false;
    command += input[0];
    command += input[1];
    command += input[2];

    for(str a: commands){
        if(command.compare(a) == 0)
            validcommand = true;
    }

    firstpar = command;

    if(validcommand)
    {
        std::cout << firstpar;
        return 1;
    } else return 0;
}



#endif // COMMANDHANDLER_H_INCLUDED
