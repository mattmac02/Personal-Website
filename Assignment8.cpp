#include <stdio.h>
#include <iostream>
using namespace std;

struct payload
{
    //The number of customers inside of a given center
    int customer; 
    //The $ average price of item
    int avgPricePer;  
    //The kg average weight of the item
    float avgWeightPer; 
};

class economics
{
    public:
    payload p;
    //Cost per kg of the item
    float costPerKg; 
    int targetRevenue;

    //Calculation for the amount of customers in all of the stores combined
    int totalCustomersServed(int numberOfCenters, int numberOfCustomers[]) 
    {
        int totalCustO=0;
        for (int i=0;i<numberOfCenters;i++)
        {
        totalCustO += numberOfCustomers[i];
        }
        return totalCustO;
    }
    
    //Calculation for the total money that all of the stores made combined
    float finalPrice(int numberOfCenters, float averagePrices[]) 
    {
        int totalPriceO=0;
        for (int i;i<numberOfCenters;i++)
        {
            totalPriceO += averagePrices[i];
            
        }
        return totalPriceO;
    }

    //Calculation for the total weight of all of the stores combined
    float totalWeight(int numberOfCenters,int numberOfCustomers[], float averageWeight[]) 
    {
        int finalWeightO=0;
        for (int i=0;i<numberOfCenters;i++)
        { 
            finalWeightO += (numberOfCustomers[i]*averageWeight[i]);
                  
        }
        return finalWeightO;
    }

    //Calculation for the total revenue made from all of the stores combined
    float finalRevenue(int numberOfCenters, int numberOfCustomers[], float averageWeight[], float averagePrices[]) 
    {
        float totalRevO=0;
        for(int i=0;i<numberOfCenters;i++)
        {
        int totalRevO = numberOfCustomers[i]*(averagePrices[i]-(averageWeight[i]*4.7));
        }
        return totalRevO;
    }

    float averageRevenue(int numberOfCenters, float rev)
    {
        int avg=0;
        avg = rev/ numberOfCenters;
        return avg;
    }
};

int main()
{
    //Declaring the number of centers variable
    int numCenters; 

    economics e;
    payload p;

    //User input for number of centers
    printf("Input number of centers:\n"); 
    scanf("%d", &numCenters);
    
    //Declaring the other variables that will be needed
    int customersD[numCenters];
    float priceD[numCenters];
    float weightD[numCenters];
    float averageRevenue;
    float finalRevenue;
    
    //User input for the number of customers at each center
    printf("Input customer data for all centers:\n"); 
    for (int i=0;i<numCenters;i++)
    {
        scanf("%d", &customersD[i]);
    }

    //Calling the values for total customers
    p.customer = e.totalCustomersServed(numCenters, customersD);
    
    //User input for the average price per kilogram at each center
    printf("Input item average price data for all centers:\n");
    for (int i=0;i<numCenters;i++)
    {
        scanf("%f", &priceD[i]);
    }

    //Calling the values for the final price
    p.avgPricePer = e.finalPrice(numCenters, priceD);

    //User input for the average item weight at each center
    printf("Input item average weight data for all centers:\n"); 
    for (int i=0;i<numCenters;i++)
    {
        scanf("%f", &weightD[i]);
    }

    //Function calls for the total weight and the average and final revenue
    p.avgWeightPer = e.totalWeight(numCenters, customersD, weightD);
    finalRevenue = e.finalRevenue(numCenters, customersD, weightD, priceD);
    averageRevenue = e.averageRevenue(numCenters, finalRevenue);

    //Print statements for the totals and final average revenue
    printf("Total customers: %d\n", p.customer);
    printf("Total weight: %.0f kg\n", p.avgWeightPer);
    printf("Total revenue: $%.0f\n", finalRevenue);
    printf("Average revenue: $%.0f\n", averageRevenue);

    //If statement deciding whether or not the company is profitable based on meeting or surpassing an average revenue of $36000
    if(averageRevenue >= 36000)
    {
        printf("Company is profitable");
    }else
    {
        printf("Company is not profitable");
    }
}