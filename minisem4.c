#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 200
void main()
{
    FILE *fp;
    char s[max],a[max],ch;
    int i=0,check=0;
    fp=fopen("eg.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        else
        printf("%c",ch);
    }
    fclose(fp);
    getch();

}
