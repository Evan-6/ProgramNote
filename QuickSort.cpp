#include <iostream>
#include <vector>
using namespace std;
int count=0,count2=0;
void qs(vector<int> &b,int l,int r){
	if(l<r){
		int p=b[l];
		int bpos=l;
		int i=l+1,j=r;
		while(i<j){
			while(b[i]<p)i++;
			while(b[j]>p)j--;
			if(i<j){
				for(int s=0;s<b.size();s++){
				//cout<<b[s]<<" ";
			}
			//cout<<endl;
				swap(b.at(i),b.at(j));
				count++;
			}
		}
		if(b[l]>b[j]){
			count++;
			swap(b.at(l),b.at(j));
		}
//		if(1){
			for(int s=0;s<b.size();s++){
				//cout<<b[s]<<" ";
			}
			//cout<<endl;
//			count++;
//		}
		qs(b,l,j-1);
		qs(b,j+1,r);
	}
} 
int main(){
	int a;
	cin>>a;
	while(a--){
		vector<int> b;
		
		int c;
		cin>>c;
		int d=0;
		while(c!=-1){
			b.push_back(c);
			cin>>c;
			d++;
		}
		int p=b[0];
		qs(b,0,b.size()-1);
		for(int i=0;i<b.size();i++){
			//cout<<b[i]<<" ";
		}
		cout<<"Swap "<<count<<" times"<<endl;
		count2+=count;
		count=0;
	}
	cout<<"Total Swap "<<count2<<" times";
}
