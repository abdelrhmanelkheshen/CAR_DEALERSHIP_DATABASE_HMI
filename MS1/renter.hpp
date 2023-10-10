#ifndef RENTER
#define RENTER

#include<iostream>
#include<string>
#include "std_types.hpp"

using namespace std;


#define MOBILE_PHONE_SIZE 12
#define NATIONAL_ID_SIZE 15
#define RENTER_SIZE 100






typedef struct renter
{
	string renterName; // Renter Name
	uint8 renterNumber[MOBILE_PHONE_SIZE];// Renter phone number
	string renterMail; // Renter E-mail
	uint16 renterAge; //Renter Age
	uint8 nationalID[NATIONAL_ID_SIZE];//Renter National ID
	string renterAddress;//Address of the renter
	uint16 NumOfReservations; // How many time the reservations has been done
	string cartype; // The type of car rented 
};


typedef struct renterDataBase
{
	renter myRenters[RENTER_SIZE]; // Information about the renters
	uint32 rentersTotal; // Total renters working with us 
};

typedef renterDataBase* ptostr;


/*******Function Prototypes*********/

void addRenters(ptostr, int, ptoui);


void listRenters(ptostr, int);


void listReservations(ptostr, int);


#endif