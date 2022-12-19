#include "app.h"
#include <iostream>

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

using namespace vsite::oop::v8;

int main()
{
	try {
		while (true) {
			int a = input_num(std::cin);
			char c = input_op(std::cin);
			int b = input_num(std::cin);
			std::cout << a << ' ' << c << ' ' << b << " = " << calc(a, c, b) << '\n';
		}
	}

	catch (exception& x) {
		std::cout << x.err();
	}
}
