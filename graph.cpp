#include "graph.h"

int main() {
    Graph g("input1.txt");

    // vector<pair<string, string>> res;
    // g.Kraskal(&res);
    // for (auto node : res)
    //     cout << node.first << " " << node.second << endl;

    g.Prim();
}