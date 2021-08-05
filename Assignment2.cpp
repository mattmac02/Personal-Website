#include <string>
#include <iostream>
#include <cmath>

int main()
{
    //Variable declaration
    float pLength, pWidth, pDepth, pRadius;
    scanf("%f, %f, %f, %f", &pLength, &pWidth, &pDepth, &pRadius);
    float phoneSurfaceArea;
    float volumeMissingFromCorners;
    float totalVolume;
    float phoneVolume;
    float materialCost;
    float totalMaterialCost;
    float batteryCost;
    float batterySpace;
    float totalBatteryCost;

    //Variable values
    materialCost = 0.0183;
    batteryCost = 0.0095;
    batterySpace = 0.45;

    //Surface area calculation
    phoneSurfaceArea = (4 * (pWidth - 2 * pRadius) * pRadius) + (2 * 3.14 * pRadius * pDepth) + (2 * (pLength - 2 * pRadius) * pWidth) + (2 * 3.14 * pow(pRadius, 2)) + (2 * ((pLength - 2 * pRadius) * pDepth)) + (2 * (pWidth - 2 * pRadius) * pDepth);

    //Volume calculation
    volumeMissingFromCorners = (4 * (pRadius * pRadius * pDepth)) - (3.14 * pow(pRadius, 2) * pDepth);
    totalVolume = (pLength * pWidth * pDepth);
    phoneVolume = (totalVolume) - (volumeMissingFromCorners);

    //Material cost calculation
    totalMaterialCost = (phoneVolume * materialCost);

    //Battery cost calculation
    totalBatteryCost = (batteryCost * phoneVolume * batterySpace);

    //Screen output
    printf("iPhone surface area:\n%.0f mm2\n", phoneSurfaceArea);
    printf("iPhone volume:\n%.0f mm3\n", phoneVolume);
    printf("iPhone material cost:\n$%.0f\n", totalMaterialCost);
    printf("battery cost:\n$%.0f\n", totalBatteryCost);
    scanf("%f, %f, %f, %f", &pLength, &pWidth, &pDepth, &pRadius);
}
