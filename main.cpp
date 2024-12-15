#include "head.h"

int main() {
    vector<vector<int>> graph;
    int startVertex;

    readGraphFromFile("input_graph.txt", graph, startVertex);

    if (graph.empty()) {
        cerr << "Error: graph is empty!" << endl;
        return 1;
    }

    vector<int> distances;
    
    bellmanFord(graph, startVertex, distances);

    writeDistancesToFile("output_distances.txt", distances);

    cout << "Algorithm is over." << endl;
    return 0;
}

