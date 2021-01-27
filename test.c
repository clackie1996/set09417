#include <stdio.h>
#include <time.h>

void code() {
    //Code for testing goes here
}

int main (int argc, char **argv) {
    clock_t t;
    printf("Start: %d \n", (int)(t=clock()));

    code();

    printf("Stop: %d \n", (int)(t=clock()-t));
    printf("Elapsed: %f seconds \n", (double) t/CLOCKS_PER_SEC);

    return 0;
}