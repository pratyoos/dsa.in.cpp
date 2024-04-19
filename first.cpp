// #include <iostream>

// using namespace std;
// int main() {
//     int a[]={1,1,0,1,1,1,0,1,1,1,1,1,1};
//     int n=sizeof(a)/sizeof(a[0]);
//     int count=0, max = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==1)
//         {
//             count++;
//             if(count>max)
//             {
//                 max=count;
//             }
//             else
//             {
//                 count=0;
//             }
//         }
//     }
//     cout << max <<endl;
//     return 0;
// }

//another function to invert a given string
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