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
	inorder(root);
}
