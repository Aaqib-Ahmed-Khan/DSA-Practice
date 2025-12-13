//
// Created by aaqib on 12/13/25.
//

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int vertex;
    int edges;
    cin >> vertex >> edges;
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, 0));
    int u,v;
    for (int i = 0; i < edges; i++) {
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
cout << "Adjacency Matrix:\n";
for (int i = 0; i < vertex; i++) {
    for (int j = 0; j < vertex; j++) {
        cout << AdjMat[i][j] << " ";
    }
    cout << endl;
}

    }
}
