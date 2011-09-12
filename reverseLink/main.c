#include <stdio.h>
#include <stdlib.h>
#include "../../c-test/dataStruct/link.h"

int main(int argc, char * argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(int);
    List head;
    head = init();
    createList(arr, len, head);
    display(head);

    reverse(head);
    display(head);
     
    return 0;
}
