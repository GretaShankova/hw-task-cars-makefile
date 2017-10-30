#include <stdio.h>
#include "common.h"

int main() {

    int choice = 0;
    char searchModel[20];
    Car *listCars = loadCars();

    menu();
    scanf("%d", &choice);

    switch (choice) {

        case 1  :
            printf("Enter model for search:\n");
            scanf("%s", searchModel);
            //printf("searchModel \'%s\'\n", searchModel);
            searchCarByModel(searchModel, listCars);
            break;

        case 2  :
            searchMostHP(listCars);
            break;

        case 3  :
            searchMostHPTuned(listCars);
            break;

        default :
            printf("Please select option from 1 to 3 from the menu!");
    }


    return 0;
}
