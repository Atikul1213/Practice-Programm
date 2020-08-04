#include<bits/stdc++.h>
using namespace std;
int Summation(int n){
    int sum = 0,rem;
    while(n!=0){
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
int main()
{
    char str[53];
    int num[200],k=1,j=1,sum;
    for(char i='A';i<='Z';i++)
        num[i] = k++;
    for(char i='a';i<='z';i++)
        num[i] = j++;

    while(scanf("%s%*c",str)!=EOF){
            sum = 0;
    for(int i=0;str[i]!='\0';i++){
        sum += num[str[i]];
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Temp sum = "<<Summation(sum)<<endl;
    }
    return 0;
}
