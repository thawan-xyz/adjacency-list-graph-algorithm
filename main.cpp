#include <iostream>
#include <map>
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
    array<map<int, int>> list;
    array<bool> marked;

public:
    Graph(const int n) : VERTICES(n), edges(0), list(n, map<int, int>()), marked(n, false) {}

    ~Graph() = default;

    void set_edge(const int v, const int w, const int x = 1) {
        if (list[v].count(w) == 0) {
            edges++;
        }
        list[v][w] = x;
    }

    void del_edge(const int v, const int w) {
        if (list[v].erase(w) != 0) {
            edges--;
        }
    }

    bool has_edge(const int v, const int w) const {
        if (list[v].count(w) != 0) {
            return true;
        }
        return false;
    }

    int get_weight(const int v, const int w) const {
        if (list[v].count(w) != 0) {
            return list[v].at(w);
        }
        return 0;
    }

    int get_first_adjacent(const int v) const {
        if (!list[v].empty()) {
            return list[v].begin()->first;
        }
        return VERTICES;
    }

    int get_next_adjacent(const int v, const int p) const {
        for (auto i : list[v]) {
            int w = i.first;
            if (w > p) {
                return w;
            }
        }
        return VERTICES;
    }

    int get_last_adjacent(const int v) const {
        if (!list[v].empty()) {
            return list[v].rbegin()->first;
        }
        return VERTICES;
    }

    void set_mark(const int v, const bool m) {
        marked[v] = m;
    }

    bool get_mark(const int v) const {
        return marked[v];
    }

    int num_vertices() const {
        return VERTICES;
    }

    int num_edges() const {
        return edges;
    }

    array<int> dfs_traversal() {
        marked.assign(VERTICES, false);

        array<int> result;
        for (int v = 0; v < VERTICES; ++v) {
            if (get_mark(v) == false) {

            }
        }

        return result;
    }

    array<int> bfs_traversal() {
        marked.assign(VERTICES, false);

        array<int> result;
        for (int v = 0; v < VERTICES; ++v) {
            if (get_mark(v) == false) {

            }
        }

        return result;
    }
};

int main() {
    cerr << "Thawan";
    return 0;
}
