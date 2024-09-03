// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {diary, meat, pe, hide};

struct cow{
    std::string cow_name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow = {"Betsy", 5, cow_purpose::diary};
   /* my_cow.cow_name = "Betsy";
    my_cow.age = 5;
    my_cow.purpose = cow_purpose::diary;*/
    std::cout << my_cow.cow_name <<" is a type "<<(int)my_cow.purpose <<" cow."<< std::endl;
    std::cout << "Age of "<< my_cow.cow_name<<" is "<<my_cow.age<<"."<< std::endl << std::endl;
    return (0);
}
