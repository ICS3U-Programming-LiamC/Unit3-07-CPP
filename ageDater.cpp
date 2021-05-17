// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 17, 2021
// This program determines whether you are old enough
// for someone's parents to be ok with you dating
// their daughter

#include <iostream>

int main() {
    // make variables and a string version
    std::string ageString;
    int age;

    // get age and save as a string
    std::cout << "What is your age: ";
    std::cin >> ageString;

    // try to turn the age into a integer
    try {
        age = std::stoi(ageString);

        // if all goes well see if age is within
        // acceptable range
        if ((age > 25) && (age < 40)) {
            std::cout << "You can date our daughter!";
        // if age is too small
        } else if (age < 25) {
            std::cout << "You are too young";
        // if age is to great
        } else {
            std::cout << "You are too old";
        }

    // if could not turn age into an integer
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid number";
    }
}
