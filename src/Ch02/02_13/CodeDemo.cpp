// Programa 11 

#include <iostream>

int main(){

    int var[5] = {1,23,32,24,337};

    float result;

    result = var[0]+var[1]+var[2]+var[3]+var[4];
    result /= 5;
   
    std::cout << "The average is " << result << std::endl; 
    std::cout << std::endl << std::endl;
    return (0);
}
