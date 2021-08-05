#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>
#include <math.h>
 
int main()
{
   float time,initVel,initAng,initH;
   float position;
   float velocity;
   scanf("%f, %f, %f, %f", &time, &initVel, &initAng, &initH);
    
    position= initH-(0.5*(9.81)*(pow(time,2)))+(initVel*(sin(initAng*3.14/180))*(time));
    velocity= ((initVel)*(sin(initAng*3.14/180)))-(9.81*time);
    
    if (time>=0){
        printf("Projectile released\nPosition: %.2f meters\nVelocity value: %.2f meters/second\n", position, velocity);
        
        if (velocity>=0){
            printf("Projectile ascending\n");
            
            if (position>=initH){
                printf("Projectile above initial position\n");
            }
        }else if (velocity<0){
            printf("Projectile descending\n");
            
            if (position>=initH){
                printf("Projectile above initial position\n");
            }else if (position<initH){
                printf("Projectile below initial position\n");
            }
        }
    }else
        printf("Projectile not released\n");
}

