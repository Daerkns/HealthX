#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int blnt;
    blnt = (rand()%8+1);
    if (blnt == 1){
        printf("Better luck next time!\n");
        }
    else if (blnt == 2){
        printf("Awww, too bad.\n");
        }
    else if (blnt == 3){
        printf("Hopefully, you'll do it next time!\n");
        }
    else if (blnt == 4){
        printf("There's always another time.:3 \n");
        }
    else if (blnt == 5){
        printf("No problem, you can do it later.\n");
        }
    else if (blnt == 6){
        printf("It's okay to skip once in a while.\n");
        }
    else if (blnt == 7){
        printf("Don't worry, give it a shot next time.\n");
        }
    else if (blnt == 8){
        printf("Try again later.\n");
        }
return 0;
}