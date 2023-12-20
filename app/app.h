#pragma once
#include <iostream>

namespace vsite::oop::v8
{
    int input_num(std::istream& is);
    char input_op(std::istream& is);
    double calc(int fNum, char op, int lNum);

    class base_exception {
    public:
        virtual std::string what() const = 0;
        virtual ~base_exception() = default;
    };

    class not_number : public base_exception {
    public:
        std::string what() const override { return "not a number"; }
    };

    class not_operator : public base_exception {
    public:
        std::string what() const override { return "not an operator"; }
    };

    class divide_zero : public base_exception {
    public:
        std::string what() const override { return "divide by zero"; }
    };
}
