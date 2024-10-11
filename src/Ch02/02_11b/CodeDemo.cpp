// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>


int main(){
    
    int fahrenheit = 100;
    float celsius; 
    
    celsius = (5.0f/9)*(fahrenheit - 32);

    std::cout << std::endl;

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;
    
    double weight = 10.99;

    std::cout << std::endl;

    std::cout << "          Double: " << weight << std::endl;
    std::cout << "   Integer Part: " << (int) weight << std::endl;
    std::cout << "Fractional Part: " << (int)((weight - (int)weight) * 10000) << std::endl;
    



    std::cout << std::endl << std::endl;
    return (0);
}
