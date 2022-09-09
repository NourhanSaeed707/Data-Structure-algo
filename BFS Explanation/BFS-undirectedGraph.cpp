#include <iostream>
#include <vector>
#include <queue>  
#include<algorithm>
#include <iterator> 
using namespace std;

vector<bool> visited; // vector to mark each vertex when we visited.
vector<vector<int> > g; // 2D vector to have create edge.

//function to make edges between vertices.
void edge( int start, int end ) {
    g[start].push_back(end);
    g[end].push_back(start); // remove it if it's directed graph.
}
// function BFS implementation.
void BFS(int startVertex) {
    //we use queue to store and vertices and its neighbors
    queue<int> q;
    q.push(startVertex);
    visited[startVertex] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
      // display visited element.
        cout << f << " "; 
        for (auto it = g[f].begin(); it != g[f].end(); it++) {
            if (!visited[f]) {
                visited[f] = true;
                q.push(*it);
            }
        }
    }
}
int main()
{
    cout << "Enter size of array and number of edges:" << endl;
    int n, e;
    cin >> n >> e;
    // assign --> assigns new values to the vector or modify size of vector if it necessary.
    visited.assign(n, false);
    g.assign(n, vector<int>());
    cout << "Enter value of edges:" << endl;
    int a, b;
    //here we iterate over e (number of edges) so we create edges.
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        edge(a, b);
    }
    // we iterate over n (size of vector) so we take each vertex and visited.
    cout << "BFS Elements" << endl;
    for (int i = 0; i < n; i++) {
        if (!visited[i])
            BFS(i);
    }
    return 0;
}

