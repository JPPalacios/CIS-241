/************************************************************ 
* FILENAME: main.c  
*
* ENGINEER: Juan Paulo Palacios 
*
* INSTRUCTOR: Professor Bhuse
* 
* DESCRIPTION:
*       Heart rate is an important factor to consider during intensive
*       physical activities. This program prompts a user's age to then 
*       calculate their maximum heart rate and target heart rates
* VERSION: 
************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    // User's birth date
    int birthMonth;
    int birthDay;
    int birthYear;
    
    // Today's date
    int currMonth;
    int currDay;
    int currYear;

    int userAge = 0;        // User's age rounded down
    int maxHeartRate = 0;   // Used to determine the heart rate range
    int lowHeartRate = 0;   // lower range heart rate
    int highHeartRate = 0;  // higher range heart rate

    printf("____________________________\n");
    printf("Target Heart Rate Calculator\n");
    printf("----------------------------\n");

    // Prompt user's age, today's date in MM/DD/YYYY --< format date
    printf("Please enter your birthdate and today's date: ");

    // String parser with some error checking
    scanf("%d", &birthDay);

    // Calculate user's maxiumum heart rate in BPM
    maxHeartRate = 220 - userAge; 

    // Calculate lower bound of target heart rate
    lowHeartRate = maxHeartRate * 0.50;

    // Calculate upper bound of target heart rate
    highHeartRate = maxHeartRate * 0.85;

    // Display results to user
    printf("____________________________\n");
    printf("User's age: %d years, \n", userAge);
    printf("User's maximum heart rate: %d BPM, \n", maxHeartRate);
    printf("User's target heart rate: %d - %d BPM, \n", lowHeartRate, highHeartRate);
    printf("----------------------------\n");

    return 0;
}
