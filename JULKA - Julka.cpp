#include <iostream>
#include <string.h>
#include <stdio.h>

#define maxi 110
using namespace std;
char total[maxi],  diff[maxi], klaudia[maxi], natalia[maxi];

void divideByTwo(char tem[],int l,char name[])
{
    int i,j,f,a,b;
    for(i=l-1,a=j=f=0;i>=0;i--)
    {b=(a*10+tem[i]-'0')/2;
     a=(a*10+tem[i]-'0')%2;
     if(b)
            f=1;
     if(f)
        name[j++]=b+'0';
    }
    if(!j)
        j++;
    name[j]=0;
}

void calculate()
{
    char temp[maxi];
    int lenTotal=strlen(total);
    int lenDiff=strlen(diff);
    int i=0,j=0,k=0,a=0,b=0,c=0;
    for(i=lenTotal-1,j=lenDiff-1; i>=0||j>=0||c ;i--,j--,k++)
    {
        a= i>=0?total[i]-'0' : 0;
        b= j>=0?diff[j]-'0' : 0;
        temp[k]=(a+b+c)%10 +'0';
        c=(a+b+c)/10;
    }
    temp[k]=0;
    strcpy(klaudia,"0");
    divideByTwo(temp,k,klaudia);


    for(i=lenTotal-1,j=lenDiff-1,k=c=0;i>=0;i--,j--,k++)
    {
        a=total[i]-'0';
        b=j>=0?diff[j]-'0':0;

        if(a<b+c)
        {
           temp[k]=(10+a-b-c)+'0';
           c=1;
        }
        else
        {
            temp[k]=a-b-c + '0';
            c=0;
        }
    }
    temp[k]=0;

    strcpy(natalia,"0");
    divideByTwo(temp,k,natalia);
}




int main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%s %s",total,diff);
        calculate();
        printf("%s\n%s\n",klaudia,natalia);
    }

    return 0;
}
