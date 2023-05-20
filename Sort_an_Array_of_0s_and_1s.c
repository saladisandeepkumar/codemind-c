#include<stdio.h>
void sorting(int arr[], int size)
{
    int type0 = 0;
    int type1 = size - 1;
    while (type0 < type1)
    {
        if (arr[type0] == 1)
        {
            if (arr[type1] != 1)
            {
                int temp = arr[type0];
                arr[type0] = arr[type1];
                arr[type1] = temp;
            }
            type1--;
        }
        else type0++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j, arr_size = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, arr_size);
    for (i = 0; i < arr_size; i++)
    printf("%d ", arr[i]);
    return 0;
}