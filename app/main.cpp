#include "app.h"
using namespace vsite::oop::v8;

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
    while (true)
    {
		try
		{			
			auto f = input_num(std::cin);
			auto op = input_op(std::cin);
			auto l = input_num(std::cin);

			double r = calc(f, op, l);
			std::cout << r << std::endl;
		}
		catch (const base_exception& e)
		{
			std::cout << e.what();
			break;
		}
    }
}
