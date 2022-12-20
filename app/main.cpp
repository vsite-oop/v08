#include "app.h"
#include<iostream>
using namespace vsite::oop::v8;


// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	while (true) {
		int num, num2;
		char ch;

		std::cin >> num >> ch >> num2;
		std::cout << calc(num, ch, num2) << std::endl;
	}
}
