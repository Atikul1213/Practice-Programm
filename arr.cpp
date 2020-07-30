#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
    int n,sid;
    cin>>n; /// n must be range;
    for(int i=0;i<n;i++){
        cin>>sid;
        arr[sid-1]++;
    }
    int maximum_score = 0;
    for(int i=0;i<10;i++){
        if(maximum_score<arr[i]){
            maximum_score = arr[i];
        }
    }
    cout<<"Winners are: "<<endl;
    for(int i=0;i<10;i++)
        if(maximum_score == arr[i])
        cout<<i+1<<endl;

    return 0;
}
