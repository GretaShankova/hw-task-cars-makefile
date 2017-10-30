#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"




void printCarInfo(Car *cCar) {
    printf("-------------------\n");
    printf("Model: %s\n", cCar->model);
    printf("Horse power: %d\n", cCar->horsePower);
    printf("Torque: %d\n", cCar->torque);
    printf("Horse power - tuned: %d\n", cCar->horsePowerTuned);
    printf("Torque - tuned: %d\n", cCar->torqueTuned);
    printf("-------------------\n");
}

void searchCarByModel(char *model, Car *listCars) {


    for (int i = 0; i < SIZE_ARRAY - 1; ++i) {
        if (strcmp(listCars[i].model, model) == 0) {
            //printf("i: %d\n", i);
            printCarInfo(&listCars[i]);
        }
    }
}


void searchMostHP(Car listCars[]) {
    int curIndex = 0;
    int maxHP = listCars[0].horsePower;

    for (int i = 0; i < SIZE_ARRAY - 1; ++i) {

        if (listCars[i].horsePower > maxHP) {
            maxHP = listCars[i].horsePower;
            curIndex = i;
        }
    }
    printCarInfo(&listCars[curIndex]);
}

void searchMostHPTuned(Car listCars[]) {
    int curIndex = 0;
    int maxHP = listCars[0].horsePowerTuned;

    for (int i = 0; i < SIZE_ARRAY - 1; ++i) {

        if (listCars[i].horsePowerTuned > maxHP) {
            maxHP = listCars[i].horsePowerTuned;
            curIndex = i;
        }
    }
    printCarInfo(&listCars[curIndex]);
}

void menu() {

    printf("Please select option from menu below:\n");
    printf("1. Search between all cars based on model.\n");
    printf("2. Search car with the most HP.\n");
    printf("3. Search car with the most Torque.\n");

}

Car *loadCars() {

    Car *listCars = malloc(sizeof(Car) * SIZE_ARRAY);
    listCars[0].model = "Lada";
    listCars[0].horsePower = 200;
    listCars[0].horsePowerTuned = 5;
    listCars[0].torque = 5;
    listCars[0].torqueTuned = 6;

    for (int i = 1; i < SIZE_ARRAY; ++i) {

        Car newCar = {"Toyota", i, i + 1, i, i};
        listCars[i] = newCar;
    }
    return listCars;
}

