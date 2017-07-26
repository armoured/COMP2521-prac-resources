#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

int main (int argc, char* argv[]) {

    list L1 = newList();
    list L2 = newList();
    //list L3 = newList();
    list L6 = newList();
    list L7 = newList();
    list L8 = newList();
    list L9 = newList();
    list L10 = newList();
    //printf("List initial: \n");
    //printList(L1);
    int i = 1;
    while (i < 5) {
        list node1 = createNode(i);
        L1 = append(L1, node1);
        i++;
    }
    
    while (i < 9) {
        list node2 = createNode(i);
        L2 = append(L2, node2);
        i++;
    }
   /* list node1 = createNode(1);
    list node2 = createNode(2);
    list node3 = createNode(3);
    list node4 = c

    newL = append(newL, node1);
    newL = append(newL, node2);
    newL = append(newL, node3);*/
    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);
    list L4 = newList();

    printf("List zipped: \n");
    L4 = zip(1, L1, L2);
    printList(L4);

    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);
  
    list L5 = newList();

    printf("List zipped: \n");
    L5 = zip(2, L1, L2);
    printList(L5);
    
    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);



    printf("List zipped: \n");
    L6 = zip(3, L1, L2);
    printList(L6);

    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);

    printf("List zipped: \n");
    L7 = zip(4, L1, L2);
    printList(L7);

    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);

    printf("List zipped: \n");
    L8 = zip(5, L1, L2);
    printList(L8);
    printf("=============================\n");
    deleteNode(L1);
    deleteNode(L1);


    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);

    printf("List zipped: \n");
    L9 = zip(2, L1, L2);
    printList(L9);

    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(L2);

    printf("List zipped: \n");
    L10 = zip(4, L1, L2);
    printList(L10);
    printf("=====================\n");
    //list null1 = newList();
    list null2 = newList();
    printf("List1 Initial: \n");
    printList(L1);
    printf("List2 Initial: \n");
    printList(null2);
    list L11 = newList();
    printf("List zipped: \n");
    L11 = zip(4, L1, null2);
    printList(L11);

























    //deleteNode(newL);
    //printList(newL);



    return EXIT_SUCCESS;
}
