#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcAmount(int talkTime);

int main()
{
    FILE *fptr;
    fptr=fopen("input.txt","r");
    if(fptr==NULL)
        exit(1);

    int phCalls, talkTime,i ;
    int clientAmount, totAmount=0 ;

    fscanf(fptr,"%d",&phCalls);

    for (i=1;i<=phCalls;i++)
    {
        fscanf(fptr,"%d",&talkTime);
        clientAmount=calcAmount(talkTime);
        totAmount+=clientAmount;
    }

    printf("%d",totAmount);

    fclose(fptr);
    return 0;
}



int calcAmount(int talkTime)
{
    int amount=0;
    int additSec;

    if(talkTime<=120)
         amount=100; /* 100 lek */
    else
        {
         amount+=100;
         additSec=talkTime-120;
         amount+=ceil((float)additSec/10)*5;
        }
    return amount;
}
