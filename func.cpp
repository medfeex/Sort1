#include "head.h"

void bellmanFord(const vector<vector<int>>& graph, int startVertex, vector<int>& distances) {
    int V = graph.size();
    distances.assign(V, INF);
    distances[startVertex] = 0; 

    for (int i = 1; i < V; ++i) {
        for (int u = 0; u < V; ++u) {
            for (int v = 0; v < V; ++v) {
                if (graph[u][v] != INF && distances[u] != INF && distances[u] + graph[u][v] < distances[v]) {
                    distances[v] = distances[u] + graph[u][v];
                }
            }
        }
    }
}

void readGraphFromFile(const string& filename, vector<vector<int>>& graph, int& startVertex) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error with opening file " << filename << endl;
        return;
    }

    int V;
    file >> V; 
    if (V <= 0) {
        cerr << "invalid count of vertex: " << V << endl;
        return;
    }

    graph.resize(V, std::vector<int>(V, INF));

    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            file >> graph[i][j];
            if (graph[i][j] == -1) {
                graph[i][j] = INF;
            }
        }
    }

    file >> startVertex;
    if (startVertex < 0 || startVertex >= V) {
        cerr << "invalid index for start vertex: " << startVertex << endl;
        return;
    }

    cout << "Graph is readen succesfully." << endl;
}

void writeDistancesToFile(const string& filename, const vector<int>& distances) {
    ofstream file(filename);
    if (!file) {
        cerr << "Error with output file: " << filename << endl;
        return;
    }

    for (int i = 0; i < distances.size(); ++i) {
        if (distances[i] == INF) {
            file << "INF\n";
        }
        else {
            file << distances[i] << "\n";
        }
    }

    cout << "Results are put in file" << endl;
}
