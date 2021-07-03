#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "header.h"

int main()
{
    
    long int **arr;
    arr=(long int **)calloc(10,sizeof(long int *));
	
	for(int i=0;i<10;i++)
		arr[i] = generate((i+1)*25000);

    //Selection Sort
    for(int i=0;i<10;i++)
    {
        clock_t t; 
        t = clock();

        int n=(i+1)*25000;
        unsigned long long comparisons = 0;
        comparisons = SelectionSort(arr[i],n);
        t = clock() - t; 
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

       FILE *fptr1 = fopen("selection_cmp.dat","a");
        FILE *fptr2 = fopen("selection_time.dat","a");
        fprintf(fptr1,"%d %llu\n",n,comparisons);
        fprintf(fptr2,"%d %.3lf\n",n,time_taken);
        fclose(fptr1);
        fclose(fptr2);
    }
    free(arr);


    arr=(long int **)calloc(10,sizeof(long int *));
	
	for(int i=0;i<10;i++)
		arr[i] = generate((i+1)*25000);

    // Bubble Sort
    for(int i=0;i<10;i++)
    {
        clock_t t; 
        t = clock();

        int n=(i+1)*25000;
        unsigned long long comparisons = 0;
        comparisons = BubbleSort(arr[i],n);

        t = clock() - t; 
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

        FILE *fptr1 = fopen("bubble_cmp.dat","a");
        FILE *fptr2 = fopen("bubble_time.dat","a");
        fprintf(fptr1,"%d %llu\n",n,comparisons);
        fprintf(fptr2,"%d %.3lf\n",n,time_taken);
        fclose(fptr1);
        fclose(fptr2);
    }
    free(arr);

    arr=(long int **)calloc(10,sizeof(long int *));
	
	for(int i=0;i<10;i++)
		arr[i] = generate((i+1)*25000);

    //Quick Sort
    for(int i=0;i<10;i++)
    {
        counter=0; //Global variable
        clock_t t; 
        t = clock();

        int n=(i+1)*25000;
        unsigned long long comparisons = 0;
        comparisons = quickSort(arr[i],0,n-1);
        t = clock() - t; 
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

        FILE *fptr1 = fopen("quick_cmp.dat","a");
        FILE *fptr2 = fopen("quick_time.dat","a");
        fprintf(fptr1,"%d %llu\n",n,comparisons);
        fprintf(fptr2,"%d %.3lf\n",n,time_taken);
        fclose(fptr1);
        fclose(fptr2);
    }

    free(arr);


    arr=(long int **)calloc(10,sizeof(long int *));
	
	for(int i=0;i<10;i++)
		arr[i] = generate((i+1)*25000);
    //Merge sort
    for(int i=0;i<10;i++)
    {
        count1=0;
        clock_t t; 
        t = clock();

        int n=(i+1)*25000;
        unsigned long long comparisons = 0;
        comparisons = mergeSort(arr[i],0,n-1);

        t = clock() - t; 
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

        FILE *fptr1 = fopen("merge_cmp.dat","a");
        FILE *fptr2 = fopen("merge_time.dat","a");
        fprintf(fptr1,"%d %llu\n",n,comparisons);
        fprintf(fptr2,"%d %.3lf\n",n,time_taken);
        fclose(fptr1);
        fclose(fptr2);
    }

    free(arr); 

    printf("Execution successful!!!\n"); 
    return 0;
}