#include <iostream>
using namespace std;
int main(){
	int count;
	cin>>count;
	int input[count];
	int min=2147483647;
	for(int i=0;i<count;i++){
		cin>>input[i];
	}
	cout<<"--------------------"<<endl;
	for(int i=0;i<count;i++){
		int min=i;
		for(int j=i+1;j<count;j++){
			if(input[min]>input[j]){
				min=j;
			}
		}
		int tmp=input[i];
		input[i]=input[min];
		input[min]=tmp;
		for(int x=0;x<count;x++){
			cout<<input[x]<<" ";
		}
		cout<<endl;
	}
	cout<<"--------------------"<<endl;
	for(int i=0;i<count;i++){
		cout<<input[i]<<" ";
	}
}
