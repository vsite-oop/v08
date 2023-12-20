#include "app.h"


namespace vsite::oop::v8
{
    int input_num(std::istream& is) {
        int n;
        is >> n;
        if (is.fail()) {
            throw not_number();
        }
        return n;
    }

    char input_op(std::istream& is)
    {
        int op = -1;
        char c;
        is >> c;

        const std::string operators = "/*-+";

        op = operators.find(c);
        if (op == -1)
            throw not_operator();

        return c;
    }

    double calc(int fNum, char op, int lNum)
    {
        switch (op) {
        case '+':
            return fNum + lNum;
        case '-':
            return fNum - lNum;
        case '*':
            return fNum * lNum;
        case '/':
            if (lNum == 0)
                throw divide_zero();
            return fNum / static_cast<double>(lNum);
        default:
            throw not_operator();
        }
    }
}