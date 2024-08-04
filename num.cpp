#include <iostream>
#include <cstring>
using namespace std;

class String {
    private:
        char* data;
    public:
        String() {
            data = new char[1];
            data[0] = '\0';
        }
        String(const char* str) {
            if (str) {
                data = new char[strlen(str) + 1];
                strcpy(data, str);
            } else {
                data = new char[1];
                data[0] = '\0';
            }
        }
        void join(const String& o1, const String& o2) {
            delete[] data;
            data = new char[strlen(o1.data) + strlen(o2.data) + 1];
            strcpy(data, o1.data);
            strcat(data, o2.data);
        }
        void display() const {
            cout << data;
        }
        ~String() {
            delete[] data;
        }
};

int main() {
    String s1("Engineers are "), s2("Creatures of logic"), s3;
    s3.join(s1, s2);
    s1.display();
    cout << " + ";
    s2.display();
    cout << " = ";
    s3.display();
    return 0;
}