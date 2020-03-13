#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int l=strlen(a);
    int m=strlen(b);
    int alpha1[60]={0},alpha2[60]={0},i;
    if(l==m)
    {
        for(i=0;i<l;i++)
        {
            alpha1[a[i]-65]++;
            alpha2[b[i]-65]++;
        }
        for(i=0;i<60;i++)
        {
            if(alpha1[i]!=alpha2[i])
            {
                printf("no");
                break;
            }
        }
        if(i==60)
           printf("yes");

    }
    else
     printf("no");
}
