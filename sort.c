#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void){
    FILE *f = fopen("sample.txt", "r");    
    char *line = NULL;
    size_t len = 0;
    // static keyword is necessary for large sizes of array
    static int arr[10000000];
    int counter = 0;
    

    while(getline(&line, &len, f) != -1){
        char num[100];
        arr[counter] = atoi(line);
        counter++;
    }

    fclose(f);

    clock_t t;
    t = clock();
    qsort(arr, counter, sizeof(int), compare);
    t = clock() - t;
    double time_taken = ((double) t) / CLOCKS_PER_SEC;
    
    for(long i = 0; i < 10000000; i++){
        printf("%d\n", arr[i]);
    }

    printf("Sort in C took %f seconds to execute \n", time_taken);

    return 0;
}
