#include "app.h"
using namespace vsite::oop::v8;


int main()
{
	while (true)
	{
		try
		{
			auto broj1 = input_num(std::cin);
			auto opera = input_op(std::cin);
			auto broj2 = input_num(std::cin);

			double rez = calc(broj1, opera, broj2);
			std::cout << broj1 << opera << broj2 << '=' << rez << std::endl;
		}
		catch (const base_exception& e)
		{
			std::cout << e.what();
			break;
		}
	}
}