#include<stdio.h>
int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        i=0;
        j=1;
        max=0;
    while(i<n||j<n)
    {
         if(a[i]>=a[j])
             i=j;
         else
            if(max<(a[j]-a[i]))
                max=(a[j]-a[i]);
        ++j;
    }
    printf("%d",max);
    return 0;
}
