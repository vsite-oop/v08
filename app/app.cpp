#include "app.h"
#include <iostream>
#include <string>

namespace vsite::oop::v8
{
    std::string not_number::what() const {
        return "Not a number exception";
    }

    std::string not_operator::what() const {
        return "Not an operator exception";
    }

    std::string divide_zero::what() const {
        return "Zero division exception";
    }

    int input_num(std::istream& ss){
        int rez;
        if (ss >> rez)
            return rez;
        throw not_number();
    }

    char input_op(std::istream& ss) {
        char op;
        ss >> op;
        std::string operators{ "+-*/" };
        if (operators.find(op) != -1)
            return op;
        throw not_operator();
    }

    double calc(const int& num_a, const char& op, const int& num_b) {
        switch (op) {
        case '+':
            return num_a + num_b;
        case '-':
            return num_a - num_b;
        case '*':
            return num_a * num_b;
        case '/':
            if (num_b == 0) throw divide_zero();
            return num_a / static_cast<double>(num_b);
        }
    }
}