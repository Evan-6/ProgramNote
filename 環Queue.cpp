#include <iostream>
using namespace std;
typedef struct Queue{
	int num;
}Q;
Q q[5];
int front=0,rear=0;
int now=0;
void add(int num){
	if(now<5){
		now++;
		if(rear==4){
			rear=-1;
			q[++rear].num=num;
		}
		else{
			q[++rear].num=num;
		}
	}
	else{
		cout<<"FULL";
	}
}
int del(){
	if(now>0){
		now--;
		if(front==4){
			front=-1;
			return q[++front].num;
		}
		else{
			return q[++front].num;
		}
	}
	else{
		cout<<"NONE";
		return -1;
	}
}

int main(){
	cout<<&q[0];
	int a;
	cin>>a;
	while(1){
		switch(a){
			case 1:
				int b;
				cin>>b;
				add(b);
				break;
			case 2:
				cout<<del()<<endl;
				break;
		}
		cin>>a;
	}
}
