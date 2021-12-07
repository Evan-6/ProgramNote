#include <iostream>
using namespace std;
#define SIZE 10240
int m[SIZE];
int a=1;
int find(int in){
	for(int i=1;i<a;i++){
		if(m[i]==in)return i;
	}
}
int main(){
	
	for(int i=0;i<SIZE;i++)m[i]=-1;
	int d,e;
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		for(int i=1;i<=a;i++){
			if(d==m[i])d=-2;
		}
		if(d!=-1&&d!=-2){
			m[a]=d;
			a++;
		}
	}
	for(int i=1;i<a;i++){
		//cout<<m[i];
	}
	int ans[a]={0};
	int link[a][a]={0};
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		cin>>e;
		link[find(d)][find(e)]=1;
		link[find(e)][find(d)]=1;
	}
	for(int i=1;i<a;i++){
		for(int j=1;j<a;j++){
			if(link[i][j])ans[i]++;
		}
	}
	for(int i=1;i<a;i++){
		cout<<m[i]<<":"<<ans[i]<<endl;
	}
}




#include <iostream>
using namespace std;
#define SIZE 10240
int m[SIZE];
int a=1;
int find(int in){
	for(int i=1;i<a;i++){
		if(m[i]==in)return i;
	}
}
int main(){
	
	for(int i=0;i<SIZE;i++)m[i]=-1;
	int d,e;
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		for(int i=1;i<=a;i++){
			if(d==m[i])d=-2;
		}
		if(d!=-1&&d!=-2){
			m[a]=d;
			a++;
		}
	}
	for(int i=1;i<a;i++){
		//cout<<m[i];
	}
	int ans[a]={0};
	int ans2[a]={0};
	int link[a][a]={0};
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		cin>>e;
		link[find(d)][find(e)]=1;
	}
	for(int i=1;i<a;i++){
		for(int j=1;j<a;j++){
			if(link[i][j])ans[i]++;
		}
	}
	for(int i=1;i<a;i++){
		for(int j=1;j<a;j++){
			if(link[j][i])ans2[i]++;
		}
	}
	for(int i=1;i<a;i++){
		cout<<m[i]<<":"<<ans[i]<<" "<<ans2[i]<<endl;
	}
}
