#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,l,r,re,m,num;
    printf("enter the number\n ");
    scanf("%d",&n);
    num=n;
    m=n;
    while(n>0)
    {
        r=n%10;
        l++;
        n=n/10;
    }
    for(num=m;num>0;num/=10)
    {
        re=num%10;
        s=s+pow(re,l);
    }
    if(s==m)
    {
        printf("armstrong %d",s);
    }
    else
    printf("not armstrong %d",m);
}