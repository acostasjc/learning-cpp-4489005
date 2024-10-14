// Programa 13

#include <iostream>
//#include <string>
#include "cow.h"


int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    my_cow.set_age(5);
    my_cow.set_name("Betsy");
    my_cow.set_purpose(cow_purpose::dairy);
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose()<< " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
