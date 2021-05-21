#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <direct.h>
char choice;
int minute = 0, second = 0, flag = 0;

void delay(int miliseconds)
{
    clock_t timeDelay = miliseconds + clock();
    while(timeDelay > clock());
}

void playsound()
{
    Beep(550, 600);
    return 0;
}

void praise()
{
    time_t t;
    srand((unsigned) time(&t));
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
        printf("You'll thank yourself for this in the future.\n");
        }
    else if (praise == 10){
        printf("Wonderful!\n");
        }
    return 0;
}

int nexttime()
{
    time_t t;
    srand((unsigned) time(&t));
    int luck;
    luck = (rand()%8+1);
    if (luck == 1){
        printf("Better luck next time!\n");
        }
    else if (luck == 2){
        printf("Awww, too bad.\n");
        }
    else if (luck == 3){
        printf("Hopefully, you'll do it next time!\n");
        }
    else if (luck == 4){
        printf("There's always another time.:3 \n");
        }
    else if (luck == 5){
        printf("No problem, you can do it later.\n");
        }
    else if (luck == 6){
        printf("It's okay to skip once in a while.\n");
        }
    else if (luck == 7){
        printf("Don't worry, give it a shot next time.\n");
        }
    else if (luck == 8){
        printf("Try again later.\n");
        }
    return 0;
}

int stretch()
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
        if(minute == 60)
            playsound();
            printf("Did you take a break and stretch? Y/N");
            scanf("%c",choice);
            if(choice == 'Y' || 'y'){
                praise();
                minute = 0;
                second = 0;
                }
            else if(choice == 'N' || 'n'){
                nexttime();
                minute = 0;
                second = 0;
                }          /*can add error message in another else if, if some other character is entered*/
            stretch();
    }
}

int water()
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
            playsound();
            printf("Did you drink water? Y/N");
            scanf("%c",choice);
            if(choice == 'Y' || 'y'){
                praise();
                minute = 0;
                second = 0;
                }
            else if(choice == 'N' || 'n'){
                nexttime();
                minute = 0;
                second = 0;
                }
            water();
    }
}

int sunlight()
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
        if(minute == 120)
            playsound();
            printf("Did you go out and absorb some sunlight? Y/N");
            scanf("%c",choice);
            if(choice == 'Y' || 'y'){
                praise();
                minute = 0;
                second = 0;
                }
            else if(choice == 'N' || 'n'){
                nexttime();
                minute = 0;
                second = 0;
                }
            sunlight();
    }
}

int test()
{
    char choice;
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
        if(minute == 1)
            playsound();
            printf("What is your test choice? Y/N");
            scanf("%c",choice);
            if(choice == 'Y' || 'y'){
                praise();
                minute = 0;
                second = 0;
                }
            else if(choice == 'N' || 'n'){
                nexttime();
                minute = 0;
                second = 0;
                }
            test();
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
    int num;
    printf("What activity reminder do you want to set?\n1.Stretch break\n2.Drinking water\n3.Sunlight exposure\n4.Test/experimental?\n");
    scanf("%d",num);
    switch (num){
    case 1:
        stretch();
        break;
    case 2:
        water();
        break;
    case 3:
        sunlight();
        break;
    case 4:
        test();
        break;
    }
    return 0;
}