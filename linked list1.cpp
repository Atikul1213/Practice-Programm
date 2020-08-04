#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *link;
};
struct Node* head = NULL;
void print(){
    struct Node* temp = head;
    cout<<"Current list:";
    while(temp!=NULL){
        cout<<temp->data<<"---->";
        temp = temp->link;
    }
    cout<<endl;
}
int main()
{
     head = (struct Node*)malloc(sizeof(Node));
    head->data = 2;
    cout<<head->data<<endl;
    head->link = (struct Node*)malloc(sizeof(Node));
    head->link->data  = 5;
    cout<<head->link->data<<endl;
    head->link->link = NULL;
    print();
    return 0;
}
