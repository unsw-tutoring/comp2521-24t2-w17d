#include "Graph.h"

struct graph {
    int nV;
    int nE;  // optional
    bool **adjMatrix;
};

Graph GraphNew(int nV) {
    Graph new = malloc(sizeof(struct graph));

    new->nV = nV;
    new->nE = 0;

    new->adjMatrix = malloc(nV * sizeof(bool *));
    for (int i = 0; i < nV; i++) {
        new->adjMatrix[i] = calloc(nV, sizeof(bool));
    }

    return new;
}
