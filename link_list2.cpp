#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* link;
};
struct Node* head = NULL;
void print(){
    struct Node* temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<'\t';
        temp = temp->link;
    }
}
int main()
{
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->link = (struct Node*)malloc(sizeof(struct Node));
    head->link->data = 20;
    head->link->link = NULL;
    print();
    return 0;
}
