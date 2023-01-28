#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
    using namespace vsite::oop::v8;
    try {
        while (true) {
            auto num_a = input_num(std::cin);
            auto op = input_op(std::cin);
            auto num_b = input_num(std::cin);

            std::cout   << num_a 
                        << op 
                        << num_b 
                        << " = " 
                        << calc(num_a, op, num_b)
                        << std::endl;
        }
    }
    catch (my_exceptions& e) {
        std::cout << e.what() << std::endl;
    }
}
