#include "app.h"
#include <string>

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description
using namespace vsite::oop::v8;

int main()
{
	while (true) {
		try {
			auto num1 = input_num(std::cin);
			auto op = input_op(std::cin);
			auto num2 = input_num(std::cin);
			auto rez = calc(num1, op, num2);

			std::cout << num1 << op << num2 << '=' << rez;
		}
		catch (const base_exception& e) {
			std::cout << e.message();
			break;
		}
	}
}
