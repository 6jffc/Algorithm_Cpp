#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int value){
		data = value;
		right = NULL;
		left = NULL; 
	} 
};

node*insert(node*root, int value){
	if(root == NULL)
	{
		return new node(value); 
	 } 
	 if(value<root->data)
	 {
	 	root->left=insert(root->left,value); 
	 }
	 else{
	 	root->right = insert(root->right,value); 
	 } 
	 return root; 
} 

void duyetcaygiua(node* root){
	if(root == NULL){
		return; 
	} 
	cout<<root->data<<" ";
	duyetcaygiua(root->left);
	duyetcaygiua(root->right); 
} 
int main(){
	node* root = NULL;
	int values[] = {27, 19, 10, 21, 35, 25, 41, 12, 46, 7};
	int n = sizeof(values) / sizeof(values[0]);
    for (int i = 0; i < n; ++i) {
        root = insert(root, values[i]);
    }
	cout<<"Duyet cay theo thu tu truoc: ";
	duyetcaygiua(root);
	cout<<endl;
	return 0;	 
} 
