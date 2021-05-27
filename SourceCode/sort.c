#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// This function is necessary to implemenr quick sort in C
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void){
    // Note: the text file must be in the same directory of this script
    FILE *f = fopen("sample.txt", "r");    
    // this variable will store each line of the file
    char *line = NULL;
    size_t len = 0;
    // static keyword is necessary for large sizes of array
    static int arr[10000000];
    // in order to fill in values of sorted output
    int counter = 0;
    
    // this loop goes through entire txt file and fills the array with each integer from each line
    while(getline(&line, &len, f) != -1){
        // integer will not be larger than 100 characters
        char num[100];
        arr[counter] = atoi(line);
        counter++;
    }

    fclose(f);

    clock_t t; // clock variable
    // start clock
    t = clock();
    qsort(arr, counter, sizeof(int), compare);
    t = clock() - t;
    // end clock
    double time_taken = ((double) t) / CLOCKS_PER_SEC;
    
    // print sorted output
    for(long i = 0; i < 10000000; i++){
        printf("%d\n", arr[i]);
    }

    printf("Sort in C took %f seconds to execute \n", time_taken);

    return 0;
}
