#include <omp.h>
#include <stdio.h>
int main(void) {
 printf("\n");
 #pragma omp parallel
 {
    const int thread_num = omp_get_thread_num();
    const int threads_total = omp_get_num_threads();
    printf("Hello World from thread = %d out of %d total threads.\n", \
    thread_num, threads_total);
 }
 printf("\n");
 return 0;
}