#include <iostream>
#include <vector>
using namespace std;
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
		}
		int h=1;
		int count=0;
		for(int i=h;i<b.size();i++){
			for(int j=0;j<h;j++){
				if(b[i]<b[j]){
					int tmp=b[i];
					b.erase(b.begin()+i);
					b.insert(b.begin()+j,tmp);
					count++;
					if(count==5){
						for(int o=0;o<b.size();o++){
							cout<<b[o];
							if(o!=b.size()-1)cout<<" ";
						}
					}
					break;
				}
				else if(j==h-1){
					int tmp=b[i];
					b.erase(b.begin()+i);
					b.insert(b.begin()+j+1,tmp);
					break;
				}
			}
			h++;
		}
		if(count<5){
			cout<<"-1";
		}
		cout<<endl;
	}
}
