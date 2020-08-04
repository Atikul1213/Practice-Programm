#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* link;
};
struct Node* head = NULL;
void insert(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    if(head==NULL){
        head = temp;
    }
    else{
        struct Node* t = head;
        while(t->link!=NULL){
            t = t->link;
        }
        t->link = temp;
    }
}
void print(){
    struct Node* temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"---->";
        temp = temp->link;
    }
}
int main()
{
    insert(1);
    insert(4);
    insert(3);
    insert(-5);
    insert(10);
    print();
    return 0;
}
//////    head = (struct Node*)malloc(sizeof(struct Node));
//////    head->data = 10;
//////    head->link = (struct Node*)malloc(sizeof(struct Node));
//////    head->link->data = 20;
//////    head->link->link = (struct Node*)malloc(sizeof(struct Node));
//////    head->link->link->data = 30;
//////    head->link->link->link = NULL;
//////    print();
