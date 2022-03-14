 #include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    return 0;
}