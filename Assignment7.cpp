#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main ()
{
    //Statements to allow the user to input values to be used for later calculations and displaying
    int Nd, Nk;
    float depthInc, kInc, rockWeight, firstDepth, firstk;
    printf("Input rock unit weight (kN/m3):\n");
    scanf("%f", &rockWeight);
    printf("Input number of depth values:\n");
    scanf("%d", &Nd);
    printf("Input first depth value (m):\n");
    scanf("%f", &firstDepth);
    printf("Input depth increment (m):\n");
    scanf("%f", &depthInc);
    printf("Input number of k values:\n");
    scanf("%d", &Nk);
    printf("Input first k value (m):\n");
    scanf("%f", &firstk);
    printf("Input k increment (m):\n");
    scanf("%f", &kInc);

    //Defining the output file name
    ofstream outputFile("outputFileA.txt");
    string filename = "outputFileA.txt";

    //Defining the variable to be used
    int currentDepth[Nd];
    int currentK[Nk];
    int verticalStress[Nd];
    int horizontalStress[Nd][Nk];
    int i;
    int j;
    
    //Opening the output file so that text can be inputted into it
    FILE*fileOutput=fopen(filename.c_str(),"w");
    printf("Vertical stress values (kPa):\n");
    for (i=0;i<Nd;i++)
    {
        //Calculations of the vertical stress for every depth that the user entered
        currentDepth[i] = firstDepth + (depthInc*i);
        verticalStress[i]=currentDepth[i]*rockWeight;
        printf("%d\n", verticalStress[i]);
        //Printing all of the depth values for the amount of iterations that the user defined through the previous inputs
        fprintf(fileOutput, "%d", currentDepth[i]);
        for (j=0;j<Nk;j++)
        {
        //Calculations of the horizontal stress for every k value that the user entered
        currentK[j] = firstk + (kInc*j);
        horizontalStress[i][j] = verticalStress[i] * currentK[j];
        //Printing all of the horizontal stress values to the output file opened and defined previously
        fprintf(fileOutput, ",%d", horizontalStress[i][j]);
        if (j==Nk-1)
        {
            //Adding a break to the last value of the line
            fprintf(fileOutput, "\n");
        }
        }
    }
    //Closing the file, allowing us to see the output
    fclose(fileOutput);
}