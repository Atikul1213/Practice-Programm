#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
Node* create_node(int item){
    Node* new_node = (struct Node*)malloc(sizeof(Node));
    if(new_node==NULL){
        cout<<"Error! could not create a node."<<endl;
        exit(1);
    }
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
void add_left_child(Node*  node,Node* child){
    node->left = child;
}
void add_right_child(Node* node,Node* child){
    node->right = child;
}
Node* create_tree(){
    Node* two = create_node(2);
    Node* seven = create_node(7);
    Node* nine = create_node(9);
    add_left_child(two,seven);
    add_right_child(two,nine);

    Node* one = create_node(1);
    Node* six = create_node(6);
    add_left_child(seven,one);
    add_right_child(seven,six);
    return two;
}
void pre_order(Node* node){
    cout<<node->data<<'\t';
    if(node->left!=NULL){
        pre_order(node->left);
    }
    if(node->right!=NULL){
        pre_order(node->right);
    }
}
void post_order(Node* node){
    if(node->left!=NULL){
        post_order(node->left);
    }
    if(node->right!=NULL){
        post_order(node->right);
    }
    cout<<node->data<<'\t';
}
void in_order(Node* node){
    if(node->left!=NULL){
        in_order(node->left);
    }
    cout<<node->data<<'\t';
    if(node->right!=NULL){
        in_order(node->right);
    }
}
int main()
{
    Node* root = create_tree();
    cout<<root->data<<'\t';
    return 0;
}
