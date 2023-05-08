// N07_HW06_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <iterator>

int main()
{
    int count, input;

    std::cout << "[IN]: \n";
    std::cin >> count;
    std::set<int> my_set;
    for (int i = 0; i < count; i++) {
        std::cin >> input;
        my_set.insert(input);

    }
    ///std::set<int, std::greater<int> >::iterator itr;
    std::cout << "[OUT]: \n";
    //for (const auto& elem : my_set)
        //std::cout << elem << std::endl;
    
    for (auto itr = my_set.rbegin(); itr != my_set.rend(); itr++) {
        std::cout << *itr << std::endl;
    }
}