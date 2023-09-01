#include <stdio.h>
#include <stdlib.h>
#include "linear_queue.h"

int main()
{
    Queuee queuee;
    queuee.head = 0;
    queuee.tail = 0;

    // Loading 2 integer values:
    enqueuee(&queuee, 5);
    enqueuee(&queuee, 10);

    printf("Queuee elements: \n");
    printQueuee(&queuee);

    desenqueuee(&queuee);

    printf("Queuee elements: \n");
    printQueuee(&queuee);
    return 0;
}
