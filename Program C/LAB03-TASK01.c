//Group Meow
//Muna Syahmina binti Ma'som (A180535)
//Khairool Azril bin Mustapha (A181527)
//MOHAMAD SAIFUL NIZAM BIN ABD AZIZ (A179830)

#include <stdio.h>

int main() {
    int temp[7], total = 0; 
    double ave;
    for(int i=0; i<7; i++){
        printf("Enter Temperature Reading of Day:%d=", 1+i);
        scanf("%d", &temp[i]); 
        total = total + temp[i];
    }
    ave = total/7.0;
    printf("The Average Temperature of the week is = %.2lf", ave);
}