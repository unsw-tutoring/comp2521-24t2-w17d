#include "Graph.h"

struct node {
    int v;
    struct node *next;
};

struct graph {
    int nV;

    struct node **adjList;
};

Graph GraphNew(int nV) {
    Graph new = malloc(sizeof(struct graph));

    new->nV = nV;
    new->adjList = calloc(nV, sizeof(struct node *));

    return new;
}
