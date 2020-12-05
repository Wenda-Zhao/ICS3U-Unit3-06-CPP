// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Nov 2020
// This program guessing random number

#include <iostream>
#include <random>
#include <string>


int main() {
    // this fuction is random number guessing

    int someRandomNumber;
    std::string integerAsString;
    int integerAsNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 1);  // [0, 1]
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Enter your number: ";
    std::cin >> integerAsString;

    // process
    if (std::stoi(integerAsString) == someRandomNumber) {
        // output
        std::cout << "Correct!";
    } else {
        std::cout << "Wrong! someRandomNumber = "
        << someRandomNumber << std::endl;;
    }try {
        integerAsNumber = std::stoi(integerAsString);
        std::cout << "That number is a integer ";
    }catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
}
