// PROGRAMA 14
 
#include <iostream>
 
 
int main(){
 
    float num_2;
 
    int a = 37;
    int *ptr;
 
    ptr = &a;
 
    std::cout << "The content of a is " << a << std::endl;
    std::cout << "ptr is pointing to address " << ptr << std::endl;
    std::cout << "The address of a is  " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "The address of ptr is " << &ptr << std::endl;
 
    //std::cout << "sizeof de int " << sizeof(long int) << std::endl;
   
   
   
 
 
    std::cout << std::endl << "Pressione um numero e enter, para sair... ";
    std::cin >> num_2;
 
    std::cout << std::endl << std::endl;
    return (0);
}