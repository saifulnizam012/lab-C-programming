//KHAIROOL AZRIL BIN MUSTAPHA (A181527)
#include <stdio.h>
#include <conio.h>
#include <math.h>

double Square(double a);
double Cube(double a);
double SquareRoot(double a);
double CubeRoot(double a);
double AreaCircle(double a);
double AreaTriangle(double a, double b);
double AreaRectangle(double a, double b);
double VolumeCylinder(double a, double b);
double VolumePrism(double a, double b, double c);

int main(){
    char alpha;

    printf("What would you like to do today?\n");
    printf("a. Calculate square\n");
    printf("b. Calculate cube\n");
    printf("c. Calculate square root\n");
    printf("d. Calculate cube root\n");
    printf("e. Calculate area of circle\n");
    printf("f. Calculate area of triangle\n");
    printf("g. Calculate area of rectangle\n");
    printf("h. Calculate volume of cylinder\n");
    printf("i. Calculate volume of prism\n");

    scanf("%c", &alpha);
    float v, r, h, l, b;
    switch(alpha){

        case 'a':
            printf("Please insert value: ");
            scanf("%f",&v);
            printf("Square value of  = %.2lf" , Square(v));
            break;
        
        case 'b':
            printf("Please insert value: ");
            scanf("%f",&v);
            printf("Cube value of  = %.2lf" , Cube(v));
            break;
        
        case 'c':
            printf("Please insert value: ");
            scanf("%f",&v);
            printf("Square Root value of  = %.2lf" ,SquareRoot(v));
            break;

        case 'd':
            printf("Please insert value: ");
            scanf("%f",&v);
            printf("Cube Root value of  = %.2lf" ,CubeRoot(v));
            break;
        
        case 'e':
            printf("Please insert radius: ");
            scanf("%f",&r);
            printf("Area of Circle  = %.2lf" , AreaCircle(r));
            break;

        case 'f':
            printf("Please insert height: ");
            scanf("%f",&h);
            printf("Please insert length: ");
            scanf("%f",&l);
            printf("Area of Triangle  = %.2lf" , AreaTriangle(h,l));
            break;
        
        case 'g':
            printf("Please insert height: ");
            scanf("%f",&h);
            printf("Please insert length: ");
            scanf("%f",&l);
            printf("Area of Rectangle  = %.2lf" , AreaRectangle(h,l));
            break;
        
        case 'h':
            printf("Please insert height: ");
            scanf("%f",&h);
            printf("Please insert radius: ");
            scanf("%f",&r);
            printf("Volume of Cylinder = %.2lf" , VolumeCylinder(h,r));
            break;

        case 'i':
            printf("Please insert base: ");
            scanf("%f",&b);
            printf("Please insert height: ");
            scanf("%f",&h);
            printf("Please insert length: ");
            scanf("%f",&l);
            printf("Volume of Prism  = %.2lf" , VolumePrism(b,h,l));
            break;

        default:
            printf("No such option. Please enter a valid option");

    }
}

double Square(double a){
    double s = a*a;
    return s;
}

double Cube(double a){
    double c = a*a*a;
    return c;
}

double SquareRoot(double a){
    double sr = sqrt(a);
    return sr;
}

double CubeRoot(double a){
    double cr = cbrt(a);
    return cr;
}

double AreaCircle(double a){
    double ac = 27/7.0*a*a;
    return ac;
}

double AreaTriangle(double a, double b){
    double at = 0.5*a*b;
    return at;
}

double AreaRectangle(double a, double b){
    double ar = a*b;
    return ar;
}

double VolumeCylinder(double a, double b){
    double vc = 27/7.0*a*a*b;
    return vc;
}

double VolumePrism(double a, double b, double c){
    double vp = 0.5*a*b*c;
    return vp;
}