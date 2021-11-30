#include <iostream>
using namespace std;
typedef struct bt{
	int n;
	bt* l=NULL;
	bt* r=NULL;
}BT;
BT* newBT(){
	return new BT;
}
BT* inorderSR(BT* node,int SR){
	if(node->n==SR)return node;
  if(node) {
    inorderSR(node->l,SR);
    //cout << node->n << " ";
    inorderSR(node->r,SR);
  }
}
void inorder(BT* node){
  if(node) {
    inorder(node->l);
    cout << node->n << " ";
    inorder(node->r);
  }
}


int main(){
	BT* root=newBT();
	BT* node=root;
	int in;
	cin>>root->n;
	while(true){
		cin>>in;
		if(in<0)break;
		node=root;
		while(true){
			if(in<node->n&&node->l){
				node=node->l;
			}else if(in>node->n&&node->r){
				node=node->r;
			}else{
				if(in<node->n){
					node->l=newBT();
					node=node->l;
					node->n=in;
					break;
				}
				else if(in>node->n){
					node->r=newBT();
					node=node->r;
					node->n=in;
					break;
				}
				else{
					cout<<"新增節點失敗"<<endl;
					break;
				}
			}
		}
	}
	while(true){
		cin>>in;
		if(in<0)break;
		BT* up=root;
		node=root->l;
		int which=0;
		while(true){
			if(node->r){
				up=node;
				node=node->r;
				which=1;
			}else if(node->l){
				up=node;
				node=node->l;
				which=0;
			}
			else{
				break;
			}
		}
		if(which)up->r=NULL;
		else up->l=NULL;
		inorderSR(root,in)->n=node->n;
	}
	inorder(root);
}
