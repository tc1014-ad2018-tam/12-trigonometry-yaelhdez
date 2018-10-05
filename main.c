//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846 //PI DEFINE

//--------------------------------------------RADIANS FUNCTION------------------------------------------------------------
double Radians(double degrees){
    double radians;
    return radians=degrees*(PI/180); //Operation and return to convert degrees to radians
}
//--------------------------------------------MAIN FUNCTION------------------------------------------------------------
int main() {
    double degrees, radians,cosec,sec,cotan; //variables

    printf("gimme the angle\n");
    scanf("%lf",&degrees); //degrees request

    radians=Radians(degrees); //the value radians takes the value of the function Radians();
    cotan=1/(tan(radians)); //operation to convert Tan to Cotan
    cosec=1/(sin(radians)); //operation to convert Sin to Csc
    sec=1/(cos(radians)); //operation to convert Cos to Sec

    printf("The value of %lf degrees in radians is: %lf\n",degrees,radians); //this line show to the user the conversion
    printf("Cos = %lf\nSin = %lf\nTan = %lf\n",cos(radians),sin(radians),tan(radians)); //this line show to the user the Cos, sin and Tan

    if (radians==PI || radians==0){ //If radians is equals to pi or zero, Csc and Cotan becomes infinity
        printf("Sec = %lf\nCosec = infinity\nCoTan = infinity", sec);
    }
    else { //if not, take the respective values
        printf("Sec = %lf\nCosec = %lf\nCoTan = %lf\n ", sec, cosec, cotan);
    }
    return 0;
}