// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4A
// Write a program lower.cpp that prints the bottom-left half of a square, given the side length.



#include <iostream>
using namespace std;

int main(){
    int side_length; // declared side length

   
    cout << "Input side length: ";
    cin >> side_length; // User inputs side length

    cout << endl;

    for (int row = side_length; row >= 0; row--) { // for each row
        for (int col = row; col < side_length; col++){ // for each column
                    cout << "*"; // for each column of the box with side legths prints *


        }
        cout << endl;
    
    }
}

   