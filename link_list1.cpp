#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *link;
};
struct Node* head = NULL;
int main()
{
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    cout<<head->data<<endl;
    head->link = (struct Node*)malloc(sizeof(struct Node));
    head->link->data = 20;
    cout<<head->link->data<<endl;
    head->link->link=(struct Node*)malloc(sizeof(struct Node));
    head->link->link->data = 30;
    cout<<head->link->link->data<<endl;
    return 0;
}
