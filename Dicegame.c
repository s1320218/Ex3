#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice1, dice2;
    srand(time(NULL));

    dice1=rand()%6+1;
    dice2=rand()%6+1;

    printf("Rolling dice...\n");
    printf("Die1: %d\n", dice1);
    printf("Die2: %d\n", dice2);
    printf("total value: %d\n", dice1 + dice2);

    return 0;
}
