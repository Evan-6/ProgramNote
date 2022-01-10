#include<stdio.h>
#include<stdlib.h>
int add(int *a,int m,int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=*((i*n)+a+j);
		}
	}
	return sum;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int *a=(int *)malloc(sizeof(int)*m*n);
	for(int i=0;i<m*n;i++){
		scanf("%d",(a+i));
	}
	printf("%d",add(a,m,n));
} 
