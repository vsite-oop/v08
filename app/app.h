#pragma once
#include <iostream>
#include <string>
#include <exception>

namespace vsite::oop::v8 
{
    class my_exceptions{
    public:
        virtual ~my_exceptions() = default;
        virtual std::string what() const = 0;
    };
    class not_number : public my_exceptions {
    public:
        std::string what() const override;
    };
    
    class not_operator : public my_exceptions {
    public:
        std::string what() const override;
    };

    class divide_zero : public my_exceptions {
        std::string what() const override;
    };

    int input_num(std::istream& ss);
    
    char input_op(std::istream& ss);

    double calc(const int& num_a, const char& op, const int& num_b);

}