#include <iostream>
#include<cstdio>
#include <vector>
using namespace std;
void merge(vector<int> &b,int l,int mid,int r){
	if(l>=r)return;
	vector<int> LArray,RArray;
	for(int i=l;i<=mid;i++){
		LArray.push_back(b[i]);
	}
	for(int i=mid+1;i<=r;i++){
		RArray.push_back(b[i]);
	}
	int ltmp=0,rtmp=0;
	for(int i=l;i<=r;i++){
		if(ltmp==LArray.size()){
			b[i]=RArray.at(rtmp++);
		}
		else if(rtmp==RArray.size()){
			b[i]=LArray.at(ltmp++);
		}
		else if(LArray[ltmp]<RArray[rtmp]){
			b[i]=LArray.at(ltmp++);
		}
		else{
			b[i]=RArray.at(rtmp++);
		}
	}
}
void ms(vector<int> &b,int l,int r){
	if(l<r){
		int mid=l+r;
		mid/=2;
//		for(int i=l;i<=mid;i++){
//			cout<<b[i]<<" ";
//			if(i==mid)cout<<endl;
//		}
//		
//		for(int i=mid+1;i<=r;i++){
//			cout<<b[i]<<" ";
//			if(i==r)cout<<endl;
//		}
		ms(b,l,mid);
		ms(b,mid+1,r);
		merge(b,l,mid,r);
	}
} 
int main(){
	int a;
	cin>>a;
	while(a--){
		vector<int> b;
		
		int c;
		cin>>c;
		while(c!=-1){
			b.push_back(c);
			cin>>c;
		}
		ms(b,0,b.size()-1);
//		for(int i=0;i<b.size();i++){
//			cout<<b[i]<<" ";
//		}
		int d=b.size();
		if(d%2==0){
			printf("Median = %.2f\n",float(b[d/2-1]+b[d/2])/2);
		}else{
			printf("Median = %d\n",b[d/2]);
	}
	}
}
