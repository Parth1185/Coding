#include <stdio.h>
#include <string.h>

#define MAX_TRAINS 6
#define MAX_NAME_LENGTH 50
#define MAX_ROUTE_LENGTH 100

// Structure to represent a train
struct Train {
    int number;
    char name[MAX_NAME_LENGTH];
    char route[MAX_ROUTE_LENGTH];
    int platform;
};

// Function to print welcome message
void printWelcomeMessage() {
    printf("---------------WELCOME TO INDIAN RAILWAYS---------------\n");
    printf("================LUDHIANA JUNCTION (LDH)================\n");
}

int main() {
    // Print welcome message
    printWelcomeMessage();

    // Define train dictionary
    struct Train trainDictionary[MAX_TRAINS];

    // Populate train dictionary
    trainDictionary[0].number = 12425;
    strcpy(trainDictionary[0].name, "RAJDHANI EXPRESS");
    strcpy(trainDictionary[0].route, "NDLS - JAT");
    trainDictionary[0].platform = 1;

    trainDictionary[1].number = 12014;
    strcpy(trainDictionary[1].name, "Shatabdi Express");
    strcpy(trainDictionary[1].route, "ASR - NDLS");
    trainDictionary[1].platform = 2;

    trainDictionary[2].number = 12214;
    strcpy(trainDictionary[2].name, "Duronto Express");
    strcpy(trainDictionary[2].route, "DEE - YPR");
    trainDictionary[2].platform = 3;

    trainDictionary[3].number = 12203;
    strcpy(trainDictionary[3].name, "Garib Rath Express");
    strcpy(trainDictionary[3].route, "SHC - ASR");
    trainDictionary[3].platform = 4;

    trainDictionary[4].number = 22435;
    strcpy(trainDictionary[4].name, "VANDE BHARAT EXPRESS");
    strcpy(trainDictionary[4].route, "BSB - NDLS");
    trainDictionary[4].platform = 5;

    trainDictionary[5].number = 22462;
    strcpy(trainDictionary[5].name, "Shri Shakti Express");
    strcpy(trainDictionary[5].route, "SVDK - NDLS");
    trainDictionary[5].platform = 6;

    // Print train dictionary
    printf("\nCurrent Platform Status\n");
    printf("Train Number\t\tTrain Name\t\t\tRoute\t\t\tPlatform No.\n");
    printf("------------------------------------------------------------------------------\n");
    for (int i = 0; i < MAX_TRAINS; ++i) {
        printf("%d\t\t%s\t\t%s\t\t%d\n", trainDictionary[i].number, trainDictionary[i].name, trainDictionary[i].route, trainDictionary[i].platform);
    }

    return 0;
}
