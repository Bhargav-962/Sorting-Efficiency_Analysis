extern unsigned long long counter;
extern unsigned long long count1;
// Quick Sort

unsigned long long quickSort(long int *a,int low,int high);
int partition(long int *a,int low,int high);

//Bubble Sort
unsigned long long BubbleSort(long int *A,int n);
//Selection Sort
unsigned long long SelectionSort(long int *A, int n);

//Merge Sort
long int mergeSort(long int arr[], long int l, long int r);
void merge(long int arr[], long int l, long int m, long int r);

long int* generate(int);