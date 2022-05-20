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
*       calculate their maximum heart rate and target heart rate. 
* VERSION: 
************************************************************/

#include <stdio.h>
#include <string.h>

// void promptUser(); 

int calculateUserAge(int birthMonth, int birthDay, int birthYear, int currMonth, int currDay, int currYear);

int calculateMaxHeartRate(int userAge);

int calculateLowerTargetHeartRate(int maxHeartRate);

int calculateUpperTargetHeartRate(int maxHeartRate); 

void displayInformation(int userAge, int maxHeartRate, int lowHeartRate, int highHeartRate); 

int main()
{   
    // User's birth date
    int birthMonth = 0;
    int birthDay = 0;
    int birthYear = 0;
    
    // Today's date
    int currMonth = 0;
    int currDay = 0;
    int currYear = 0;

    int userAge = 0;        // User's age rounded down
    int maxHeartRate = 0;   // Used to determine the heart rate range
    int lowHeartRate = 0;   // lower range heart rate
    int highHeartRate = 0;  // higher range heart rate

    printf("____________________________\n");
    printf("Target Heart Rate Calculator\n");
    printf("----------------------------\n");

    // Prompt user's age, today's date
    printf("Enter your date of birth (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &birthMonth, &birthDay, &birthYear);
    printf("Enter today's date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &currMonth, &currDay, &currYear);

    // promptUser(); 

    userAge = calculateUserAge(birthMonth, birthDay, birthYear, currMonth, currDay, currYear);
    maxHeartRate = calculateMaxHeartRate(userAge);
    lowHeartRate = calculateLowerTargetHeartRate(maxHeartRate);
    highHeartRate = calculateUpperTargetHeartRate(maxHeartRate);

    displayInformation(userAge, maxHeartRate, lowHeartRate, highHeartRate);
    
    return 0;
}

// void promptUser(){

// }

int calculateUserAge(int birthMonth, int birthDay, int birthYear, int currMonth, int currDay, int currYear){

    if(currMonth >= birthMonth && currDay >= birthDay)
        return currYear - birthYear;
    else
        return currYear - birthYear - 1; 
}

int calculateMaxHeartRate(int userAge){
    return 220 - userAge; 
}

int calculateLowerTargetHeartRate(int maxHeartRate){
    return maxHeartRate * 0.50; 
}

int calculateUpperTargetHeartRate(int maxHeartRate){
    return maxHeartRate * 0.85; 
}

    // Display results to user
void displayInformation(int userAge, int maxHeartRate, int lowHeartRate, int highHeartRate){

    printf("----------------------------\n");
    printf("Age: %d years, \n", userAge);
    printf("Maximum heart rate: %d BPM, \n", maxHeartRate);
    printf("Target heart rate: %d - %d BPM, \n", lowHeartRate, highHeartRate);

}

// /************************************************************ 
// * FILENAME: main.c  
// *
// * ENGINEER: Juan Paulo Palacios 
// *
// * INSTRUCTOR: Professor Bhuse
// * 
// * DESCRIPTION:
// *       Heart rate is an important factor to consider during intensive
// *       physical activities. This program prompts a user's age to then 
// *       calculate their maximum heart rate and target heart rate. 
// * VERSION: 
// ************************************************************/

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // User's birth date
//     int birthMonth;
//     int birthDay;
//     int birthYear;
    
//     // Today's date
//     int currMonth;
//     int currDay;
//     int currYear;

//     int userAge = 0;        // User's age rounded down
//     int maxHeartRate = 0;   // Used to determine the heart rate range
//     int lowHeartRate = 0;   // lower range heart rate
//     int highHeartRate = 0;  // higher range heart rate

//     printf("____________________________\n");K
//     printf("Target Heart Rate Calculator\n");
//     printf("----------------------------\n");

//     // Prompt user's age, today's date
//     printf("Enter your birth date (MM/DD/YYYY): ");
//     scanf("%d/%d/%d", &birthMonth, &birthDay, &birthYear);
//     printf("Enter today's date (MM/DD/YYYY): ");
//     scanf("%d/%d/%d", &currMonth, &currDay, &currYear);

//     // Calculate user's age, consider leap years (?)
//     userAge = currYear - birthYear - 1;

//     if(currMonth >= birthMonth && currDay >= birthDay)
//         userAge += 1; 

//     // Calculate user's maxiumum heart rate in BPM
//     maxHeartRate = 220 - userAge;

//     // Calculate lower bound of target heart rate
//     lowHeartRate = maxHeartRate * 0.50;

//     // Calculate upper bound of target heart rate
//     highHeartRate = maxHeartRate * 0.85;

//     // Display results to user
//     printf("____________________________\n");
//     printf("Age: %d years, \n", userAge);
//     printf("Maximum heart rate: %d BPM, \n", maxHeartRate);
//     printf("Target heart rate: %d - %d BPM, \n", lowHeartRate, highHeartRate);
//     printf("----------------------------\n");

//     return 0;
// }
