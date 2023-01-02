#include "app.h"

namespace vsite::oop::v8
{
	int input_num(std::stringstream& ss) {
        int number;
        if (ss >> number) {  // Returns true if sucessful.
            return number;
        }
        else {
            throw not_number("not a number");
        }
    }

    char input_op(std::stringstream& ss) {
        char op;
        if ((ss >> op) && (strchr("+-*/", op)) != NULL) {
            return op;
        }
        else {
            throw not_operator("invalid operation");
        }
    }

    double calc(int a, char op, int b) {
        //a -= '0';
        //b -= '0';
        switch (op) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            if (b == 0) {
                throw divide_zero("divide by zero");
            }
            else {
                return double(a) / double(b);
                break;
            }
        }
    }
}
