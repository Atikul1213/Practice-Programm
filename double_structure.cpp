#include<bits/stdc++.h>
using namespace std;
struct create_account{
    char first_name[30];
    char last_name[30];
    char user_name[30];
    char password[30];
    struct birth{
        int day;
        int month;
        int year;
    };
    struct sex{
        int male;
        int female;
    };
};
int main()
{
    struct create_account user;
    char passck[30];
    char sexck[20];
    cout<<"Enter your first name: ";
    cin>>user.first_name;
    cout<<"Enter your last name: ";
    cin>>user.last_name;
    cout<<"Enter your user name: ";
    cin>>user.user_name;
    cout<<"Enter your password: ";
    cin>>user.password;
    cout<<"Repeat your password: ";
    cin>>passck;
    if(strcmp(user.password,passck)!=0){
        cout<<"Wrong password."<<endl;
        return 0;
    }
    cout<<"Enter your birth data: "<<endl;
    cout<<"\tDay: ";
    cin>>user.birth.day;
    cout<<"\tMonth: ";
    cin>>user.birth.month;
    cout<<"\t Year: ";
    cin>>user.birth.year;
    cout<<"Enter your Sex(if male press m else press n) : ";
    cin>>sexck;
    if(strcmp(sexck,"m")==0||strcmp(sexck,"M")==0){
        user.sex.male = 1;
        user.sex.female = 0;
    }
    else if(strcmp(sexck,"f")==0 || strcmp(sexck,"F")==0){
        user.sex.female = 1;
        user.sex.male = 0;
    }
    else{
        cout<<"You have press Wrong keyword."<<endl;
    }

    cout<<"First Name: "<<user.first_name<<endl;
    cout<<"Last Name: "<<user.last_name<<endl;
    cout<<"User Name: "<<user.user_name<<endl;
    cout<<"Password: "<<user.password<<endl;
    return 0;
}
