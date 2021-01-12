/*  
    CS 260 DATA STRUCTURES                                                        
    Mico Ssntiago                                                                  
    Assignment 1 (Bag of Marbles)             
    The idea is to use an array to store elements in a bag, these element are our "marbles", the definition of a bag is 
    " An unordered collection of values that may have duplicates." (https://xlinux.nist.gov/dads/HTML/bag.html#:~:text=(data%20structure),values%20that%20may%20have%20duplicates.)
    Resources I used were SamsTeachYourself C++ by Siddhartha Rao

*/
#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    const int MARBLE_COLOR = 4;

                                                                                    
    int my_colors [MARBLE_COLOR] = { 0, 1, 2, 3};                                           //Array of 5 integers, initialized using a const, this is our bag

    cout << "0- Blue    |" << endl;                                                              //Straight forward, giving a really simple menu
    cout << "1- Yellow  |" << endl;
    cout << "2- Red     |" << endl;
    cout << "3- Green   |" << endl;
    cout << "Enter the color of the marble that needs to be changed: "; 
    int element_index = 0;
    cin >> element_index;

    cout << "Enter new value: ";
    int new_value = 0;
    cin >> new_value;

    my_colors[element_index] = new_value;

    cout << "Color number " << element_index << " will have ";
    cout << my_colors[element_index] << " number of marbles" << endl;



}