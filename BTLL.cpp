#include <iostream>
using namespace std;

typedef struct BTree{
	int n=0;
	BTree* next=NULL;
}T;

T* newT(){
	T* a= new BTree;
	return a;
}

int main(){
	T* first=newT();
	T* node=first;
	int a=0,d;
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		for(int i=0;i<a;i++){
			node=first;
			while(node->next!=NULL){
				if(node!=first&&node->n==d)d==-2;
				node=node->next;
			}
		}
		if(d!=-1&&d!=-2){
			node=first;
			while(node->next!=NULL){
				node=node->next;
			}
			T* tmp=newT();
			node->next=tmp;
			node=node->next;
			node->n=d;
		}
	}
	while(true){
		cin>>d;
		int x=0;
		if(d==-1)break;
		node=first->next;
		while(node!=NULL){
			if(node->n==d)x=1;
			node=node->next;
		}	
		if(x){
			cout<<"found"<<endl;
		}else{
			cout<<"not found"<<endl;
		}
	}
	
}
