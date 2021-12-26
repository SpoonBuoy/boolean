#include <vector>
#include <iostream>
#include "../headers/display_row.h"
#include "../headers/Bool.h"
void display_row(std::vector <Bool> v){
    for(auto x : v){
        std::cout<<x.getBit()<<" | ";
    }
    std::cout<<std::endl;
    return;
}