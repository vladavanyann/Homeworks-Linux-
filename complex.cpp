#include "complex.h"

    Complex Complex::operator + (Complex const &obj) {
         Complex res;
         res.a = a + obj.a;
         res.b = b + obj.b;
         return res;
    }

    Complex Complex::operator - (Complex const &obj) {
            Complex res;
            res.a = a - obj.a;
            res.b = b - obj.b;
            return res;
        }

    Complex Complex::operator * (Complex const &obj) {
         Complex res;
         res.a = a*obj.a - b*obj.b;
         res.b = b*obj.a + a*obj.b;
         return res;
    }

    std::istream& operator>>(std::istream& in, Complex& complexNum)
    {
        in >> complexNum.a >> complexNum.b;
        return in;
    }
    //outputs the complex number -> mReal + mImaginary*i 
    std::ostream& operator<<(std::ostream& output, const Complex& complexNum)
    {
        char imaginary = 'i';
        if (complexNum.a == 0)
    {
        output << complexNum.a;
        return output;
    }
    else if (complexNum.b == 0)
    {
    output << complexNum.a;
    return output;
    }
    else if (complexNum.b > 0)
    {
    output << complexNum.a << "+" << complexNum.b << imaginary;
    return output;
    }
    else
    {
    output << complexNum.a << complexNum.b << imaginary;
    return output;
    }


}
