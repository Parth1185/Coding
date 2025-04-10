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
};

// Function to print welcome message
void printWelcomeMessage() {
    printf("-----------WELCOME TO INDIAN RAILWAYS-----------\n");
}

int main() {
    // Print welcome message
    printWelcomeMessage();

    // Define train dictionary
    struct Train trainDictionary[MAX_TRAINS];

    // Populate train dictionary
    trainDictionary[0].number = 12425;
    strcpy(trainDictionary[0].name, "Rajdhani Express");
    strcpy(trainDictionary[0].route, "NDLS - JAT");

    trainDictionary[1].number = 12014;
    strcpy(trainDictionary[1].name, "Shatabdi Express");
    strcpy(trainDictionary[1].route, "ASR - NDLS");

    trainDictionary[2].number = 12214;
    strcpy(trainDictionary[2].name, "Duronto Express");
    strcpy(trainDictionary[2].route, "DEE - YPR");

    trainDictionary[3].number = 12203;
    strcpy(trainDictionary[3].name, "Garib Rath Express");
    strcpy(trainDictionary[3].route, "SHC - ASR");

    trainDictionary[4].number = 22435;
    strcpy(trainDictionary[4].name, "VANDE BHARAT EXPRESS");
    strcpy(trainDictionary[4].route, "BSB - NDLS");

    trainDictionary[5].number = 12050;
    strcpy(trainDictionary[5].name, "GATIMAAN EXPRESS");
    strcpy(trainDictionary[5].route, "NZM - VGLJ");

    // Print train dictionary
    printf("\nTrain Dictionary:\n");
    printf("Train Number\tTrain Name\tRoute\n");
    for (int i = 0; i < MAX_TRAINS; ++i) {
        printf("%d\t\t%s\t\t%s\n", trainDictionary[i].number, trainDictionary[i].name, trainDictionary[i].route);
    }

    return 0;
}
