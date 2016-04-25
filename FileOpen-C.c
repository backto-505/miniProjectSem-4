#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 200
void main()
{
    FILE *fp;
    char s[max],a[max],ch;
    int i=0,check=0,count;
    fp=fopen("eg.txt","r");
    fscanf(fp,"%d",&count);
    while(count>-1)
    {
        ch=fgetc(fp);
        if(ch=='\n')
        {
        printf("\n");
        count--;
        }
        else
        printf("%c",ch);
    }
    fclose(fp);
    getch();

}
