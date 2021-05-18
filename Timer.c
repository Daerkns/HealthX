#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minute = 0, second = 0, flag = 0;
char choice;


void delay(int miliseconds)
{
    clock_t timeDelay = miliseconds + clock();
    while(timeDelay > clock());
}


int counter()
{
    while(flag == 0)
    {
        if(second > 59)
        {
            second = 0;
            ++minute;
        }
        alarm();
        delay(1000);
        ++second;
        if(minute == 30)
            printf("Did you do the activity? Y/N");
            scanf("%c",choice);
            if(choice == 'Y' || 'y')
                praise();
                minute = 0;
                second = 0;
            else if(choice == 'N' || 'n')
                nexttime();
                minute = 0;
                second = 0;
    }
}


int alarm()
{
    system("cls");
    printf("*******************************************\n");
    printf("                    %d:%d                  \n", minute, second);
    printf("*******************************************\n");

}


int main()
{
    counter();
    return 0;
}