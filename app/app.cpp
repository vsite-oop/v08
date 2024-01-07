#include "app.h"
using namespace std;
#include <string> 
namespace vsite::oop::v8
{
    int input_num(istream& is) {
        int n;
        is >> n;
        if (is.fail()) {
            throw not_number();
        }
        return n;
    }
    char input_op(istream& is)
    {
        char c;
        is >> c;
        if ("*/+-"s.find(c) == string::npos)
            throw not_operator();
        return c;
    }

    double calc(int num1, char op, double num2)
    {
        switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':

            if (num2 == 0)
                throw divide_zero();


            else {
                return num1 / num2;
            }
        }
    }
    }