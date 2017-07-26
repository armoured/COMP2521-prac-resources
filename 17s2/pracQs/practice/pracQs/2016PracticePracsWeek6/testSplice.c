
#include <stdio.h>
#include <stdlib.h>
#include "splice.h"

int main (int argc, char* argv[]) {

    list L1 = newList();
    list L2 = newList();

    int i = 1;
    while (i < 5) {
        list node = createNode(i);
        L1 = append(L1, node);
        i++;
    }

    L2 = L1;

    printf("Initial List: \n");
    printList(L1);

    printf("Spliced List: \n");
    L2 = splice(L1, 1, 1);
    printf("Splice(1,2)\n");
    printList(L2);

    printf("Initial List: \n");
    printList(L1);

    printf("Spliced List: \n");
    L2 = splice(L1, 1, 3);
    printf("Splice(1,3)\n");
    printList(L2);

    printf("Initial List: \n");
    printList(L1);

    printf("Spliced List: \n");
    L2 = splice(L1, 1, 4);
    printf("Splice(1,4)\n");
    printList(L2);

    printf("Initial List: \n");
    printList(L1);

    printf("Spliced List: \n");
    L2 = splice(L1, 2, 3);
    printf("Splice(2,3)\n");
    printList(L2);

    printf("Initial List: \n");
    printList(L1);

    printf("Spliced List: \n");
    L2 = splice(L1, -1, 3);
    printf("Splice(0,3)\n");
    printList(L2);
    return EXIT_SUCCESS;
}
