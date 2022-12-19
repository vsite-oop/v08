#include "app.h"

namespace vsite::oop::v8
{
	int vsite::oop::v8::input_num(std::istream& is) throw (BaseExcp) {

	}
	char vsite::oop::v8::input_op(std::istream& is) throw (BaseExcp) {

	}
	double vsite::oop::v8::calc(const int first, const char op, const int second) throw (BaseExcp) {

	}


	class vsite::oop::v8::BaseExcp {
	public:
		virtual std::string error() {};
	};
	class vsite::oop::v8::not_number : public vsite::oop::v8::BaseExcp {
	public:
		std::string error() override {
		}
	};
	class vsite::oop::v8::not_operator : public vsite::oop::v8::BaseExcp {};
	class vsite::oop::v8::divide_zero : public vsite::oop::v8::BaseExcp {};
}
}