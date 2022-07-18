#include<stdio.h>
#include<stdlib.h>
void FIFO(char [],char[],int,int);
void lru(char [],char[],int,int);
void opt(char [],char[],int,int);
int k;
int main()
{
int ch,YN=1,i,l,f;
char F[10],s[25];
printf("\n\n\tENETR THE NUMBER OF EMPTY FRAIMS:");
scanf("%d",&f);

printf("\n\n\tENETR THE length of the string:");
scanf("%d",&l);

printf("\n\n\tENETR THE string:");
scanf("%s",s);
for(i=0;i<f;i++);
F[i]=-1;
do
{
printf("\n\n\tMEnu:");
printf("\n\n\t1:fifo\n\n2:Lru\n\n4:exit");
printf("\n\n\tenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: for(i=0;i<f;i++)
    {
        F[i]=-1;
    }
    FIFO(s,F,l,f);
    break;
case 2: for(i=0;i<f;i++)
    {
        F[i]=-1;
    }
    //lru(s,F,l,f);
    break;
case 4: exit(0);
}
printf("\n\n\t do u wnat to conyinue if yes press 1or else 0");
scanf("%d",&YN);
}while(YN==1);
return 0;
}
void FIFO(char s[],char F[],int l,int f)
{
    int i,j=0,flag=0,cnt=0,k;
    printf("\n\t page hits\t frames\tfaults");
    for(i=0;i<l;i++)
    {
        for(k=0;k<f;k++)
        {
            if(F[k]==s[i])
            flag=1;
        }
        if(flag==0)
        {
            printf("\n\t%c\t",s[i]);
            F[i]=s[i];
            j++;
            for(k=0;k<f;k++)
            {
                printf("%c",F[k]);
            }
            printf("\t page fault %d",cnt);
            cnt++;

        }
        else{
            flag=0;
            printf("\n\t %c\t",s[i]);
            for(k=0;k<f;k++)
            {
                printf("%c",F[k]);
            }
            printf("\tno pafe fault found");
        }
        if(j==f)
        j=0;
    }
}