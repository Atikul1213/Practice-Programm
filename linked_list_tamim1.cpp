#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* link;
};
Node* create_node(int item,Node* next){
    Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL){
        cout<<"Error! Could not create a node."<<endl;
        exit(1);
    }
    new_node->data = item;
    new_node->link = next;
    return new_node;
}
Node* remove_node(Node* head )
int main()
{
    struct Node* n;
    n = create_node(15,NULL);
    cout<<"Data = "<<n->data<<endl;
    return 0;
}
