// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program asks user to enter 3 numbers between 0-100
// and calculates the average between the 3 numbers

#include <iostream>
#include <string>

int main() {
    // this function calculates the average between 3 given integers
    std::string integer;
    int number;
    std::string integer2;
    int number2;
    std::string integer3;
    int number3;
    int average;


    // input
    std::cout << "Enter first integer (0-100): ";
    std::cin >> integer;
    std::cout << "Enter second integer (0-100): ";
    std::cin >> integer2;
    std::cout << "Enter third integer (0-100): ";
    std::cin >> integer3;
    std::cout << "" << std::endl;

    // process
    try {
        number = std::stoi(integer);
        number2 = std::stoi(integer2);
        number3 = std::stoi(integer3);
        if (std::stoi(integer) > 100) {
            // output
            std::cout << "Could not calculate function";

        } else if (std::stoi(integer) < 0) {
            // output
            std::cout << "Could not calculate function";

        } else if (std::stoi(integer2) > 100) {
            // output
            std::cout << "Could not calculate function";

        } else if (std::stoi(integer2) < 0) {
            // output
            std::cout << "Could not calculate function";

        } else if (std::stoi(integer3) > 100) {
            // output
            std::cout << "Could not calculate function";

        } else if (std::stoi(integer3) < 0) {
            // output
            std::cout << "Could not calculate function";

        } else {
        // calculation
        average = (std::stoi(integer) + std::stoi(integer2) +
                   std::stoi(integer3))/3;
        // output
        std::cout << "The average of the 3 numbers is " << average << std::endl;
        }
        } catch (std::invalid_argument) {
        std::cout << "Could not calculate function";
    }
}
