#include <iostream>
#include <stack>
using namespace std;
string str="";
int main(){
	char q,w,e;
	cin>>q;
	if(q=='-')goto r;
	str+=q;
	cin>>w;
	str+=w;
	while(true){
		while(true){
			cin>>e;
			if(e=='-')goto r; 
			if(e!=q)break;
			cin>>w;
			str+=w;
		}
		q=e;
		cin>>w;
		str+='\n';
		str+=e;
		str+=w;
	}
	r:;
	int count=1;
	for(int i=0;i<str.length();i++){
		if(str[i]=='\n')count++;
	}
	string list[count];
	int now=0;
	stack<char> st;
	
	for(int i=0;i<str.length();i++){
		if(str[i]=='\n'){
			now++;
			continue;
		}
		list[now]+=str[i];
	}
	for(int i=0;i<count;i++){
		cout<<list[i]<<endl;
	}
	string stlist;
	stlist+=list[0][0];
	string answer;
	answer+=list[0][0];
	int check=0;
	for(int i=0;i<count;i++){
		for(int j=0;j<list[i].length();j++){
			string::size_type idx = stlist.find(list[i][j]);
			if ( idx != string::npos )
			{
			}
			else
			{
				stlist+=list[i][j];
				st.push(list[i][j]);
				//cout<<"push:"<<list[i][j]<<endl;
				check=1;
			}
		}
		if(!st.empty()&&check){
			string tmp;
			tmp+=st.top();
			string::size_type idx = answer.find(tmp);
			if ( idx != string::npos)
			{
			}
			else
			{
				answer+=tmp;
				st.pop();
				//cout<<"pop:"<<tmp<<endl;
				check=0;
			}
		}
	}
	while(!st.empty()){
		answer+=st.top();
		st.pop();
	}
	cout<<answer<<endl;//深 
	cout<<stlist;//廣 
	
	
}






Description

深度優先的無向圖在很多題目都能應用到，試著製作一個無權重的無向圖

利用堆疊(Stack)的方式來處理。

範例如圖

image.png

串列如下

1 >2 >4 >5>0

2> 1> 3 >0

3 >2 >5 >0

4 >1 >5 >0

5 >1 >4 >6 >3 >0

6 >5 >0

深度優先的起點為1，把1放入堆疊中，從堆疊中把1從堆疊中取出並輸出，再根據相鄰串列，把未輸出的節點和未在堆疊中的節點(2, 4, 5)依序放入堆疉中。

重複上述步驟，直到所有節點都搜尋過。


Input
無向圖所有節點連結位置

-1結束輸入


Output
深度搜尋結果


Sample Input 1 

A B
A D
A E
B A
B C
C B
C E
D A
D E
E A
E D
E F
E C
F E
-1
Sample Output 1

AECFDB








Q3廣度優先搜尋
Description

試著製作一個無權重的無向圖

利用佇列(Queue)的方式來處理

範例如圖

image.png

串列如下

1 >2 >4 >5>0

2> 1> 3 >0

3 >2 >5 >0

4 >1 >5 >0

5 >1 >4 >6 >3 >0

6 >5 >0


Input
無向圖所有節點連結位置

-1結束輸入


Output
廣度搜尋結果


Sample Input 1 

A B
A D
A E
B A
B C
C B
C E
D A
D E
E A
E D
E F
E C
F E
-1
Sample Output 1

ABDECF
