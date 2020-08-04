#include<bits/stdc++.h>
using namespace std;
struct myStruct{
    int age;
    double height;
};
int main()
{
    struct myStruct s1;
    s1.age = 10;
    s1.height = 39.33;
    cout<<s1.age<<'\t'<<s1.height<<endl;
    struct myStruct *ps1;
    ps1 = &s1;
    (*ps1).age = 21;
    (*ps1).height = 40.45;
    cout<<s1.age<<'\t'<<s1.height<<endl;

    ps1->age = 120;
    ps1->height = 50.90;
    cout<<s1.age<<'\t'<<s1.height<<endl;
    cout<<ps1->age<<'\t'<<ps1->height<<endl;
    return 0;
}
