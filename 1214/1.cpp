Q1
Description

依照上週所製作的題目，可以發現有向圖在相鄰矩陣中可以紀錄全部點與點之間的線段位置，透過0和1我們可以繪製出一張完整的圖

接下來我們一樣要使用相鄰矩陣但是必須為每個邊增加一個權重值並把添加權重後並輸出完整抽象矩陣

範例測資圖片

image.pngimage.png


Input
第一步

(點的數量),(邊的數量)

第二步

每個邊的對應權重

(點),(點),(權重)

.

.

-多少邊多少筆-

(點),(點),(權重)

-中止-


Output
輸出帶有權重值的相鄰矩陣


Sample Input 1 

6,10
1,2,5
2,3,4
3,1,8
1,4,7
4,3,5
3,6,9
6,1,3
4,6,6
6,5,1
5,4,5
Sample Output 1

0 5 0 7 0 0
0 0 4 0 0 0
8 0 0 0 0 9
0 0 5 0 0 6
0 0 0 5 0 0
3 0 0 0 1 0
Language: 
  
Theme: 
1
#include <iostream>
2
#include <cstdio>
3
using namespace std;
4
int main(){
5
    int a,b;
6
    scanf("%d,%d",&a,&b);
7
    int m[1000][1000]={0};
8
    int q,w,e;
9
    for(int i=0;i<b;i++){
10
        scanf("%d,%d,%d",&q,&w,&e);
11
        m[q-1][w-1]=e;
12
    }
13
    for(int i=0;i<a;i++){
14
        for(int j=0;j<a;j++){
15
            cout<<m[i][j];
16
            if(j+1!=a)cout<<" ";
17
        }
18
        if(i+1!=a)cout<<endl;
19
    }
20
}
