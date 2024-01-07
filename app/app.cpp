#include "app.h"
#include <string>  // Dodajte ovu liniju kako biste omoguæili upotrebu std::string
using namespace std;  // Dodajte ovu liniju kako biste mogli koristiti sufix s

namespace vsite::oop::v8
{
    int input_num(istream& is) {
        int n;
        is >> n;
        if (is.fail()) {
            throw not_number();
        }
        return n;
    }

    char input_op(istream& is)
    {
        char c;
        is >> c;
        if ("*/+-"s.find(c) == string::npos)
            throw not_operator();
        return c;
    }

    double calc(int broj1, char opera, int broj2)
    {
        switch (opera) {
        case '+': return broj1 + broj2;
        case '-': return broj1 - broj2;
        case '*': return broj1 * broj2;
        case '/':
            if (broj2 == 0)
                throw divide_zero();
            return broj1 / static_cast<double>(broj2);
        default:  throw not_operator();
        }
    }
}
