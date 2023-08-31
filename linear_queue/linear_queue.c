#include "linear_queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int spos = 0;
int rpos = 0;

void eStore(void)
{
    char s[256];
    char *p;

    do
    {
        printf("\nEnter the event number %d: ", spos+1);
        gets(s);

        if(*s == 0)
        {
            break;
        }

        p = malloc(strlen(s) + 1);


    }
}

void eList(void)
{

}

void eRemove(void)
{

}

void eQstore(char *q)
{

}

void eQretrieve(void)
{

}
