//MOHAMAD SAIFUL NIZAM BIN ABD AZIZ (A179830)
#include<stdio.h>
#include<stdlib.h>

int main(){

    double dayzz, hourzz, chargzz=0, hourcoun=0,  total=0, totaldis=0;
    printf("-WELCOME TO KLIA PARKING METER-");
    printf("\n................................\nHOURS:-            RATE:-\n1st-3rd hours      RM4.00/hour\n4th-5th hours      RM3.00/hour\n6th-9th hours      RM2.50/hour\n10th-18th hours    RM2.00/hour\nMaximum a day      RM46.00");
    printf("\n................................\nEnter number of days: ");
    int matches = scanf("%lf",&dayzz); //// scanf return num of variables caught
    fscanf(stdin, "%*[^\n]");
    //printf("%d\n", matches);
    
    if (dayzz>=0)
    {
        printf("Enter number of hours of current day: ");
        scanf("%lf",&hourzz);
        if(hourzz>=0)
        {
            if (hourzz>=0 && hourzz<=3)
            {
                chargzz=hourzz*4;
            }
            else if (hourzz>3 && hourzz<=5)
            {
                chargzz=12.00+((hourzz-3)*3);
            }
            else if (hourzz>5 && hourzz<=9)
            {
                chargzz=18.00+((hourzz-5)*2.5);
            }
            else if (hourzz>9 && hourzz<=18)
            {
                chargzz=28.00+((hourzz-9)*2);   
            }
            else if (hourzz>18 && hourzz<=24)
            {
                chargzz=46.00;
            }
            else
            {
                printf("Invalid Input\n");
                exit(0);

            }
            total=chargzz+(dayzz*46);
            printf("Total charges: RM%.2lf",total);

            hourcoun=hourzz+(dayzz*24);
            if(hourcoun>=36)
            {
                printf("\nYou will purchase discount of 10 percent\n");
                totaldis=total-(total*10/100);
                printf("Total charges after discount: RM%.2lf",totaldis);
            }
        }
        else
        {
            printf("Invalid input\n");
        }
    
    }
    else
    {
        printf("Invalid input\n");
    }
}