//initialize a vector in cpp and implementation of iterators

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{1, 2, 3, 4, 5};
    vector<int>::iterator it = num.begin();
    cout << "The first element is: " << *it << endl;
    it++;
    
    //iterator points to second element
    cout << "The second element is: " << *it << endl;
    it = num.end();
    cout << "The last element is: " << *it << endl;   
    return 0;
}