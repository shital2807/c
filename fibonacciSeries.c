#include<stdio.h>
int main()
{
    int i ,n ,f1,f2,fnext ;
    printf("enter the value\n");
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("\n%d%d",f1,f2);
    for(i=2;i<=n;i++)
    {
       fnext=f1+f2;
       printf("%d",fnext);
       f1=f2;
       f2=fnext;
    }
    
    return 0;
}
