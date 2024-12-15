#ifndef HEAD_H
#define HEAD_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define INF 1000000000

void bellmanFord(const vector<vector<int>>& graph, int startVertex, vector<int>& distances);

void readGraphFromFile(const string& filename, vector<vector<int>>& graph, int& startVertex);
void writeDistancesToFile(const string& filename, const vector<int>& distances);

#endif
