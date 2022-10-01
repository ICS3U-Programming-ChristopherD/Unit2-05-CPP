// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Oct 1, 2022
// This program shows assignment statements.

#include <iostream>

int main() {
    // Variable definition
    int numberOfStudents = 2;
    float width = 22.5;
    int length = 15;
    std::string word1 = "Hello";
    std::string word2 = "World!";

    // Using assignment statements
    numberOfStudents = numberOfStudents + 5;
    float areaOfRectangle = length * width;
    std::string helloWorld = word1 + ", " + word2;

    // Output
    std::cout << "The number of students is "
     << numberOfStudents << "." << std::endl;
    std::cout << "The area of a rectangle is "
     << areaOfRectangle << "cm^2." << std::endl;
    std::cout << helloWorld << std::endl;
    std::cout << "Done.";
}
