#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

class graph{
    public:
        unordered_map<int, list<int>> adj;

        void addEdge(int u, int v, bool direction){
            //direction = 0 -> undirected
            //direction = 1 -> directed
            adj[u].push_back(v);
            if(direction==0)
                adj[v].push_back(u);

        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<"-> ";
                for(auto j:i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    readFile();
    FASTIO;
    /*
    0------1 
    |      | \
    |      |  2
    |      | /
    4------3
    */
    int n,m;
    //Enter the number of nodes
    cin>>n;
    //Enter the number of edges
    cin>>m;
    graph g;
    f(i,0,m){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
}