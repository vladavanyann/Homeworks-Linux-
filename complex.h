#include<iostream>

class Complex{

public:

    int a;
    int b;

    Complex operator + (Complex const &obj);

    Complex operator - (Complex const &obj);


    Complex operator * (Complex const &obj);

    friend std::istream& operator>>(std::istream&, Complex&);
    friend std::ostream& operator<<(std::ostream&, const Complex&);

};


