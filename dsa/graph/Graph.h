#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <list>

class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void printGraph();

private:
    int vertices;
    std::vector<std::list<int>> adjList;
};

#endif // GRAPH_H
