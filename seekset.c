#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp,*ln;
    char abbr[10],full[10],ch;
    int i=0,j=0,count=2,count1,temp=1;
    fp=fopen("seeking.txt","r");
    ln=fopen("seeking.txt","r");
    while(count>0)
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
    fseek(ln,ftell(fp),SEEK_SET);
    while(ch!=EOF)
    {
        ch=fgetc(ln);
        printf("%c",ch);
    }
}
