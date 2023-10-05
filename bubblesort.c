#include <stdio.h>

void printArr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
    printf("\n \n");
}

void sort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) //number of passes
    {
        for (int j = 0; j < n - 1; j++) //number of comparision
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {12, 34, 5, 78, 54, 2};
    int n = 6;
    printArr(A, n); //array before sorting
    sort(A, n);
    printArr(A, n); //array after sorting
    return 0;
}