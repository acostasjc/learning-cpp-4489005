// Programa 15

#include <iostream>
#include "cow.h"

int main(){
    cow *my_cow = new cow("Gertie", 3, cow_purpose::hide);
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
