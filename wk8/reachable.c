#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "Set.h"

static void doReachable(Graph g, Vertex v, Set visited) {
    SetInsert(visited, v);

    for (int w = 0; w < GraphNumVertices(g); w++) {
        if (GraphIsAdjacent(g, v, w) && !SetContains(visited, w)) {
            doReachable(g, w, visited);
        }
    }
}

Set reachable(Graph g, Vertex src) {
    Set visited = SetNew();

    doReachable(g, src, visited);

    return visited;
}
