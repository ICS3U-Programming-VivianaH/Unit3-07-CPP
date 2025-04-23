// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program approve of you dating their grandchild if
// you are older than 25 AND younger than 40. Write a program
// where the user enters their age and then the program tells
// you if you can date their grandchild.
#include <iostream>
#include <string>

int main() {
    std::string user_age_string;
    std::cout << "Enter your age: ";
    std::cin >> user_age_string;

    try {
        int user_age = std::stoi(user_age_string);
        if (user_age >= 25 && user_age <= 40) {
            std::cout << "You can date" << std::endl;
        } else {
            std::cout << "You can't date" << std::endl;
        }
    } catch (...) {
        std::cout << user_age_string << " is not an integer" << std::endl;
    }
}
