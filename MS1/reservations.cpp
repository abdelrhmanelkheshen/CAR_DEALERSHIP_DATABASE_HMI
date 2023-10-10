#include "reservations.hpp"

#include<string>

#include <ctime>

#include <cstdlib>

using namespace std;





void addreservation(ptors ptr, ptost ptr1, int toBeAdded, ptoui val,uint32 car_num)
{
	for (int i = *val; i < *val + toBeAdded; i++)
	{
		cout << "Enter the Renter's name: ";

		getline(cin, ptr->myReservations[i].renterInfo.renterName);
		getline(cin, ptr->myReservations[i].renterInfo.renterName);

		cout << "Enter the Renter's Phone Number: ";
		cin >> ptr->myReservations[i].renterInfo.renterNumber;
		cout << "Enter the Renter's E-Mail: ";

		getline(cin, ptr->myReservations[i].renterInfo.renterMail);
		getline(cin, ptr->myReservations[i].renterInfo.renterMail);

		cout << "Enter the Renter's Age: ";
		cin >> ptr->myReservations[i].renterInfo.renterAge;

		cout << "Enter the Renter's National ID: ";
		cin >> ptr->myReservations[i].renterInfo.nationalID;

		cout << "Enter the Renter's Address: ";
		getline(cin, ptr->myReservations[i].renterInfo.renterAddress);
		getline(cin, ptr->myReservations[i].renterInfo.renterAddress);


		list_Names(ptr1, car_num);
		int g;
		

		cout << " Choose the car's number : ";
		cin >> g;

		for (int j = 0; j < car_num; j++)
		{
			if ((j + 1) == g)
			{
				ptr1->myCars[j].carsAvailable = ptr1->myCars[j].carsAvailable - 1;
			}
		}
		
		cout << " Enter the car's name : ";

		getline(cin, ptr->myReservations[i].renterInfo.cartype);
		getline(cin, ptr->myReservations[i].renterInfo.cartype);

		cout << "Enter the reservation's number : ";
		cin >> ptr->myReservations[i].reservationNum;

		cout << "Enter the reservation's start date in day : ";
		cin >> ptr->myReservations[i].reserveStartDay;
		
		cout << "Enter the reservation's start date in month : ";
		cin >> ptr->myReservations[i].reserveStartMonth;
		
		cout << "Enter the reservation's start date in year : ";
		cin >> ptr->myReservations[i].reserveStartYear;
		

		cout << "Enter the reservation's end date in day : ";
		cin >> ptr->myReservations[i].reserveEndDay;
		
		cout << "Enter the reservation's end date in month : ";
		cin >> ptr->myReservations[i].reserveEndMonth;
		

		cout << "Enter the reservation's end date in year : ";
		cin >> ptr->myReservations[i].reserveEndYear;
		


		ptr->myReservations[i].daysOfReservations = ResDays(ptr, i);

		ptr->totalReservations++; // incrementing the number of total renters
	}
	*val = *val + toBeAdded;
}

void listAllReservation(ptors ptr, ptost ptr1,unsigned int num,uint32 car_num)
{
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "-";
		cout << "The renter's name is: " << ptr->myReservations[i].renterInfo.renterName << endl;
		cout << "The car's name is: " << ptr->myReservations[i].renterInfo.cartype << endl;
		cout << "The reservation's number is: " << ptr->myReservations[i].reservationNum << endl;
		cout << "The reservation's start date is: " << ptr->myReservations[i].reserveStartDay << "-" << ptr->myReservations[i].reserveStartMonth << "-" << ptr->myReservations[i].reserveStartYear << endl;
		cout << "The reservation's end date is: " << ptr->myReservations[i].reserveEndDay << "-" << ptr->myReservations[i].reserveEndMonth << "-" << ptr->myReservations[i].reserveEndYear << endl;
		cout << "The reservation's number of days are: " << ptr->myReservations[i].daysOfReservations << endl;
		ptr->myReservations[i].reservationCost = Cost(ptr, ptr1, i, car_num);
		cout << " The reservation cost = " << ptr->myReservations[i].reservationCost << endl;
		cout << endl << endl;
	}
}



uint16 ResDays(ptors ptr,int x)
{
	uint16 result;
	result = (ptr->myReservations[x].reserveEndDay+(ptr->myReservations[x].reserveEndMonth *30 )+(ptr->myReservations[x].reserveEndYear *365))\
		- (ptr->myReservations[x].reserveStartDay + (ptr->myReservations[x].reserveStartMonth * 30) + (ptr->myReservations[x].reserveStartYear * 365));
	return result;
}


uint64 Cost(ptors ptr, ptost ptr1,int x,int h)
{
	uint64 result;
	list_Names(ptr1, h);
	cout << "Enter the car wanted: " << endl;
	int g;
	cin >> g;
	uint32 y = 0;
	
	for (int i = 0; i < h; i++)
	{
		if ((i+1) == g)
		{
			y = ptr1->myCars[i].rentalCost;
		}
	}
	

	result = ptr->myReservations[x].daysOfReservations * y;
		return result;
}

void listReservation_2(ptors ptr, ptost ptr1,uint32 car_nums,int num,uint16 resNum)
{
	for (int i = 0; i < num; i++)
	{
		if (ptr->myReservations[i].reservationNum == resNum)
		{
			cout << "The renter's name is: " << ptr->myReservations[i].renterInfo.renterName << endl;
			cout << "The car's name is: " << ptr->myReservations[i].renterInfo.cartype << endl;
			cout << "The reservation's number is: " << ptr->myReservations[i].reservationNum << endl;
			cout << "The reservation's start date is: " << ptr->myReservations[i].reserveStartDay << "-" << ptr->myReservations[i].reserveStartMonth << "-" << ptr->myReservations[i].reserveStartYear << endl;
			cout << "The reservation's end date is: " << ptr->myReservations[i].reserveEndDay << "-" << ptr->myReservations[i].reserveEndMonth << "-" << ptr->myReservations[i].reserveEndYear << endl;
			cout << "The reservation's number of days are: " << ptr->myReservations[i].daysOfReservations << endl;
			//ptr->myReservations[i].reservationCost = Cost(ptr, ptr1, i, car_nums);
			cout << " The reservation cost = " << ptr->myReservations[i].reservationCost << endl;
			cout << endl << endl;

			break;
		}
	}
}



void listReservationNumbers(ptors ptr, uint32 num)
{
	
	for (int i = 0; i < num; i++)
	{
		cout << "The Reservation numbers are: " << endl;
		cout << i + 1 << "-";
		cout << ptr->myReservations[i].reservationNum << endl;
	}
}


uint32 listRandomReservation(ptors ptr, uint32 x)
{
	
	srand(time(0));
	
	int randomed =1+( rand() %x);
	
	cout << "Randomed Reservation is: " << randomed << endl;
    
	return randomed;
}