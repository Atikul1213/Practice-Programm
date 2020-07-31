#include<bits/stdc++.h>
#define Mark 50
using namespace std;
int main()
{
    #if Mark >=75
    cout<<"Your mark are greater than 75."<<endl;
    cout<<"You have got the grade A."<<endl;
    #elif Mark >=50
        cout<<"Your mark are greater than 50 ans less than 75"<<endl;
        cout<<"Your have got the grade."<<endl;
    #else
        cout<<"Your mark are less"<<endl;
    #endif // Mark
    return 0;
}
