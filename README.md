# Sorting-Efficiency_Analysis
A C program that compares the performance of 4 sorting algorithms- Selection Sort, Bubble Sort, Quick Sort and Merge Sort.  
The performance metrics include: number of comparisons vs size of the list & execution time vs size of the list.  
There are 3 input files:- client.c, server.c, header.h  
  
The client holds the driver code which runs the four algorithms for different list sizes starting from 25k array elements upto 250k in steps of 25,000. The performance metrics are written to .dat output files that are labelled accordingly. Each sorting algorithm produces 2 output files(no. of comp vs size of list & exec time vs size of list).  
  
The server.c includes the functions that implement the algorithms. 
  
> The code was executed in windows using GNU GCC compiler. The output files generated are then used for plotting. 
  
> The graphs were plotted using x-graph tool for windows.
