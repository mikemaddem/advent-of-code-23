#include <iostream>
// #include <stdio.h>

int main(){
    std::string input[4] = {
        "1abc2", "pqr3stu8vwx", "a1b2c3d4e5f", "treb7uchet"
    };
    std::string vals[4];
    char tmp1, tmp2;
    int val1, val2;
    // std::cout << "before forloop1" << std::endl;
  
    int x = 0;

    // int i = 0;

    // for each string
    // get first and last character
    // is the character a digit? 
    // if digit, take first number, otherwise convert to int,
    for(std::string i: input)
    {
        std::cout << "INDEX: " << i << std::endl;
        std::cout << "first " << i.front() << std::endl;
        tmp1 = i.front();
        if(isdigit(tmp1)){
            std::cout << "its a digit" << std::endl;
            val1 = tmp1;
        }
        else{
            val1 = (int(tmp1) - 97) /10%10;
        }
    
        // get first digit of first character
        // tmp1 = val1 / 10 % 10;
        std::cout << "tmp1 : " << int(tmp1) << std::endl;

        tmp2 = i.back();
        // std::cout << "last " << i.back() << std::endl;

        if(isdigit(tmp2)){
            val2 = tmp2;
        }
        else{
            val2 = (int(tmp2) - 97) /10%10;
        }
        // tmp2 = val2 % 10;
        std::cout << "tmp2 " << int(tmp2) << std::endl;
        vals[x] = val1 + val2;
        x = x++;
    }
    std::cout << "done" << std::endl;
    for(std::string i: vals){
        std::cout << i << std::endl;
    }
    return 1;
}