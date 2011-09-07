#include <stdio.h>

#define T void*

T strcatLink(T p1, T p2)
{
    T s;
    T p;
    if(NULL == p1 || NULL == p2)
    {
        printf("Link is null\n");
        exit(-1);
        }
    if(*p1 < *p2)
    {
        s = p = p1;
        p1 = p1->next;
        }
    else
    {
        s = p = p2;
        p2 = p2->next;
        }
    while(NULL == p1 || NULL == p2)
    {
	    if(*p1 < *p2)
	    {
	        p->next = p1;
	        p1 = p1->next;
	        }
	    else
	    {
	        p->next = p2;
	        p2 = p2->next;
	        }
	        }

    while(NULL != p1)
    {
        p->next = p1;
        p1 = p1->next;
        }
    while(NULL != p2)
    {
        p->next = p2;
        p2 = p2->next;
        }

    return s;
    }

int main(int argc, char * argv[])
{
    
    
    return 0;
}
