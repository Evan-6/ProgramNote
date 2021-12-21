#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node  //作為資料結構儲存圖
{
	int start;
	int end;
	int length;
};
bool compare(Node a, Node b)
{	
	if(a.start==0||a.end==0)return true;
	if(b.start==0||b.end==0)return false;
	
	return a.length < b.length;
}
void Kruskal(vector<Node> &arr, vector<bool> &visited)
{
	int M, N;
	M = visited.size();
	N = arr.size();
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].start >> arr[i].end >> arr[i].length;
	}
	sort(arr.begin(), arr.end(), compare);
	//cout<<endl<<endl;
	for(int i=0;i<N;i++){
		//cout<< arr[i].start<<" "<< arr[i].end<<" "<<arr[i].length<<"\n";
	}
	int weight = 0;
	//cout<<endl<<endl;
	visited[0]=true;
	for (int i = 0; i < N; i++)
	{
		if (visited[arr[i].start]!=visited[arr[i].end])
		{
			weight += arr[i].length;
			//cout<< arr[i].start<<" "<< arr[i].end<<" "<<arr[i].length<<"\n";
			visited[arr[i].start] = true;
			visited[arr[i].end] = true;
			i=0;
		}
	}
	cout << weight;
}
int main()
{
	int M,N;

	while(cin>>M>>N &&M &&N){
		
	vector<Node> arr(N);
	vector<bool> visited(M);
	Kruskal(arr,visited);
	}
	
}
