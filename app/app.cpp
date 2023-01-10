#include "app.h"
#include <iostream>




namespace vsite::oop::v8
{
   std::string not_number::error()const{
    return "Not a number.";
   }

   std::string not_operator::error()const{
    return "Invalid operator.";
   }

   std::string divide_zero::error()const{
    return "Dividing by zero.";
   }

   int input_num(std::istream& ss){
    
    int num;
    if(ss>>num)return num;

    throw not_number();


   }

   char input_op(std::istream& ss){

    char op;
    ss>>op;
    char operators_arr[4]={'+','-','*','/'};
    for(int i=0;i<4;++i)if(op==operators_arr[i])return op;

    throw not_operator();
   }

   double calc(int a,char op,int b){
    
    switch(op)
    {
        case '+':
             return a+b;
        case '-':
             return a-b;
        case '*':
             return a*b;
        case '/':
             if(b==0)throw divide_zero(); 
             return double(a)/b;

    } 


  }





}   

