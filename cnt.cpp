#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[82];
    int t,cnt,sum;
    cin>>t;
    while(t--){
        scanf("%*c%s",str);
        cnt=1,sum = 0;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='X') cnt = 1;
            else if(str[i]=='O'){
                sum = sum + cnt;
                cnt++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
