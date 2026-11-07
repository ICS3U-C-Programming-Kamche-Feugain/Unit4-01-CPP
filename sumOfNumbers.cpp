// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Nov 5, 2026
// This program asks the user
// to make a while loop program
// make the users number false.
#include <iostream>
#include <string>

int main() {
    // declare variables
    int loop_counter = 0;
    int sum_of_numbers = 0;
    std::string positive_number_str;

    // get user input
    std::cout << "Enter a positive number: ";
    std::cin >> positive_number_str;

    std::cout << "Positive number: " << positive_number_str << std::endl;

    // catch errors that may occur during user input
    try {
        // Convert user input to an integer
        int positive_number_int = std::stoi(positive_number_str);

        // Check if the number is positive
        if (positive_number_int <= 0) {
            std::cout << positive_number_str
                      << " is not a positive number. "
                      << "Please enter a positive number. "
                      << std::endl;
        } else {
            sum_of_numbers = 0;

            // Loop through the numbers from 0 to the user's number
            while (loop_counter < positive_number_int) {
                std::cout << "Tracking" << loop_counter
                          << "times through the loop." << std::endl;

                sum_of_numbers += loop_counter;
                loop_counter += 1;
            }
        // display results
        std::cout << "The sum of all the numbers from 0 to"
                  << positive_number_int
                  << "is: " << sum_of_numbers << std::endl;
        }
    }
        catch (const std::invalid_argument& e) {
        std::cout << positive_number_str << "is not a valid integer."
                  << "Please enter a valid integer." << std::endl;
        }
