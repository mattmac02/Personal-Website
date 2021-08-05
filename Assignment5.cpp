#include <stdio.h>
#include <cmath>
#define N 12 //Number of coordinate values

int main()
{
	//Variable declaration
	float coordinates[N][2]; //Initialize array
	float averageX=0;
	float averageY=0;
	int i, j;
	float difference;
	//Sum and average variable declaration for the 12x12 array
	float sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, sum6=0, sum7=0, sum8=0, sum9=0, sum10=0, sum11=0, sum12=0;
	float avg1=0, avg2=0, avg3=0, avg4=0, avg5=0, avg6=0, avg7=0, avg8=0, avg9=0, avg10=0, avg11=0, avg12=0;
	//Displaying the list of points in the 12x2 array and calculating the averages for the 12x2 array
	for (int i = 0; i < N; i++)
	{
		scanf("%f, %f", &coordinates[i][0], &coordinates[i][1]);
		printf("(%.1f, %.1f) , ", coordinates[i-1][0], coordinates[i][1]);
		averageX += coordinates[i][0];
		averageY += coordinates[i][1];
	}
	printf("(%.1f, %.1f)", coordinates[11][0], coordinates[11][1]);
	//Final average calculations for the 12x2 array
	averageX /= N;
	averageY /= N;
	printf("\n\nAverage center: (%.1f, %.1f)\n", averageX, averageY);
	printf("\nDistance from point 1 to\n");
	//Statements that calculate the distance and sum of the distances between each of the points in the 12x12 array
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==0){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum1 += difference;
		}
		}
	}
	printf("\nDistance from point 2 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==1){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum2 += difference;
		}
		}
	}
	printf("\nDistance from point 3 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==2){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum3 += difference;
		}
		}
	}
	printf("\nDistance from point 4 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==3){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum4 += difference;
		}
		}
	}
	printf("\nDistance from point 5 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==4){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum5 += difference;
		}
		}
	}
	printf("\nDistance from point 6 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==5){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum6 += difference;
		}
		}
	}
	printf("\nDistance from point 7 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==6){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum7 += difference;
		}
		}
	}
	printf("\nDistance from point 8 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==7){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum8 += difference;
		}
		}
	}
	printf("\nDistance from point 9 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==8){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum9 += difference;
		}
		}
	}
	printf("\nDistance from point 10 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==9){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum10 += difference;
		}
		}
	}
	printf("\nDistance from point 11 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==10){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum11 += difference;
		}
		}
	}
	printf("\nDistance from point 12 to\n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N ;j++){
		difference = sqrt(pow((coordinates[i][0]-coordinates[j][0]),2)+pow((coordinates[i][1]-coordinates[j][1]),2));
		if (i==11){
			printf("%.0d.- %.1f, ", j+1, difference);
			sum12 += difference;
		}
		}
	}
	//Final average calculations for the 12x12 array
	avg1 = sum1/11;
	avg2 = sum2/11;
	avg3 = sum3/11;
	avg4 = sum4/11;
	avg5 = sum5/11;
	avg6 = sum6/11;
	avg7 = sum7/11;
	avg8 = sum8/11;
	avg9 = sum9/11;
	avg10 = sum10/11;
	avg11 = sum11/11;
	avg12 = sum12/11;
//Print statements for the average distances in the 12x12 array
	printf("\n\nAverage distance from point 1: %.1f km\n", avg1);
	printf("Average distance from point 2: %.1f km\n", avg2);
	printf("Average distance from point 3: %.1f km\n", avg3);
	printf("Average distance from point 4: %.1f km\n", avg4);
	printf("Average distance from point 5: %.1f km\n", avg5);
	printf("Average distance from point 6: %.1f km\n", avg6);
	printf("Average distance from point 7: %.1f km\n", avg7);
	printf("Average distance from point 8: %.1f km\n", avg8);
	printf("Average distance from point 9: %.1f km\n", avg9);
	printf("Average distance from point 10: %.1f km\n", avg10);
	printf("Average distance from point 11: %.1f km\n", avg11);
	printf("Average distance from point 12: %.1f km", avg12);

	//In the console, enter the 12 coordinate values on a single line separated by comma and by spaces (ie. 1.1,5.6 5.5,8.2 etc.)

}