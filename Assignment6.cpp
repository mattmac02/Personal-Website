#include <stdio.h>
#include <cmath>


//Declaring the inputs and outputs and what form they will take
float bridgeStress(float E, float s);


int main()
{
    float elasticMod, strain;
    float stress;
	scanf("%f, %f", &elasticMod, &strain);
	//In the console, enter elastic modulus (MPa) and strain values on a single line separated by a comma and space. 
	
    //Declaring which values will be used as inputs
    stress = bridgeStress(elasticMod, strain);

    //Outputing the stress value calculated above
    printf("Stress value: %.2f MPa\n", stress);

    //If statements containg nested if statements to output certain print statements depending on what the result of the caclulation above was
    //Prints various statments if stress is in tension
    if (stress > 0)
    {
        printf("Bridge deck in tension\n");
        if (abs(stress) > 5)
        printf("Danger: tensile strength exceeded\n");
        else
        printf("Bridge deck safe\n");
    }
    //Prints various statements if stress is in compression
    else if (stress < 0)
    {
        printf("Bridge deck in compression\n");
        if (abs(stress) > 30)
        printf("Danger: compressive strength exceeded\n");
        else
        printf("Bridge deck safe\n");
    }
    //Prints statement if there is no stress in the bridge
    else if (stress == 0)
    printf("No stress in bridge\n");
}

float bridgeStress(float E, float s)
{
    float totalStress;
    totalStress = E * s;
    return totalStress;
}