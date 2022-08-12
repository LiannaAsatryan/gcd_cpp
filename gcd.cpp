#include <iostream>
#include <cstring>
#include <cmath>
#include "gcd.h"

//this function checks if a given string is a number or not
bool is_num(std::string str)
{
        if((str[0] != '-') && (str[0] < '0' || str[0] > '9')) {
                return false;
        }
        for(int i = 1; i < str.length(); i++) {
                if(str[i] < '0' || str[i] > '9') {
                        return false;
                }
        }
        return true;
}

//this function finds the gcd of 2 numbers given as <str1> and <str2>
//and gives the <answer> the appropriate value
void gcd(std::string &answer, std::string str1, std::string str2) {
        if(!is_num(str1) || !is_num(str2)) {
                answer = "mistake";
        }
        else{
                int a=std::abs(std::stoi(str1));
                int b=std::abs(std::stoi(str2));
                if (a == 0) {
                        answer=std::to_string(b);
                }else if (b == 0) {
                        answer = std::to_string(a);
                }else {
                        while (a != b) {
                                if (a > b)
                                        a = a - b;
                                else
                                        b = b - a;
                        }
                        answer = std::to_string(a);
                }
        }
}
