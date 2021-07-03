#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "header.h"

long int* generate(int n)
{
    long int *a;
    a = (long int*)calloc(n,sizeof(long int));
        for(int i=0;i<n;i++)
            a[i]=rand();

    return a; 
}

unsigned long long SelectionSort(long int *A, int n)
{
    long int temp;
    long int i;
    unsigned long long count = 0;
    for(i = 0; i < n - 1; i++)
    {
        long int min = i;
        for(int j = i + 1; j < n; j++)
        {
            count++;
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    } 
    return count;
}

unsigned long long BubbleSort(long int *A,int n)
{
    long int temp;
    long int i;
    unsigned long long count = 0;
    for(i = 0; i < n - 1; i++)
    {
        
        for (int j = 0; j < n - 1 - i ; j++)
        {
            count++;
            if (A[j + 1] < A[j] )
            {

                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    return count;
}

unsigned long long counter; //For quick Sort
unsigned long long quickSort(long int *a,int low,int high)
{
    if (low<high)
    {
       int j=partition(a,low,high);
       quickSort(a,low,j-1);
       quickSort(a,j+1,high);
    }
    return counter;
}

int partition(long int *a,int low,int high)
{
    long int pivot=a[low];
    int i=low+1;
    int j=high;

    while(i<=j) //As long as there is no crossover
    {
        while(i<=high && a[i]<=pivot)
        {
            i++;
            counter++;
        }

        while(j>low && a[j]>=pivot)
        {
            j--;
            counter++;
        }

        if (i<j)
        {
            long int temp;
           temp=a[i];
           a[i]=a[j];
           a[j]=temp; 
        }
    }

    if (j!=low)
    {
        a[low]=a[j];
        a[j]=pivot;
    }

    return j; // Return the partition position
}


unsigned long long count1; // For merge sort
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(long int arr[], long int l, long int m, long int r)
{
    long int i, j, k;
    long int n1 = m - l + 1;
    long int n2 = r - m;
 
    /* create temp arrays */
    long int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        count1++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
long int mergeSort(long int arr[], long int l, long int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }

    return count1;
}