#include <stdio.h>
#include <time.h>
int main() {
time_t start,end;
time(&start);
time(&end);
double seconds = difftime(end, start);
printf("The time: %f seconds\n", seconds);
}
