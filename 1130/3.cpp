#include <iostream>
#include <algorithm>
using namespace std;
typedef struct bt{
	int n;
	bt* l=NULL;
	bt* r=NULL;
}BT;
BT* newBT(){
	return new BT;
}
int m=1;
void inorder(BT* node,int a){

  if(node) {
  	if(a>m)m=a;
    inorder(node->l,a+1);
    //cout << node->n << " ";
    inorder(node->r,a+1);
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
	inorder(root,1);
	cout<<m;
}
