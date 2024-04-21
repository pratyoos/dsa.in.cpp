#include <iostream>
using namespace std;
class employee{
    private:
        int salary;

    public:
        //getter
        void setSalary(int s){
            salary = s;
        };

        //setter
        int getSalary(){
            return salary;
        };
};

int main(){
    employee emp1;
    emp1.setSalary(50000);
    cout << emp1.getSalary() << endl;
    return 0;
}