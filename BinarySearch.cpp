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
	
	cout<<"\n--------------------"<<endl;
	int search;
	cin>>search;
	int l=0,r=count-1,n;
	while(true){
		n=(l+r)/2;
		if(input[n]==search){
			break;
		}
		else if(l>=r){
			cout<<"-1";
			return 0;
		}
		else if(input[n]>search){
			r=n-1;
		}
		else{
			l=n+1;
		}
	}
	cout<<"["<<n<<"]"<<search;
}








