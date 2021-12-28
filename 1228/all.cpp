#include <iostream>
#include <stdlib.h>
#include<cstring>
//#include<string.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int q[1000];
		string str="\n";
		getline(cin,str);
		string str2[1000];
		str="";
		getline(cin,str);
		int count=0,w=0;
		while(str[count]!='\0'){
			if(str[count]==' '){
				count++;
				w++;
				continue; 
			} 
			str2[w]+=str[count];
			count++;
		}
		//cout<<w;
		for(int i=0;i<=w;i++){
			q[i]=stoi(str2[i]);
		}
		int s;
		cin>>s;
		for(int i=0;i<=w;i++){
			if(q[i]==s){
				cout<<i<<endl;
				break;	
			}
			else if(i==w)cout<<"-1"<<endl;
		}
	}
}










#include <iostream>
#include <stdlib.h>
#include<cstring>
//#include<string.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int q[1000];
		string str="\n";
		getline(cin,str);
		string str2[1000];
		str="";
		getline(cin,str);
		int count=0,w=0;
		while(str[count]!='\0'){
			if(str[count]==' '){
				count++;
				w++;
				continue; 
			} 
			str2[w]+=str[count];
			count++;
		}
		//cout<<w;
		for(int i=0;i<=w;i++){
			q[i]=stoi(str2[i]);
		}
		
		
		count=w+1;
		int min=2147483647;
		for(int i=0;i<count;i++){
			int min=i;
			for(int j=i+1;j<count;j++){
				if(q[min]>q[j]){
					min=j;
				}
			}
			int tmp=q[i];
			q[i]=q[min];
			q[min]=tmp;
			for(int x=0;x<count;x++){
				//cout<<input[x]<<" ";
			}
				//cout<<endl;
		}
		int search,o=1;
		cin>>search;
		int l=0,r=count-1,n;
		while(true){
			n=(l+r)/2;
			if(q[n]==search){
				break;
			}
			else if(l>=r){
				//cout<<"-1";
				o=0;
				break;
			}
			else if(q[n]>search){
				r=n-1;
			}
			else{
				l=n+1;
			}
		}
		if(o)cout<<"Found"<<endl;
		else cout<<"Not found"<<endl;
	}
}









#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int q;
		cin>>q;
		int w[q];
		for(int i=0;i<q;i++){
			cin>>w[i];
		}
		int c=0;
		for(int i=0;i<q-1;i++){
			for(int j=0;j<q-1;j++){
				if(w[j]>w[j+1]){
					int tmp=w[j];
					w[j]=w[j+1];
					w[j+1]=tmp;
					c++;
					
				}
			}
		}
		cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
	}
}
