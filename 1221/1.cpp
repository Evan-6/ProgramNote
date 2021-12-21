#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node
{
	int start;
	int end;
	int length;
};
bool compare(Node a, Node b)
{
	return a.length < b.length;
}
void Kruskal(vector<Node> &arr, vector<bool> &visited)
{
	int M, N;
	vector<int> ans(0);
	M = visited.size();
	N = arr.size();
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].start >> arr[i].end >> arr[i].length;
	}
	int a;
	cin>>a>>a;
	sort(arr.begin(), arr.end(), compare);
	int weight = 0;
	for (int i = 0; i < N; i++)
	{
		if (!visited[arr[i].start] || !visited[arr[i].end])
		{
			ans.push_back(arr[i].length);
			visited[arr[i].start] = true;
			visited[arr[i].end] = true;
		}
	}
	sort(ans.begin(),ans.end());
	cout << *(ans.end()-1)-*ans.begin();
}
int main()
{
	int M,N;
	cin>>M>> N;
	vector<Node> arr(N);
	vector<bool> visited(M);
	Kruskal(arr,visited);
}
