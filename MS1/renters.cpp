#include "renter.hpp"

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



void addRenters(ptostr ptr, int toBeAdded, ptoui val)
{
	for (int i = *val; i < *val + toBeAdded; i++)
	{
		cout << "Enter the Renter's name: ";
		
		getline(cin, ptr->myRenters[i].renterName);
		getline(cin, ptr->myRenters[i].renterName);
		
		cout << "Enter the Renter's Phone Number: ";
		cin >> ptr->myRenters[i].renterNumber;
		cout << "Enter the Renter's E-Mail: ";
		
		getline(cin, ptr->myRenters[i].renterMail);
		getline(cin, ptr->myRenters[i].renterMail);
		
		cout << "Enter the Renter's Age: ";
		cin >> ptr->myRenters[i].renterAge;
		
		cout << "Enter the Renter's National ID: ";
		cin >> ptr->myRenters[i].nationalID;
		
		cout << "Enter the Renter's Address: ";
		getline(cin, ptr->myRenters[i].renterAddress);
		getline(cin, ptr->myRenters[i].renterAddress);
		
		cout << "Enter the Number of Reservations made by him: ";
		cin >> ptr->myRenters[i].NumOfReservations;
		cout << "Enter the car reserved by him: ";
		getline(cin, ptr->myRenters[i].cartype);
		getline(cin, ptr->myRenters[i].cartype);

		ptr->rentersTotal ++; // incrementing the number of total renters
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
We loop till the index and printing out the renters info
*/


void listRenters(ptostr ptr, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "-";
		cout << " The Renter's name: " << ptr->myRenters[i].renterName << endl;
		cout << " The Renter's Phone Number: " << ptr->myRenters[i].renterNumber << endl;
		cout << " The Renter's E-mail: " << ptr->myRenters[i].renterMail << endl;
		cout << " The Renter's age: " << ptr->myRenters[i].renterAge << " years old " << endl;
		cout << " The Renter's National ID: " << ptr->myRenters[i].nationalID << endl;
		cout << " The Renter's Address: " << ptr->myRenters[i].renterAddress << endl;
		cout << endl << endl;
	
	}

}


/* Function Parameters:
1- Pointer to Structure to reduce Stack consumption, in other words to not double the structure in the memory
and to save the changes in the structure sent (Pass by reference)
* 2- Number of cars to be listed

Return Type:

void

Function Explaination:
We loop till the index and printing out the reservation info
*/

void listReservations(ptostr ptr, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "-";
		cout << "The car reserved is: " << ptr->myRenters[i].cartype << endl;
		cout << "The number of times this car reserved is: " << ptr->myRenters[i].NumOfReservations << endl;
		cout << endl << endl;
	}
}

