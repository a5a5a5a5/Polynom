#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Polynom.h"

using namespace Polynom;

int main(int argc, const char * argv[]) {
    std::string input_numerator;
    std::string input_divisor;
    std::cout<<"Enter numerator coefficients: ";
    getline(std::cin,input_numerator);
    std::cout<<"Enter divisor coefficients: ";
    getline(std::cin,input_divisor);
    std::stringstream numerator;
    std::stringstream divisor;
    numerator<<input_numerator;
    divisor<<input_divisor;
    PolynomOperations item;
    item.SetNumerator(numerator);
    item.SetDivisor(divisor);
    int field;
    std::cout<<"Enter field: ";
    std::cin>>field;
    item.SetField(field);
    item.PrintDivisionResult(item.Devide());
    std::cout<<"Greatest common factor: ";
    item.PrintPolynom(item.GCF());
    return 0;
}
