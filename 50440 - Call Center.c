#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    int number;
    char ch;
    do
    {
        fscanf(infile,"%d%c",&number,&ch);
        printf("%d%c",number,ch);
    }while(ch!=';');

    fclose(infile);

    return 0;
}
