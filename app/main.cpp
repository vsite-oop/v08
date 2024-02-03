#include "app.h"

using namespace vsite::oop::v8;
// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	while (true) {
		try {
			auto p = input_num(std::cin);
			auto op = input_op(std::cin);
			auto d = input_num(std::cin);

			double rez = calc(p, op, d);
			std::cout << p << ' ' << op << ' ' << d << " = " << rez << std::endl;
		}
		catch (const base_exception& e) {
			std::cout << e.message() << std::endl;
			break;
		}
	}
}
