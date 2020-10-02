#include <bits/stdc++.h> 
using namespace std; 
const int N = 100000;
vector<int> graph[N]; 
vector<int> cycles[N]; 
int n,m;
void dfs_cycle(int u, int p, int color[],int mark[], int par[], int& cyclenumber) 
{ 
	if (color[u] == 2) { 
		return; 
	} 
	if (color[u] == 1) { 

		cyclenumber++; 
		int cur = p; 
		mark[cur] = cyclenumber; 
		while (cur != u) { 
			cur = par[cur]; 
			mark[cur] = cyclenumber; 
		} 
		return; 
	} 
	par[u] = p; 
	color[u] = 1; 
	for (int v : graph[u]) { 

		if (v == par[u]) { 
			continue; 
		} 
		dfs_cycle(v, u, color, mark, par, cyclenumber); 
	} 
	color[u] = 2; 
} 
void addEdge(int u, int v) 
{ 
	graph[u].push_back(v); 
	graph[v].push_back(u); 
} 
bool printCycles(int edges, int mark[], int& cyclenumber) 
{ 
	for (int i = 1; i <= edges; i++) { 
		if (mark[i] != 0) 
			cycles[mark[i]].push_back(i); 
	} 
	for (int i = 1; i <= cyclenumber; i++) { 
		//cout << "Cycle Number " << i << ": "; 
		if(cycles[i].size()==n){
            return true;
        }
	} 
    return false;
} 
int main() 
{ 
    cin>>n>>m;
    int x,y;
    while(m--){
        cin>>x>>y;
        addEdge(x,y);
    }

	int color[N]; 
	int par[N]; 
	int mark[N]; 

	int cyclenumber = 0; 
	int edges = 13; 
	dfs_cycle(1, 0, color, mark, par, cyclenumber); 
	if(printCycles(edges, mark, cyclenumber)){
      cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
} 
