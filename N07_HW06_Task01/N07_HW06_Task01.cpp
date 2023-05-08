// N07_HW06_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>

int main()
{

    int key;

    std::string input;

    std::cout << "[IN]: \n";
    std::cin >> input;
    //input = "Hello_World!";
    std::cout << "Hello World!\n";
    
    std::set<char> s(input.begin(), input.end());

    std::multimap< int, char > my_map;

    for (const auto& elem : s) {
        //std::cout << elem << std::endl;
        key = std::count(input.begin(), input.end(), elem);

        my_map.insert({ key, elem });
    }

    std::cout << "[OUT]: \n";

    for (auto it = my_map.rbegin(); it != my_map.rend(); ++it)
        std::cout << it->first << " " << it->second << std::endl; 
}