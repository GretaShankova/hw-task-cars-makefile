//
// Created by infinys on 30.10.17..
//

#ifndef COMMON_H
#define COMMON_H



#define SIZE_ARRAY  109


typedef struct {
    char *model;
    int horsePower;
    int torque;
    int torqueTuned;
    int horsePowerTuned;

} Car;



void printCarInfo(Car *cCar);

void searchCarByModel(char *model, Car *listCars);


void searchMostHP(Car listCars[]);

void searchMostHPTuned(Car listCars[]);

void menu();

Car *loadCars();




#endif
