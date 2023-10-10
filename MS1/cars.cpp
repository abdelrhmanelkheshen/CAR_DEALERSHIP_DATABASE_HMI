#include"car.hpp"
#include<iostream>


using namespace std;


/* Function Parameters:
1- Pointer to Structure to reduce Stack consumption, in other words to not double the structure in the memory
and to save the changes in the structure sent (Pass by reference)
* 2- Number of cars to be added
* 3- Pointer to the variable storing the number of structures in the array, Pass by reference to update the index every time
calling this function

Return Type:

void

Function Explaination:
We loop till the index and receiving the structure info from the user
*/
void addCars(ptost ptr,int toBeAdded, ptoui val)
{
	for (int j = *val; j < *val + toBeAdded; j++)
	{
		cout << "Enter the Car's name: ";
		cin >> ptr->myCars[j].carName;
		cout << "Enter the Car's model: ";
		cin >> ptr->myCars[j].carModel;
		cout << "Enter the model's year: ";
		cin >> ptr->myCars[j].carYear;
		cout << "Enter the Engine's Specs in CC: ";
		cin >> ptr->myCars[j].engine;
		cin >> ptr->myCars[j].engine;
		cout << "Enter the Engine's Number of Cylinders: ";
		cin >> ptr->myCars[j].cylinders;
		cout << "Enter the Engine's Specs in HP: ";
		cin >> ptr->myCars[j].horsePower;
		cout << "Enter the Number of cars: ";
		cin >> ptr->myCars[j].carNum;
		ptr->myCars[j].carsAvailable = ptr->myCars[j].carNum;
		cout << "Enter the Rental cost for the Specified car per day: ";
		cin >> ptr->myCars[j].rentalCost;
		cout << "Enter the car's feedback: ";
		getline(cin, ptr->myCars[j].feedBack);
		getline(cin, ptr->myCars[j].feedBack);

		ptr->carsTotal += ptr->myCars[j].carNum; // incrementing the number of total cars of that model
		ptr->totalRent = (ptr->totalRent ) + ((ptr->myCars[j].rentalCost)*(ptr->myCars[j].carNum));
	}
	*val = *val + toBeAdded; // to update the index with the new value

}

/* Function Parameters:
1- Pointer to Structure to reduce Stack consumption, in other words to not double the structure in the memory
and to save the changes in the structure sent (Pass by reference)
* 2- Number of cars to be listed

Return Type:

void

Function Explaination:
We loop till the index and printing out the structure info
*/

void list_Structure(ptost ptr, int num)
{
	for (int j = 0; j < num ; j++)
	{
		cout << j + 1 << "-";
		cout << "The Car's name: " << ptr->myCars[j].carName<<endl;
		cout << "The Car's model: "<< ptr->myCars[j].carModel<<endl;
		cout << "The model's year: "<<ptr->myCars[j].carYear<<endl;
		cout << "The Engine's Specs in CC: "<< ptr->myCars[j].engine<<endl;
		cout << "The Engine's Number of Cylinders: "<< ptr->myCars[j].cylinders<<endl;
		cout << "The Engine's Specs in HP: "<< ptr->myCars[j].horsePower<<endl;
		cout << "The Number of cars: "<< ptr->myCars[j].carNum<<endl;
		cout << "The Number of available cars: " << ptr->myCars[j].carsAvailable <<endl;
		cout << "The Rental cost for the Specified car per day: "<< ptr->myCars[j].rentalCost<<endl;

		cout << "The FeedBack for the Specified car is: " << ptr->myCars[j].feedBack << endl;
		cout << endl;
	}
	cout << "The total number of cars = " << ptr->carsTotal<< endl;
	cout << "The total rental cost of cars = " << ptr->totalRent<< endl;
}

/* Function Parameters:
1- Pointer to Structure to reduce Stack consumption, in other words to not double the structure in the memory
and to save the changes in the structure sent (Pass by reference)
* 2- Number of cars to be listed

Return Type:

void

Function Explaination:
We loop till the index and printing out the Cars' names and models only
*/

void list_Names(ptost ptr, int num)
{
	
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "-" << ptr->myCars[i].carName << "  " <<ptr->myCars[i].carModel << endl;
	}		
}

/* Function Parameters:
1- Pointer to Structure to reduce Stack consumption, in other words to not double the structure in the memory
and to save the changes in the structure sent (Pass by reference)
* 2- Number of cars to be removed
* 3- Pointer to the variable storing the number of structures in the array, Pass by reference to update the index every time
calling this function

Return Type:

void

Function Explaination:
We loop till the index and removing the structure the user chooses.
*/


void removeCars(ptost ptr,  int toBeRemoved, ptoui num)
{
	
	for ( int i = 0; i < *num; i++)
	{
		if (i == (toBeRemoved-1) )
		{
			
			for (int j = i; j < (*num -1); j++)
			{
				
				ptr->myCars[j] = ptr->myCars[j + 1];
				

				
				if (j == (*num) - 2)
				{
					(*num)--;
				}
				

			}
			
		}
	}
}

/* Function Parameters:
1- Pointer to short to use this variable in the switch operation in the main , 
Pass by reference to change the original variable


Return Type:

void

Function Explaination:
We loop till the index and printing out the options available in the program
*/

void listProgramOptions(ptous ptr)
{
	cout << endl << "Operations Available: " << endl;
	cout << "1- Add Cars " << endl << "2- Remove Cars " << endl;
	cout << "3- List Cars " << endl;
	cout << "4- Continue to renter's data structure " << endl;
	cout << "5- Continue to reservation's data structure " << endl;
	cout << "6- Continue to Generate Reports: " << endl;
	cout << "7- Exit " << endl;
	  
	unsigned short x;

	cin >> x;

	switch (x)
	{
	case 1:
		*ptr = 1;//call add
			break;
	case 2:
		*ptr = 2;//call remove
		break;
	case 3: 
		*ptr = 3;//call list
		break;
	case 4: 
		*ptr = 4; // call continue option
		break;
	case 5:
		*ptr = 5; // call continue option
		break;
	case 6:
		*ptr = 7; // call exit option
		break;
	case 7:
		*ptr = 8;
		break;
	}
}

/* Function Parameters:
1-  Pointer to short to use this variable in the switch operation in the main , 
Pass by reference to change the original variable


Return Type:

void

Function Explaination:
We loop till the index and printing out the options available in the program
*/

void continueOption(ptous ptr)
{
	cout << endl << "1- Add Renter " << endl << "2- List Renter's information " << endl;
	cout << "3- List Reservations " << endl << "4- Back to previous list " << endl;
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
	case3:
		*ptr = 5; // call reservation list
		break;
	case 4:
		*ptr = 6; // call previous list
		break;
	}
}


uint8 listAfterFull(ptous ptr)
{
	cout << endl << "Operations Available: " << endl;
	cout << "2- Remove Cars " << endl;
	cout << "3- List Cars " << endl;
	cout << "4- Continue to Renter's Data Structure " << endl;
	cout << "5- Exit " << endl;

	unsigned short x;

	cin >> x;

	switch (x)
	{
	case 2:
		*ptr = 2;//call remove
		break;
	case 3:
		*ptr = 3;//call list
		break;
	case 4:
		*ptr = 4; // call continue option
		break;
	case 5:
		*ptr = 5; // call exit option
		break;
	}
	return 1;
}


void listReservationOptions(ptous ptr)
{
	cout << endl << "1- Add Reservation " << endl << "2- List Reservations' information " << endl;
	cout << "3- List Specific Reservation " << endl;
	cout << "4- Generate random reservation number " << endl << "5- Back to previous list " << endl;
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
		*ptr = 6; // call random
		break;
	case 5:
		*ptr = 7;
		break;
	}

}