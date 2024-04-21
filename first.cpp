#include <iostream>            
#include <string>
using namespace std;
int main() {
    string s="hello";
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    cout << s <<endl;
    return 0;
}   