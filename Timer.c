#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <direct.h>

char choice;
int minute = 0, second = 0, flag = 0;

int alarm()
{
    system("cls");
    printf("*******************************************\n");
    printf("                    %d:%d                  \n", minute, second);
    printf("*******************************************\n");
}

void delay(int miliseconds) /*search for info*/
{
    clock_t timeDelay = miliseconds + clock();
    while(timeDelay > clock());
}

int displaypoints()
{
    int points;
    FILE * hp = fopen("points.txt", "r");
    fscanf(hp, "%d", &points);
    fclose(hp);
    return points;
}

int healthpoints1()
{
    int points;
    FILE * hp = fopen("points.txt", "r");
    if (!hp){
        hp = fopen("points.txt","w");
        if (!hp) return -1;
        fprintf(hp, "%d", 1);
        fclose(hp);
        return 1;
    }
    fscanf(hp, "%d", &points);
    points++;

    fclose(hp);
    hp = fopen("points.txt", "w");
    fprintf(hp,"%d",points);
    fclose(hp);
    return points;
}

int healthpoints3()
{
    int points;
    FILE * hp = fopen("points.txt", "r");
    if (!hp){
        hp = fopen("points.txt","w");
        if (!hp) return -1;
        fprintf(hp, "%d", 3);
        fclose(hp);
        return 1;
    }
    fscanf(hp, "%d", &points);
    points = points + 3;

    fclose(hp);
    hp = fopen("points.txt", "w");
    fprintf(hp,"%d",points);
    fclose(hp);
    return points;
}

int healthpoints5()
{
    int points;
    FILE * hp = fopen("points.txt", "r");
    if (!hp){
        hp = fopen("points.txt","w");
        if (!hp) return -1;
        fprintf(hp, "%d", 5);
        fclose(hp);
        return 1;
    }
    fscanf(hp, "%d", &points);
    points = points + 5;

    fclose(hp);
    hp = fopen("points.txt", "w");
    fprintf(hp,"%d",points);
    fclose(hp);
    return points;
}

int healthpointsEXP()
{
    int points;
    FILE * hp = fopen("points.txt", "r");
    if (!hp){ /*Initializing the file for the first time, with value associated with the activity*/
        hp = fopen("points.txt","w");
        if (!hp) return -1;
        fprintf(hp, "%d", 10);
        fclose(hp);
        return 1;
    }
    fscanf(hp, "%d", &points);
    points = points + 10;
    fclose(hp);
    
    hp = fopen("points.txt", "w");
    fprintf(hp,"%d",points);
    fclose(hp);
    return points;
}

void playsound()
{
    Beep(550, 600);
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
        if(minute == 60 && second == 1){
            playsound();
            printf("It has been an hour. You should get up and stretch, so go on ahead and we'll wait. Did you stretch? y/n\n");
            scanf("%s", &choice);
            if(choice == 'y'){
                minute = 0;
                second = 0;
                praise();
                healthpoints3();
                printf("Your current Health Points = %d",displaypoints());
                sleep(3);
                }
            else if(choice == 'n'){
                minute = 0;
                second = 0;
                nexttime();
                sleep(3);
                }
            else{
                printf("Error, invalid input. Exiting program");
                exit(0);
            }
        }
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
        if(minute == 45 && second == 1){
            playsound();
            printf("It has been 45 minutes. You should drink some water, we'll wait. Did you drink water?? y/n\n");
            scanf("%s", &choice);
            if(choice == 'y'){
                minute = 0;
                second = 0;
                praise();
                healthpoints1();
                printf("Your current Health Points = %d",displaypoints());
                sleep(3);
                }
            else if(choice == 'n'){
                minute = 0;
                second = 0;
                nexttime();
                sleep(3);
                }
            else{
                printf("Error, invalid input. Exiting program");
                exit(0);
            }
        }
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
        if(minute == 120 && second == 1){
            playsound();
            printf("It has been 2 hours since the start of the application. You should go out in the sun once a day, so go an ahead and we'll wait. Did you go out in the sun? y/n\n");
            scanf("%s", &choice);
            if(choice == 'y'){
                minute = 0;
                second = 0;
                praise();
                healthpoints5();
                printf("Your current Health Points = %d",displaypoints());
                sleep(3);
                exit(0);
                }
            else if(choice == 'n'){
                minute = 0;
                second = 0;
                nexttime();
                sleep(3);
                }
            else{
                printf("Error, invalid input. Exiting program");
                exit(0);
            }
        }
    }
}

int test()
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
        if(second == 11){
            playsound();
            printf("Did you do the activity? y/n\n");
            scanf("%s", &choice);
            if(choice == 'y'){
                minute = 0;
                second = 0;
                praise();
                healthpointsEXP();
                printf("Your Current health points = %d",displaypoints());
                sleep(3);
                }
            else if(choice == 'n'){
                minute = 0;
                second = 0;
                nexttime();
                sleep(3);
                }
            else{
                printf("Error, invalid input. Exiting program");
                exit(0);
            }
        }
    }
}

int main()
{   
    int num;
    printf("********************************************************************************************\n");
    printf("Welcome to HealthX - a prototype project that aims to remind you of doing healthy activities.\n");
    printf("********************************************************************************************\n\n");
    printf("Your current health points are: %d\n\n",displaypoints());
    printf("What activity reminder do you want to set?\n1.Stretch break\n2.Drinking water\n3.Sunlight exposure\n4.Test/experimental\n");
    scanf("%d", &num);
    switch(num){
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
    default:
        printf("Error, invalid input. Please enter any one of the following - '1' '2' '3' or '4'");
    }
    return 0;
}
