#include <iostream>
using namespace std;
#define SIZE 10
void swap(int *a,int *b){
	int i=*a;
	*a=*b;
	*b=i;
}
void pai(int m[],int a){
	int cc=1;
	while(true){
		if(cc==0)break;
		cc=0;
		for(int i=a;i>1;i--){
			if(m[i]<m[i/2]){
				swap(&m[i],&m[i/2]);
			}
		}
		for(int i=a;i>1;i--){
			if(m[i]<m[i/2]){
				cc++;
			}
		}
	} 
}
int main(){
	int m[SIZE+1]={0};
	for(int i=1;i<=SIZE;i++)m[i]=0;
	int a=0,d;
	while(true){
		cin>>d;
		if(d==-1){
			break;
		}
		for(int i=1;i<=a;i++){
			if(d==m[i])d=-2;
		}
		if(d!=-1&&d!=-2&&a<SIZE){
			m[a+1]=d;
			a++;
			pai(m,a);
		}else{
			cout<<"The heap is full, No insertion made"<<endl;
		}
	}
	pai(m,a);
	
	for(int i=1;i<=a;i++){
		cout<<"["<<i<<"] = "<<m[i]<<endl;
	}
}


















//2
#include <iostream>
using namespace std;
#define SIZE 10
void swap(int *a,int *b){
	int i=*a;
	*a=*b;
	*b=i;
}
void pai(int m[],int a){
	int cc=1;
	while(true){
		if(cc==0)break;
		cc=0;
		for(int i=a;i>1;i--){
			if(m[i]<m[i/2]){
				swap(&m[i],&m[i/2]);
			}
		}
		for(int i=a;i>1;i--){
			if(m[i]<m[i/2]){
				cc++;
			}
		}
	} 
}
int main(){
	int m[SIZE+1]={0};
	for(int i=1;i<=SIZE;i++)m[i]=0;
	int a=0,d,sw;
	while(true){
		cin>>sw;
		switch(sw){
			case 1:
				cin>>d;
				if(d==-1){
					break;
				}
				for(int i=1;i<=a;i++){
					if(d==m[i])d=-2;
				}
				if(d!=-1&&d!=-2&&a<SIZE){
					m[a+1]=d;
					a++;
					pai(m,a);
				}else{
					cout<<"The heap is full, No insertion made"<<endl;
				}
				break;
			case 2:
				if(a==0){
					cout<<"The heap is empty, No deletion made.";
					break;
				}
				m[1]=m[a];
				a--;
				pai(m,a);
				break;
			default:
				for(int i=1;i<=a;i++){
					cout<<"["<<i<<"] = "<<m[i]<<endl;
				}
				return 0;	
		}
		
	}
	

}











//3
#include <iostream>
using namespace std;
#define SIZE 10
void swap(int *a,int *b){
	int i=*a;
	*a=*b;
	*b=i;
}
void pai(int m[],int a){
	int cc=1;
	while(true){
		if(cc==0)break;
		cc=0;
		for(int i=a;i>1;i--){
			if(m[i]<m[i/2]){
				swap(&m[i],&m[i/2]);
			}
		}
		for(int i=a;i>1;i--){
			if(m[i]<m[i/2]){
				cc++;
			}
		}
	} 
}
int main(){
	int m[SIZE+1]={0};
	for(int i=1;i<=SIZE;i++)m[i]=0;
	int a=0,d,sw;
	while(true){
		cin>>sw;
		switch(sw){
			case 1:
				cin>>d;
				if(d==-1){
					break;
				}
				for(int i=1;i<=a;i++){
					if(d==m[i])d=-2;
				}
				if(d!=-1&&d!=-2&&a<SIZE){
					m[a+1]=d;
					a++;
					pai(m,a);
				}else{
					cout<<"The heap is full, No insertion made"<<endl;
				}
				break;
			case 2:
				if(a==0){
					cout<<"The heap is empty, No deletion made.";
					break;
				}
				m[1]=m[a];
				a--;
				pai(m,a);
				break;
			default:
				for(int i=1;i<=a;i++){
					cout<<"["<<i<<"] = "<<m[i]<<endl;
				}
				int ser;
            	int yyyyy=2;
				while(yyyyy--){ 
					cin>>ser;
					for(int i=a;i>1;i--){
						if(m[i]==ser){
							cout<<"The number is found in index "<<i<<endl;
							break;
						}
						if(i==2)cout<<"Not Found"<<endl;
					}	
				} 
            	return 0;
		}
		
	}
	

}
