#include "Graph.h"
#include <iostream> // Include iostream for std::cout and std::endl

Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjList.resize(vertices);
}

void Graph::addEdge(int v, int w) {
    adjList[v].push_back(w);
    adjList[w].push_back(v); // Since the graph is undirected
}

void Graph::printGraph() {
    for (int i = 0; i < vertices; ++i) {
        std::cout << "Adjacency list of vertex " << i << "\n head ";
        for (auto x : adjList[i])
            std::cout << "-> " << x;
        std::cout << std::endl;
    }
}
