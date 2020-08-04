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
         struct Node*  t = head;
         while(t->link!=NULL){
            t = t->link;
         }
        t->link = temp;
    }
}

void insert_first(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = head;
    head = temp;
}

void delete_Node(int pos){
    if(pos==1){
        struct Node* temp = head;
        head = head->link;
        free(temp);
    }
    else{
        struct Node* temp1 = head;
        for(int i=1;i< pos-1;i++){
            temp1 = temp1->link;
        }
        struct Node* temp2;
        temp2 = temp1->link;
        temp1->link = temp2->link;
        free(temp2);
    }
}

void insert_sort(int value){
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = value;
    if(head==NULL || temp1->data < head->data){
        temp1->link = head;
        head = temp1;
    }
    else{
        struct Node* pred = head;
        struct Node* p = pred->link;
        while(p!=NULL && temp1->data > p->data){
                pred = p;
            p = p->link;
        }
        pred->link = temp1;
        temp1->link = p;
    }
}
void print(){
    struct Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"----->";
        temp = temp->link;
    }
    cout<<endl<<endl;
}
int main()
{
    insert(1);
    insert(3);
    insert(5);
    insert(9);
    insert(11);
    insert(13);
    print();
    insert_sort(8);
    print();
    return 0;
}
