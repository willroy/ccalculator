#include <stdio.h>
#include <time.h>

    #define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))

int rand();

int main(){
    int num = randnum(1, 10);
    pintf("%d\n", num);
    int nu = 1;
    int numbers[10];
    int n = 0;
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    int x;
    for (x = 0; x < 3; x++) {
    printf("%d\n", numbers[x]);
    }
    while (n < 5) {
        if (num <= 1){
            printf("%d", num);
            nu++;
            n++;
        }
        else {
            printf("not num");
            nu--;
            n++;
        }
        printf("\n");     
    }
}

