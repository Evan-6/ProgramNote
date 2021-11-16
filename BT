#include <iostream>
using namespace std;
#define SIZE 10240
int main(){
	int m[SIZE]={0};
	for(int i=0;i<SIZE;i++)m[i]=-1;
	int a=0,d;
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		for(int i=0;i<a;i++){
			if(d==m[i])d=-2;
		}
		if(d!=-1&&d!=-2){
			m[a]=d;
			a++;
		}
	}
	for(int i=0;i<a;i++){
		//cout<<m[i];
	}
	int b,c,e[SIZE],o=0;
	while(true){
		cin>>b;
		if(b<=0)break;
		cin>>c;
		if(b==1){
			for(int i=0;i<a;i++){
				if(m[i]==c){
					if(((i+1)/2-1)<a){
						if(m[(i+1)/2-1]==-1){
							e[o]=-1;
						}
					}
					e[o]=m[(i+1)/2-1];
					break;
				}
				if(i==a-1)e[o]=-1;
			}
		}else if(b==2){
			for(int i=0;i<a;i++){
				if(m[i]==c){
					if(((i+1)*2-1)<a){
						if(m[(i+1)/2-1]==-1){
							e[o]=-1;
						}
					}
					e[o]=m[(i+1)*2-1];
					break;
				}
				if(i==a-1)e[o]=-1;
			}
		}
		else if(b==3){
			for(int i=0;i<a;i++){
					if(((i+1)*2-1+1)<a){
						if(m[(i+1)*2-1+1]==-1){
							e[o]=-1;
						}
					}
				if(m[i]==c){
					e[o]=m[(i+1)*2-1+1];
					
					break; 
				}
				if(i==a-1)e[o]=-1;
			}
		}
		o++;
	}
	for(int i=0;i<o;i++){
		cout<<e[i];
		if(i!=o-1)cout<<" ";
	}
}
