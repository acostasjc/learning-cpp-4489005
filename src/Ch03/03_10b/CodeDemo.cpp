// PROGRAMA 17

#include <iostream>
#include <vector>
#include "cow.h"

int main(){
    
    

    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last is " << prev(cattle.end(),2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end()-1)->get_name() << std::endl;

    std::cout << "The purpose of third cow " << (int) next(cattle.begin(),2)->get_purpose() << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
