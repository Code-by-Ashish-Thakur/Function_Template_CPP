/*ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
 धियो यो नः प्रचोदयात॥*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

/*@ashish thakur */
/* 1-Motive:To find the shortest distance from source to all other vertices in negative weighted graph
2- You can also find the cycle in negative weight graph
Process:
1-store the distance of all vertices by 1e8 and source distace should be 0
2-traverse to V-1 times and store the distance
3- again traverse the last time if condition is true it means it have cycle otherwise it doest no cycle
and return the distance


*/
vector<int> bellmanFord(int V, vector<vector<int>> &adj, int src)
{
    vector<int> dist(V, 1e8);
    dist[src] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        for (auto it : adj)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];

            if (dist[u] != 1e8 && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    bool isCycle = false;
    for (auto it : adj)
    {
        int u = it[0];
        int v = it[1];
        int w = it[2];

        if (dist[u] != 1e8 && dist[v] > dist[u] + w)
        {
            isCycle = true;
            break;
        }
    }

    if (isCycle)
        return {-1};
    return dist;
}

int main()
{
    int V = 5;
    vector<vector<int>> adj = {
        {0, 1, 6},
        {0, 2, 7},
        {1, 2, 8},
        {1, 3, 5},
        {1, 4, -4},
        {2, 3, -3},
        {2, 4, 9},
        {3, 1, -2},
        {4, 0, 2},
        {4, 3, 7}};

    int src = 0;

    vector<int> result = bellmanFord(V, adj, src);

    if (result.size() == 1 && result[0] == -1)
    {
        cout << "Negative weight cycle detected.\n";
    }
    else
    {
        cout << "Shortest distances from source " << src << ":\n";
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << " : " << result[i] << endl;
        }
    }

    return 0;
}
