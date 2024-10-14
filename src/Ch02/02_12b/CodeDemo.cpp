// Programa 10

#include <iostream>

enum class cow_purpose {dairy, meat, hide, pet};
//enum cow_purpose {dairy, meat, hide, pet};

enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};
//enum grocery_section {canned, frozen, meat, laundry, dairy, bakery};


int main(){
    
    
    int meat = 8;
    //int a;



    cow_purpose a;

    
    //a = (int) cow_purpose::meat;

    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    //std::cout << "a = " << a << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
