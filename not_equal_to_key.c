#include <stdio.h>

int CountNotEqual(int arr[], int key, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != key)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    int key;
    
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter key: \n");
    scanf("%d", &key);
    
    int arr[n];
    printf("Enter %d integers: \n", n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int not_equal = CountNotEqual(arr, key, n);
    printf("Number of elements not equal to key: %d", not_equal);
}
