#include <stdio.h>
int linear(int a[50],int);
int binary(int a[50],int);
int main()
{
    int a[50],n,i,c;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    
    do
    {
        printf("\nOptions\n");
        printf("\n1.Linear\n2.Binary\n3.Exit\n");
        printf("\nEnter the option: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                linear(a,n);
                break;
            case 2:
                binary(a,n);
                break;
            case 3:
                printf("Exit");
                break;
            default:
                printf("Invalid Option");
                break;
        }
    
    }while(c!=3);
}
int linear(int a[50],int n)
{
    int e,f=0,i;
    printf("Enter the element to be searched: ");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            f=1;
            break;
        }
        else
            f=0;
    }
    if(f==1)
    {
        printf("Element found in %dth postion",i+1);
    }
    else
    {
        printf("Element not found");
    }
}

int binary(int a[50],int n)
{
    
    int i,j,t,e,f=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&e);
    int low=0,high=n-1;
    int mid=(low+high)/2;
    if(a[mid]==e)
    {
        printf("\nElement found in %dth postion",mid+1);
    }
    else if(e<a[mid])
    {
        high=mid-1;
        for(i=low;i<=high;i++)
        {
           if(a[i]==e)
            {
                f=1;
                break;
            }
            else
                f=0;
        }
        if(f==1)
        {
            printf("Element found in %dth postion",i+1);
        }
        else
        {
            printf("Element not found");
        }
    }
    else if(e>a[mid])
    {
        low=mid+1;
        for(i=low;i<=high;i++)
        {
           if(a[i]==e)
            {
                f=1;
                break;
            }
            else
                f=0;
        }
        if(f==1)
        {
            printf("Element found in %dth postion",i+1);
        }
        else
        {
            printf("Element not found");
        }
        
    }
}
