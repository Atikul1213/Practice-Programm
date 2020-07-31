#include<bits/stdc++.h>
using namespace std;
void onexit(){
    cout<<"Hi i am called before termination."<<endl;
}
int main()
{
    int counter = 1;
    if(atexit(onexit)!=0)
        cout<<"Failed to register as the termination function."<<endl;
    while(1){
        cout<<counter<<"\t";
        if(counter==10)
        exit(0);
        counter++;
    }
    return 0;
}
