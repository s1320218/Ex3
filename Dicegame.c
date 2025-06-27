#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice1, dice2;
    char name[10]

    printf("What is your name?/n> ");
    scanf("%9s, name");
    printf("Hello, %s!\n", name);
    
    srand(time(NULL));

    dice1=rand()%6+1;
    dice2=rand()%6+1;

    printf("Rolling dice...\n");
    printf("Die1: %d\n", dice1);
    printf("Die2: %d\n", dice2);
    printf("total value: %d\n", dice1 + dice2);

    if (dice1 + dice2 >= 8) {
        printf("You won\n");
    } else {
        printf("You lost\n");
    }

    return 0;
}
