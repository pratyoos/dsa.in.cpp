#include <iostream>
using namespace std;
class rectangle {
    public:
        int length;
        int breadth;

        rectangle(int len, int brth): length(len), breadth(brth){}
        
        int getArea(){
            return length*breadth;
    }
};

int main(){
    rectangle r1(3,2);
    rectangle r2(4,5);
    rectangle r3(6,7);
    rectangle r4(8,9);

    cout << r1.getArea() << endl;
    cout << r2.getArea() << endl;
    cout << r3.getArea() << endl;
    cout << r4.getArea() << endl;
    return 0;
}
