#include<bits/stdc++.h>
using namespace std;
struct Person{
    int age;
    double height;
};
int main()
{
    struct Person* ps;
    ps = (struct Person*)malloc(sizeof(struct Person));
    ps->age = 30;
    ps->height = 4.7;
    cout<<ps->age<<'\t'<<ps->height<<endl;
    return 0;
}
