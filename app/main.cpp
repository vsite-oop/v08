#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description
using namespace vsite::oop::v8;

int main()
{
	while (true) {
		try {
			int num1 = input_num(std::cin);
			char op = input_op(std::cin);
			int num2 = input_num(std::cin);

			double rezultat = calc(num1, op, num2);

			std::cout << num1 << op << num2 << '=' << rezultat << std::endl;
		}
		catch (const base_exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
			break;
		}
	}
}
