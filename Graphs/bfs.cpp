#include <iostream>
#include <queue>

using namespace std;

const int MAX_VERTICES = 100; // Adjust the maximum number of vertices as needed

class Graph {
public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startVertex);

private:
    int vertices;
    int adjacencyList[MAX_VERTICES][MAX_VERTICES];
};

Graph::Graph(int vertices) {
    this->vertices = vertices;
    // Initialize the adjacency matrix with zeros
    for (int i = 0; i < MAX_VERTICES; ++i) {
        for (int j = 0; j < MAX_VERTICES; ++j) {
            adjacencyList[i][j] = 0;
        }
    }
}

void Graph::addEdge(int src, int dest) {
    adjacencyList[src][dest] = 1;
    // Uncomment the following line if the graph is undirected
    // adjacencyList[dest][src] = 1;
}

void Graph::BFS(int startVertex) {
    // Mark all vertices as not visited
    bool visited[MAX_VERTICES] = {false};

    // Create a queue for BFS
    queue<int> bfsQueue;

    // Mark the current node as visited and enqueue it
    visited[startVertex] = true;
    bfsQueue.push(startVertex);

    while (!bfsQueue.empty()) {
        // Dequeue a vertex from the queue and print it
        int currentVertex = bfsQueue.front();
        cout << currentVertex << " ";
        bfsQueue.pop();

        // Get all adjacent vertices of the dequeued vertex
        // If an adjacent vertex has not been visited, mark it visited and enqueue it
        for (int adjacentVertex = 0; adjacentVertex < vertices; ++adjacentVertex) {
            if (adjacencyList[currentVertex][adjacentVertex] == 1 && !visited[adjacentVertex]) {
                visited[adjacentVertex] = true;
                bfsQueue.push(adjacentVertex);
            }
        }
    }
}

int main() {
    // Create a graph
    Graph graph(6);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    // Perform BFS starting from vertex 0
    cout << "BFS starting from vertex 0:" << endl;
    graph.BFS(0);

    return 0;
}