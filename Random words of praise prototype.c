/*This part was done by Souvik*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int praise;
    praise = (rand()%10+1);
    if (praise == 1){
        printf("There you go! You've done the right thing.\n");
        }
    else if (praise == 2){
        printf("Keep up the good work\n");
        }
    else if (praise == 3){
        printf("See? It wasn't that hard.\n");
        }
    else if (praise == 4){
        printf("You've made yourself healthier. Feel good about it!\n");
        }
    else if (praise == 5){
        printf("Small things add up. Good job!\n");
        }
    else if (praise == 6){
        printf("Well done!\n");
        }
    else if (praise == 7){
        printf("That's a healthy decision!\n");
        }
    else if (praise == 8){
        printf("Excellent!\n");
        }
    else if (praise == 9){
        printf("Same\n");
        }
    else if (praise == 10){
        printf("Wonderful!\n");
        }
return 0;
}