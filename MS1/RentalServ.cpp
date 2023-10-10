#include "RentalServ.hpp"
#include<iostream>

using namespace std;

void AvilableCars(ptost ptr, int car_num)
{
	cout << "Cars Available are: " << endl;
	for (int i = 0; i < car_num; i++)
	{
		if (ptr->myCars[i].carsAvailable == 0)
		{
			continue;
		}
		cout << i + 1 << "-" << ptr->myCars[i].carName << " " << ptr->myCars[i].carModel << " ---> " << ptr->myCars[i].carsAvailable << " cars" << endl;
		cout << endl << "The Car's FeedBack is " << ptr->myCars[i].feedBack << endl;
	}
}




void makereservation(ptors ptr, ptost ptr1, int toBeAdded, ptoui val, uint32 car_num)
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

		ptr->myReservations[i].reservationNum = 1 + (rand() % (i + 1));

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
	
		ptr->myReservations[i].reservationCost = Cost(ptr, ptr1, i, car_num);
	}
	*val = *val + toBeAdded;
}



void receipt(ptors ptr, uint32 reservation_index)

{
	

	cout << "**GEARS   DEALERSHIP**" << endl;
	cout << endl;
	cout << "***************************************";
	cout << endl;
	cout << "    Renting Receipt    " << endl;
	
	cout << "Reservation Number: " << ptr->myReservations[reservation_index - 1].reservationNum << endl;
	cout << "Client Name: " << ptr->myReservations[reservation_index - 1].renterInfo.renterName << endl;
	cout << "Client Choosen Car: " << ptr->myReservations[reservation_index - 1].renterInfo.cartype << endl;
	cout << "Receiving Date: " << ptr->myReservations[reservation_index - 1].reserveStartDay<<"-"<< ptr->myReservations[reservation_index - 1].reserveStartMonth<<"-"<< ptr->myReservations[reservation_index - 1].reserveStartYear << endl;
	cout << "Delivery Date: " << ptr->myReservations[reservation_index - 1].reserveEndDay << "-" << ptr->myReservations[reservation_index - 1].reserveEndMonth <<"-"<< ptr->myReservations[reservation_index - 1].reserveEndYear << endl;
	cout << "Number of Renting Days: " << ptr->myReservations[reservation_index - 1].daysOfReservations << endl;
	cout << "Total Cost: " << ptr->myReservations[reservation_index - 1].reservationCost << endl;
	cout << "***************************************" << endl;
	cout << "Location: New Cairo North 90, Besides WaterWay 2 " << endl;
	cout << "Hotline: 16555" << endl;
}


void ListClientOptions(ptous ptr)
{
	cout << endl << "1- List Available Cars " << endl << "2- Make Reservation " << endl;
	cout << "3- Print Reciept " << endl << "4- List Reservations " << endl;
	
	unsigned short x;
	cin >> x;
	switch (x)
	{
	case 1:
		*ptr = 1;//call add
		break;
	case 2:
		*ptr = 2;//call list
		break;
	case 3:
		*ptr = 5; // call specific reservation list
		break;
	case 4:
		*ptr = 6;
		break;
	}

}
void listCarSpecs(ptost ptr, int x)
{
	cout << "Car Specs are :" << endl;
	cout << "This Car's Engine is " << ptr->myCars[x - 1].engine << " CC " << endl;
	cout << "This Car's Engine has " << ptr->myCars[x - 1].cylinders << " Cylinders " << endl;
	cout << "This Car's Engine is " << ptr->myCars[x - 1].horsePower << " HP " << endl;
	cout << "This Car's rental cost per day equals " << ptr->myCars[x - 1].rentalCost << " EGP " << endl;
}