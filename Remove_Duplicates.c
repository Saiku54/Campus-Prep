#include <stdio.h>

int RemoveDuplicates(int arr[], int n)
{
    if(n==0){return 0;}
    
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}

void Display(int arr[], int size)
{
    printf("[");
    for(int i=0; i<size; i++)
    {
        if(i>0){printf(",");}
        printf("%d", arr[i]);
    }
    printf("]");
}

int main()
{
    int n;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in ascending or descending order\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int NewSize = RemoveDuplicates(arr, n);
    printf("The array after removing duplicates is: \n");
    Display(arr, NewSize);
}
