/*
    defines structure representing a house attributes like room_quantity established_year and city number of house using array 
*/

#include <stdio.h>

struct House {
    int total_room;
    int established_year;
    char city[50];
};

int main() {
    int n = 5;

    struct House houses[n];

    for(int i = 0; i < n; i++) {
        printf("Enter details of house %d\n", i+1);
        printf("Enter number of rooms: ");
        scanf("%d", &houses[i].total_room);
        printf("Enter established year: ");
        scanf("%d", &houses[i].established_year);
        printf("Enter city: ");
        scanf("%s", houses[i].city);
    }

    printf("\nDetails of the houses are:\n");
    for(int i = 0; i < n; i++) {
        printf("\nHouse %d\n", i+1);
        printf("Number of rooms: %d\n", houses[i].total_room);
        printf("Established year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }

    return 0;
}