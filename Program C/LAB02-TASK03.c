//Muna Syahmina binti Ma'som
//A180535

#include <stdio.h>

int GCD(int a, int b);

void mainGCD(){
    int num1, num2, gcd;
    printf("\nEnters two positive numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1<=0 || num2<=0){
        printf("\n Invalid! Please Enter Positive Number Only.");
    }
    else{
        gcd=GCD(num1, num2);
        printf("\nGCD of %d and %d is %d", num1, num2, gcd);
    }
}

int GCD(int a, int b){ //to calculate GCD
    int res;
    if(b!=0){
        return res = GCD(b,a%b);
    }
    else{
        return a;
    }

}

int main(){
    mainGCD();
    return 0;
}