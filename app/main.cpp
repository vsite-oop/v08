#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	while (true) {
		int a = vsite::oop::v8::input_num(std::cin);
		char b = vsite::oop::v8::input_op(std::cin);
		int c = vsite::oop::v8::input_num(std::cin);
		std::cout << vsite::oop::v8::calc(a, b, c);
	}
}
