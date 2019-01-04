#include<stdio.h>
#include<conio.h>
int j,i;
void bubble_sort(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of Array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("Sorted Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}

