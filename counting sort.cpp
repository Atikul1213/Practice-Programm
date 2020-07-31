#include<bits/stdc++.h>
#define Size 100
#define range 10
using namespace std;
int arr[Size];
int main()
{
    int i,n,value;
    cout<<"Enter the number of values: ";
    cin>>n;
    cout<<"Enter "<<n<<" element(1 to 10): "<<endl;
    for(int i=1;i<=n;i++){
        cin>>value;
        arr[value] +=1;
    }
    cout<<"\n Frequencis of value (1 to 10): "<<endl;
    for(int i=1;i<=range;i++){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}
