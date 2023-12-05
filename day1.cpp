#include <iostream>
// #include <stdio.h>

int main(){
    std::string input[4] = {
        "1abc2", "pqr3stu8vwx", "a1b2c3d4e5f", "treb7uchet"
    };
    int vals[4] = {0};
    char tmp1, tmp2;
    int val1, val2;
    // std::cout << "before forloop1" << std::endl;
  
    int x = 0;

    // int i = 0;
    for(std::string i: input)
    {
        std::cout << "INDEX: " << i << std::endl;
        std::cout << "first " << i.front() << std::endl;
        tmp1 = i.front();
        if(isdigit(tmp1)){
            val1 = int(tmp1) /10 % 10;
        }
        else{
            val1 = (int(tmp1) - 97) /10%10;
        }
        std::cout << "tmp1 : " << val1 << std::endl;
    
        // get first digit of first character
        tmp1 = val1 / 10 % 10;
        tmp2 = i.back();
        // std::cout << "last " << i.back() << std::endl;

        if(isdigit(tmp2)){
            val2 = int(tmp2) /10 % 10;
        }
        else{
            val2 = (int(tmp2) - 97) /10%10;
        }
        tmp2 = val2 % 10;
        vals[x] = int(char(tmp1) + char(tmp2));
        x = x++;
    }
    std::cout << "done" << std::endl;
    for(int i: vals){
        std::cout << vals[i] << std::endl;
    }
    return 1;
}