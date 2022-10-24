#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Create main function that can take in command line inputs
int main(int argc, char *argv[]){
    //Write section that will randomly choose between the four meals and their costs
    time_t t;
    double price;
    int random;
    double tax;
    double tip;

    sscanf(argv[1], "%lf", &tax);
    sscanf(argv[2], "%lf", &tip);

    tax = tax * 0.01;
    tip = tip * 0.01;

    srand((unsigned) time(&t));

    random = rand() % 4;

    if (random == 0){
        //Compute the calculations to get the tax amount, tip amount, and total bill
        //Print all the values
        price = 9.95;
        printf("Salad: $%lf\n", price);
        printf("Tax amount: $%lf\n", price * tax);
        printf("Tip amount: $%lf\n", price * tip);
        printf("Total amount: $%lf", price + (price * tax) + (price * tip));
    }
    else if (random == 1){
        price = 4.55;
        printf("Soup: $%lf\n", price);
        printf("Tax amount: $%lf\n", price * tax);
        printf("Tip amount: $%lf\n", price * tip);
        printf("Total amount: $%lf", price + (price * tax) + (price * tip));
    }
    else if (random == 2){
        price = 13.25;
        printf("Sandwich: $%lf\n", price);
        printf("Tax amount: $%lf\n", price * tax);
        printf("Tip amount: $%lf\n", price * tip);
        printf("Total amount: $%lf", price + (price * tax) + (price * tip));
    }
    else if (random == 3){
        price = 22.35;
        printf("Pizza: $%lf\n", price);
        printf("Tax amount: $%lf\n", price * tax);
        printf("Tip amount: $%lf\n", price * tip);
        printf("Total amount: $%lf", price + (price * tax) + (price * tip));
    }

    
}
