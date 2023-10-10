#ifndef CAR
#define CAR


#include<iostream>
#include<string>
#include "std_types.hpp"

using namespace std;

#define SIZE 30
#define CAR_SIZE 100

typedef struct car
{
	uint8 carName[SIZE]; // Name of the car
	uint8 carModel[SIZE]; //Model of the car 	
	uint8 carYear; //Year of car manufacturing
	uint32 carNum; // Numbers of total cars of that model  
	uint32 carsAvailable; // Number of available cars of that model
	uint32 rentalCost; // The cost to be paid to rent that model
	uint32 engine; // Car's Engine specifications (CC)  Model Specifications
	uint32 cylinders; // Car's number of Cylinders
	uint32 horsePower; // Car's Horse power (HP)
	string feedBack; // Car's FeedBack
};


typedef struct dataBase
{
	car myCars[CAR_SIZE]; // Array of Structures that contain Cars in the Stock
	uint32 carsTotal; // Total Cars in the Stock
	uint64 totalRent;// Total sum of Rents
};



typedef dataBase* ptost;

/*******Function Prototypes*********/

void addCars(ptost, int ,ptoui );

void list_Structure(ptost,int );

void list_Names(ptost, int );

void listProgramOptions(ptous);

void continueOption(ptous);

uint8 listAfterFull(ptous);

void listReservationOptions(ptous);

void removeCars(ptost, int , ptoui );

#endif // !CAR
