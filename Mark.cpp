// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses user defined functions

#include <iostream>
#include <string>

int calculateMark(std::string level) {
    // this function calculate area of triangle

    int percentage;

    // process
      if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 55;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 30;
    } else {
        return -1;
    }
    
    return percentage;
}


int main() {
    // thr function gets percentage

    std::string level;
    int calculatedMark;

    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> level;
    std::cout << std::endl;

    // call function
    calculatedMark = calculateMark(level);

    // output
    if (calculatedMark == -1) {
        std::cout << "It is not a mark.";
    } else {
        std::cout << "level " << level << " has a middle percentage of "
                  << calculatedMark << "%.";
    }
}
