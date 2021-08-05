//MNTC313 Assignment 4
#include <stdio.h>
#include <cmath>
#include <math.h>
#include <string>
#include <iostream>

int main()
{
    //Variable declaration
	float initialHeight, tankRad, pipeRad;
	int finalT;
    float g=9.81;
    float velocity;
    float volume;
    float average;
    float totalVelocity;
    float halfHeight;
    float finalHeight;
    float totalVolume;  
	
	scanf("%f, %f, %f, %d", &initialHeight, &tankRad, &pipeRad, &finalT);
	//In the console, enter initial height, tank radius, pipe radius and final time separated by a comma and a space
    
    //Completing calculations in a stepwise manner to allow the variables to change as time progresses
        totalVolume = 3.14 * initialHeight * pow(tankRad,2);
        volume = totalVolume;
    for(int t = 0; t <= finalT; t++){
        velocity = 0.5 * sqrt(2*g*initialHeight);
        totalVelocity += velocity;
        volume -= velocity * 3.14 * pow(pipeRad,2)*1;
        initialHeight = (volume) / (3.14 * pow(tankRad,2));

    //Relating half the height of the water and final height of the water to the initial height of the water after the calculations are complete so that the values can be properly substituted
        if (t == 1800){
            halfHeight = initialHeight;
        }
        if (t == finalT){
            finalHeight = initialHeight;
        }
    }
    //Calculating the final average outside of the for loop as it is only done once using the values obtained in the for loop
        average = totalVelocity / finalT;

    //Print statements in a stepwise order to ensure they are displayed in the correct fashion    
        printf("Average velocity value: %.2f m/s\n", average);
        printf("Height value after 30 min: %.2f m\n", halfHeight);
        printf("Height value after %d seconds: %.2f m\n", finalT, finalHeight);

    //Final if statements declaring the fullness of the tank based on its volume in comparison to the total volume
        if (volume <= totalVolume/2){
            printf("Tank half drained\n");
        }else if (volume > totalVolume/2){
            printf("Tank still not half drained\n");
        }
}