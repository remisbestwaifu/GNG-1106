#include<stdio.h>


float convertKtoF(float degreeK){
    float degreeF, degreeC;
    degreeC = (degreeK - 273.2);
    degreeF = degreeC * 9.f / 5.f + 32.f;
    return degreeF;
}


int main(){
    float degreeK;
    printf("Please enter a temperature in degrees Kelvin: ");
    scanf("%f",&degreeK);
    float degreeF = convertKtoF(degreeK);
    printf("\n%f",degreeF);
    return 0;
}


