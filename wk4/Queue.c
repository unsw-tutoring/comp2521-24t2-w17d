#include "Queue.h"

#include "Stack.h"

struct queue {
    Stack s1;
    Stack s2;
};

Queue QueueNew(void) {
    Queue q = malloc(sizeof(struct queue));
    q->s1 = StackNew();
    q->s2 = StackNew();
    return q;
}

void QueueEnqueue(Queue q, int item) {
    StackPush(q->s1, item);
}

int QueueDequeue(Queue q) {
    while (StackSize(q->s1) > 0) {
        int v = StackPop(q->s1);
        StackPush(q->s2, v);
    }
    int res = StackPop(q->s2);

    while (StackSize(q->s2) > 0) {
        int v = StackPop(q->s2);
        StackPush(q->s1, v);
    }

    return res;
}
