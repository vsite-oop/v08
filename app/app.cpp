#include "app.h"

namespace vsite::oop::v8
{
	int input_num(std::istream& is) {
        int number;
        if (is >> number) {  // Returns true if successful.
            return number;
        }
        else {
            throw not_number();
        }
    }

    char input_op(std::istream& is) {
        char op;
        if ((is >> op) && (strchr("+-*/", op)) != NULL) {
            return op;
        }
        else {
            throw not_operator();
        }
    }

    double calc(int a, char op, int b) {
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
                throw divide_zero();
            }
            else {
                return double(a) / double(b);
                break;
            }
        }
    }
}
