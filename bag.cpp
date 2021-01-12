/*  
    CS 260 DATA STRUCTURES                                                        
    Mico Ssntiago                                                                  
    Assignment 1 (Bag of Marbles)             
    The idea is to use an array to store elements in a bag, these element are our "marbles", the definition of a bag is 
    " An unordered collection of values that may have duplicates." (https://xlinux.nist.gov/dads/HTML/bag.html#:~:text=(data%20structure),values%20that%20may%20have%20duplicates.)
    Resources I used were SamsTeachYourself C++ by Siddhartha Rao


#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    const int MARBLE_COLOR = 4;

    int my_colors [MARBLE_COLOR] = { 0, 1, 2, 3};                                               //Array of 5 integers, initialized using a const, this is our bag

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

    What I realized is that I could've just made a dynamic array to represent the bag and to have the elements to present the marbles.
    This is my second attempt


    My conclusion is that this program won't be complete until furthur grasp on pointers.
    I say that because im strugging to implent a way to delete an element in an array. 

*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> bag (4);                                                   //dynanic array of int

    bag[0] = 0;
    bag[1] = 1;
    bag[3] = 2;
    bag[4] = 3;

    cout << "Number of Marbles in bag: " << bag.size() << endl;
    cout << "0- Blue    |" << endl;                                                              //Straight forward, giving a really simple menu
    cout << "1- Yellow  |" << endl;
    cout << "2- Red     |" << endl;
    cout << "3- Green   |" << endl;
    cout << "Enter marble number to insert" << endl;
    int new_marble = 0;
    cin >> new_marble;
    bag.push_back(new_marble);                                              //Strings can be added at any time with push_back https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/

    cout << "Number of marbles in bag: " << bag.size() << endl;
    cout << "Last color in array is: ";
    cout << bag[bag.size() - 1] << endl;
    return 0;


}