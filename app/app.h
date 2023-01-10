#pragma once
#include <string>


namespace vsite::oop::v8 
{

  class exception{

    public:
    virtual std::string error()const=0;
  };
  class not_number:public exception{

    public:
    std::string error()const override;
  };
  class not_operator:public exception{

    public:
    std::string error()const override;
  };
  class divide_zero:public exception{

    public:
    std::string error()const override;
  };
   


  int input_num(std::istream& ss);
  char input_op(std::istream& ss);
  double calc(int a,char op,int c);


}