#include <iostream>
using namespace std;

class myClass{
    public:
        string brand;
        string model;
        int year;
        myClass(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        };
};

int main(){
    myClass car1("BMW", "X5", 1999);
    myClass car2("Ford", "Mustang", 1969);
    myClass car3
    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;
    return 0;
}