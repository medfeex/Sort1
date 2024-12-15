# Sort1: Bellman-Ford Algorithm Implementation

This project contains an implementation of the Bellman-Ford algorithm for finding the shortest paths from a starting vertex to all other vertices in a graph. The algorithm can handle graphs with negative weights and detects negative weight cycles.

### Description

The program reads a graph from a file, applies the Bellman-Ford algorithm to compute the shortest distances from a specified start vertex, and writes the result to an output file.

### Installation

To use this program, you will need a C++ compiler and CMake installed.

## Steps:

1. Clone the repository:  
   ```bash  
   git clone [https://github.com/medfeex/Sort.git]  
2. Navigate to the project directory:  
   cd .../Sort1  
3. Build the project using CMake: 
   mkdir build  
   cd build  
   cmake ..  
   make

## Usage:

Prepare input files:

Create an input_graph.txt file with the graph data. The first number should be the number of vertices. The adjacency matrix follows, with -1 representing no edge between two vertices.  
Example input_graph.txt:  
5  
0 10 20 -1 -1  
10 0 -1 -1 50  
20 -1 0 30 -1  
-1 -1 30 0 10  
-1 50 -1 10 0  
0  

Run the program:

./Sort1

Output:

The program will output the shortest distances from the start vertex to all other vertices in the output_distances.txt file. If a vertex is unreachable, it will be marked as INF.
