#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#define array vector
using namespace std;

// @author: Thawan Ribeiro, 2024-06-23

class Graph {
private:
    const int VERTICES;
    int edges;
    array<array<int>> list;
    array<bool> marked;

public:
    Graph(int n) : VERTICES(n), edges(0) {
        list.assign(VERTICES, array<int>());
    }
};

int main() {
    // cerr << "Thawan";
    return 0;
}
