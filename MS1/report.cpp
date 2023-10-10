#include "report.hpp"



void totalNumberOfRentedCars(ptors ptr, uint32 index, uint16 day, uint16 month, uint16 year)
{
	int cars_rented = 0;
	for (int i = 0; i < index; i++)
	{
		if ((ptr->myReservations[i].reserveStartDay == day) && (ptr->myReservations[i].reserveStartMonth == month) && (ptr->myReservations[i].reserveStartYear == year))
		{
			cars_rented++;
		}
	}
	cout << "Number of Cars rented = " << cars_rented << endl;
}



void listReportOptions(ptous ptr)
{
	cout << "Options: " << endl;
	cout << "1- Number of cars rented per day: " << endl << "2- Favorite Rented Car: " << endl;
	cout << "3- Average Rental time: " << endl << "4- Renter Summary per Client: " << endl;
	cout << "5- Previous Options: " << endl;

	unsigned short f;
	cin >> f;
	switch (f)
	{
	case 1:
		*ptr = 1;
		break;
	case 2:
		*ptr = 2;
		break;
	case 3:
		*ptr = 4;
		break;
	case 4:
		*ptr = 5;
		break;
	case 5:
		*ptr = 6;
		break;
	}
}


void favRentedCar(ptost ptr, uint32 num)
{
	uint32 min = ptr->myCars[0].carsAvailable;
	uint32 j = 0;
	for (uint32 i = 1; i < num; i++)
	{
		if (min > ptr->myCars[i].carsAvailable)
		{
			min = ptr->myCars[i].carsAvailable;
			j = i;
			
		}
	}
	
	cout << "The most favorable car is " << ptr->myCars[j].carName << " " << ptr->myCars[j].carModel << endl;
}


void avgRentalTime(ptors ptr, uint32 num)
{
	uint32 totalDays = 0;
	for (int i = 0; i < num; i++)
	{
		totalDays += ptr->myReservations[i].daysOfReservations;
	}
	cout << "The Average Rental time for all cars for Dealership  = " << totalDays / num << " days " << endl;
	cout << "The Average Rental time for all cars for Dealership  = " << (totalDays / num) * (24) << " hours " << endl;
}







void renterInfo(ptors ptr, uint32 num,uint32 toBeSearched)
{
	for (uint32 i = 0; i < num; i++)
	{
		if (i + 1 == toBeSearched)
		{
			cout << "Renter's Name is: " << ptr->myReservations[i].renterInfo.renterName << endl;
			cout << "Renter's Number is: " << ptr->myReservations[i].renterInfo.renterNumber << endl;
			cout << "Renter's Mail is: " << ptr->myReservations[i].renterInfo.renterMail << endl;
			cout << "Renter's Age is: " << ptr->myReservations[i].renterInfo.renterAge << endl;
			cout << "Renter's Address is: " << ptr->myReservations[i].renterInfo.renterAddress << endl;
			cout << "Renter's National ID is: " << ptr->myReservations[i].renterInfo.nationalID << endl;
			cout << "Renter's Car Type is: " << ptr->myReservations[i].renterInfo.cartype << endl;
			cout << "Renter's Number of reservations is: " << ptr->myReservations[i].renterInfo.NumOfReservations << endl;
			cout << endl << endl;
		}
	}
}



uint32 listRenterNames(ptors ptr, uint32 num)
{
	uint32 r;
	
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "-" << ptr->myReservations[i].renterInfo.renterName << endl;
	}

	cout << "Pick a name: ";
	cin >> r;
	return r;
}