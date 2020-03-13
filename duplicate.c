#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n],dup[1000000]={0};
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(dup[arr[i]]==-1)
            continue;
        dup[arr[i]]++;
        if(dup[arr[i]]>1)
        {
           printf("%d\n",arr[i]);
           dup[arr[i]]=-1;
        }
    }
}

