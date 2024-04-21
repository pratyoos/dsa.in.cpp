#include <iostream>
using namespace std;
class Company{
    public:
        string brand;
        Company(string x):brand(x){};
        void honk(){
            cout << "Tuut, tuut!" << endl;
        }
};

//bike inherits from company class

class Bike: public Company{
    public:
        string model;
        Bike(string x, string y):Company(x),model(y){};
};

int main(){
    Bike myBike1("BMW", "X5");
    Bike myBike2("Ford", "Mustang");
    Bike myBike3("Toyota", "Corolla");

    myBike1.honk();

    cout << myBike1.brand << " " << myBike1.model << endl;
    cout << myBike2.brand << " " << myBike2.model << endl;
    cout << myBike3.brand << " " << myBike3.model << endl;

    return 0;
}