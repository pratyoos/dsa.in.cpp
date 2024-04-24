//add, access and delete elements of vector

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> num {1, 2, 3, 4, 5};

    cout << "Initial Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }
  
    // add the integers 6 and 7 to the vector
    num.push_back(6);
    num.push_back(7);

    cout << "\nUpdated Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }
    cout << endl << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
}