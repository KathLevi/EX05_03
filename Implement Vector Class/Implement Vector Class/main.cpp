////////////////////////
//Name: Kathleen Levi
//
//Project: EX05_03 (12.8)
//
//Date: 09 June 2105
////////////////////////

#include <iostream>
#include <vector>
#include <string>
using namespace std;
// implement the functions defined in the uml class diagram shown in 12.2


int main(){
    //constructs and empty vector with the element type
    vector<int>();
    
    //constructs a vector with the initial size, filled with default values
    vector<int> (5);
    
    //constructs a vector with the initial size, filled with specific values
    vector<int> (8, int(3));
    
    //initalizes a vector for the rest of the functions in the class
    vector<int> v1;
    
    //Appends the element in this vector
    for (int i = 0; i < 10; i++){
        v1.push_back(i + 1);
    }
    
    //Removes the last element from the vector
    v1.pop_back();
    
    //returns the number of elements in the vector
    cout << "The number of elements in the vector are " << v1.size() << endl;
    
    //display the vector
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) << " ";
    }
    
    //returns true if the vector is empty
    cout << "\nEmpty vector? " << v1.empty() << endl;
    
    //swaps the new vector and the old vector
    vector<string> v2;
    vector<string> stringVector;
    stringVector.push_back("Abc");
    stringVector.push_back("Def");
    stringVector.push_back("Ghi");
    v2.swap(stringVector);
    
    //removes all the elements from the vector
    v1.clear();
    
    
    
}