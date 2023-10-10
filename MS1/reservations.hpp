#ifndef RESERVATIONS
#define RESERVATIONS


#define RESERVATIONS_SIZE 100

#include "std_types.hpp"
#include<iostream>
#include<string>
#include "renter.hpp"
#include "car.hpp"

#include<ctime>
#include<cstdlib>

typedef struct reserve
{
	renter renterInfo;
	uint16 reservationNum;
	uint16 reserveStartDay;
	uint16 reserveStartMonth;
	uint16 reserveStartYear;

	uint16 reserveEndDay;
	uint16 reserveEndMonth;
	uint16 reserveEndYear;

	uint16 daysOfReservations;
	uint64 reservationCost;
};

typedef struct reservationDataBase
{
	reserve myReservations[RESERVATIONS_SIZE]; // Information about the renters
	uint64 reservationsTotalCost; // Total renters working with us 
	uint16 totalReservations;
};


typedef reservationDataBase* ptors;

void addreservation(ptors, ptost,int, ptoui,uint32);

void listAllReservation(ptors,ptost,unsigned int,uint32);

void listReservation_2(ptors, ptost , uint32,int,uint16);

uint64 Cost(ptors,ptost,int,int);

uint32 listRandomReservation(ptors,uint32);

void listReservationNumbers(ptors, uint32);

uint16 ResDays(ptors, int);












#endif