#include "queue.h"

int queue_size (queue_t *queue) 
{
    queue_t *ini = queue;
    int size = 0;
    queue = queue.next();
    while (queue != ini)
    {
        size += 1;
        queue = queue.next();
    }
    return size;
}