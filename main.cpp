#include<iostream>
#include<vector>
#include"complex.h"



int main()
{
    Complex obj;

    std::cin >> obj.a >> obj.b;

    Complex obj2;

    std::cin >> obj2.a >> obj2.b;

    std::cout << obj + obj2;

}
