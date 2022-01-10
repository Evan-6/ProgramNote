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



#include<cstdio>
#include<cstdlib>
int add(int **a,int m,int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=a[i][j];
		}
	}
	return sum;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int **a=(int **)malloc(sizeof(int *)* m);
	for(int i=0;i<m;i++)a[i]=(int *)malloc(sizeof(int)* n);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
	}
	printf("%d",add(a,m,n));
} 



#include<cstdio>
#include<cstdlib>
void add(int **a,int **b,int m,int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]+=b[i][j];
		}
	}
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int **a=(int **)malloc(sizeof(int *)* m);
	for(int i=0;i<m;i++)a[i]=(int *)malloc(sizeof(int)* n);
	int **b=(int **)malloc(sizeof(int *)* m);
	for(int i=0;i<m;i++)b[i]=(int *)malloc(sizeof(int)* n);

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
	}
	puts("ENTER B:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
	}
	add(a,b,m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
	}
} 
