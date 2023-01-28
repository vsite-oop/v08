#include "CppUnitTest.h"
#include "../app/app.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vsite::oop::v8;

namespace all_tests
{
	TEST_CLASS(test_v08)
	{
	public:
		TEST_METHOD(test_number_input)
		{
			{
				std::stringstream ss("12");
				Assert::AreEqual(12, input_num(ss));
			}
			{
				std::stringstream ss("-45");
				Assert::AreEqual(-45, input_num(ss));
			}
			{
				std::stringstream ss("0");
				Assert::AreEqual(0, input_num(ss));
			}
			{
				std::stringstream ss("37.55");
				Assert::AreEqual(37, input_num(ss));
			}
			Assert::ExpectException<not_number>([]() {
				std::stringstream ss("a");
				input_num(ss);
			});
			Assert::ExpectException<not_number>([]() {
				std::stringstream ss;
				input_num(ss);
			});
		}
		TEST_METHOD(test_operator_input)
		{
			{
				std::stringstream ss("+");
				Assert::AreEqual('+', input_op(ss));
			}
			{
				std::stringstream ss("*");
				Assert::AreEqual('*', input_op(ss));
			}
			{
				std::stringstream ss("/");
				Assert::AreEqual('/', input_op(ss));
			}
			{
				std::stringstream ss("-");
				Assert::AreEqual('-', input_op(ss));
			}
			{
				std::stringstream ss("---");
				Assert::AreEqual('-', input_op(ss));
			}
			Assert::ExpectException<not_operator>([]() {
				std::stringstream ss("!");
				input_op(ss);
			});
			Assert::ExpectException<not_operator>([]() {
				std::stringstream ss("a");
				input_op(ss);
			});
			Assert::ExpectException<not_operator>([]() {
				std::stringstream ss;
				input_op(ss);
			});
		}
		
		TEST_METHOD(test_calc)
		{
			Assert::AreEqual(14., calc(10, '+', 4));
			Assert::AreEqual(40., calc(10, '*', 4));
			Assert::AreEqual(6., calc(10, '-', 4));
			Assert::AreEqual(2.5, calc(10, '/', 4));
			Assert::ExpectException<divide_zero>([]() {
				calc(8, '/', 0);
			});
		}
	};
}
