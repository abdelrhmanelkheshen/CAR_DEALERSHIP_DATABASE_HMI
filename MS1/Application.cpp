#include "report.hpp"

using namespace std;

#define PASSWORD_1 7732

#define PASSWORD_2 2653

#define PASSWORD_3 1447

short run = 1; // Imaginary variable to keep me within the loop till I want to exit the program
short run2 = 1;
short acceptance = -1;// To make sure that the user is working in the Dealership
short option = -1; //  This variable is to operate or to quit the project
short user = -1; // This variable is to choose between the owner or the client
short program = -1; // This variable is to choose between the owner or the client
unsigned short fn = 10; // This variable is to pick between the Functions
short number; // This variable is to know the number of cars to add or to remove
short renterNumber; // This variable is to know the number of renters to add or to remove
short reservationNumber; // This variable is to know the number of re to add or to remove
unsigned short choice = -1;//This variable is to know which option in the continue phase
unsigned short choice_2 = -1;//This variable is to know which option in the continue phase after renter
uint8 full;
unsigned short client_fn = 10;
unsigned short report_choice = -1;


int main(void)
{

	int P1; // Password Variable
	
	/**** Car Data Base ****/
	dataBase dataStructure;
	dataStructure.carsTotal = 0;
	dataStructure.totalRent = 0;
	/*********************************/
	
	/***** Renter Data Base ********/
	renterDataBase renterDataStructure;
	renterDataStructure.rentersTotal = 0;
	/*************************************/

	/***** Reservation Data Base ********/
	reservationDataBase reservationsDataStructure;
	reservationsDataStructure.reservationsTotalCost = 0;
	reservationsDataStructure.totalReservations = 0;
	/*************************************/



	uint32 index; // Variable to know the number of vaiables in the array of structures
	cout << "Enter the number of cars: ";
	cin >> index;
     

	/*For loop to fill the primary car data base that already exists within the program*/

	for (int j = 0; j < index; j++)
	{
		cout << "Enter the Car's name: ";
		cin >> dataStructure.myCars[j].carName;
		cout << "Enter the Car's model: ";
		cin >> dataStructure.myCars[j].carModel;
		cout << "Enter the model's year: ";
		cin >> dataStructure.myCars[j].carYear;
		cout << "Enter the Engine's Specs in CC: ";
		cin  >> dataStructure.myCars[j].engine;
		cin >> dataStructure.myCars[j].engine;
		cout << "Enter the Engine's Number of Cylinders: ";
		cin >> dataStructure.myCars[j].cylinders;
		cout<< "Enter the Engine's Specs in HP: ";
		cin>> dataStructure.myCars[j].horsePower;
		cout << "Enter the Number of cars: ";
		cin >> dataStructure.myCars[j].carNum;
		dataStructure.myCars[j].carsAvailable = dataStructure.myCars[j].carNum;
		cout << "Enter the Rental cost for the Specified car per day: ";
		cin >> dataStructure.myCars[j].rentalCost;

		cout << "Enter the car's feedback: ";
		getline(cin, dataStructure.myCars[j].feedBack);
		getline(cin, dataStructure.myCars[j].feedBack);

		dataStructure.carsTotal += dataStructure.myCars[j].carNum;
		dataStructure.totalRent = (dataStructure.totalRent) + ((dataStructure.myCars[j].rentalCost) * (dataStructure.myCars[j].carNum));
		cout << endl << endl;
	}


	uint32 renter_index;
	cout << "Enter the number of renters: ";
	cin >> renter_index;

	uint32 reservations_index = 0;
	
	/*For loop to fill the primary renter data base that already exists within the program*/
	for (int i = 0; i < renter_index; i++)
	{
		cout << "Enter the Renter's name: ";
		getline(cin, renterDataStructure.myRenters[i].renterName);
		getline(cin, renterDataStructure.myRenters[i].renterName);
		
		cout << "Enter the Renter's Phone Number: ";
		cin >> renterDataStructure.myRenters[i].renterNumber;
		cout << "Enter the Renter's E-Mail: ";
		
		getline(cin, renterDataStructure.myRenters[i].renterMail);
		getline(cin, renterDataStructure.myRenters[i].renterMail);
		
		cout << "Enter the Renter's Age: ";
		cin >> renterDataStructure.myRenters[i].renterAge;
		
		cout << "Enter the Renter's National ID: ";
		cin >> renterDataStructure.myRenters[i].nationalID;

		cout << "Enter the Renter's Address: ";
		getline(cin, renterDataStructure.myRenters[i].renterAddress);
		getline(cin, renterDataStructure.myRenters[i].renterAddress);
		
		cout << "Enter the Number of Reservations made by him: ";
		cin >> renterDataStructure.myRenters[i].NumOfReservations;
		
		cout << "Enter the car reserved by him: ";
		
		getline(cin, renterDataStructure.myRenters[i].cartype);
		getline(cin, renterDataStructure.myRenters[i].cartype);
		cout << endl << endl;

	}

	/*********List of User Names***********/

	string user_1 = "Abdelrhman";
	string user_2 = "Mohamed";
	string user_3 = "Marawan";
	
	string u1; // imaginary string to store the username entered

	cout <<endl<<"Options Available: "<<endl<< "1- Run Program " << endl << "2- Quit Program " << endl << "Choose wanted option: ";
	cin >> option;


	/*********The user chose to run the program ************/

	if(option == 1)
	{ 

		cout << endl << "1- OWNER " << endl << "2- CLIENT " << endl;
		cin >> user;


		/*Switch case to choose between the owner and the client*/
		switch (user)
		{
		case 1:
			program = 1; // Chose owner
			break; 
		case 2:
			program = 2; // chose client
			break;
		}

		if (program == 1)
		{
			cout << "Enter your user name: ";
			cin >> u1;

			/****Comparison between username entered and with the usernames already stored ***/
			if ((u1 == user_1))
			{
				cout << "Enter your password: ";
				cin >> P1;
				if (P1 == PASSWORD_1)
				{
					acceptance = 1;
				}
				while (P1 != PASSWORD_1)
				{
					cout << u1 << " Enter your password: ";
					cin >> P1;
				}
				acceptance = 1;
				cout << "Welcome " << user_1 << endl;
			}
			else if (u1 == user_2)
			{
				cout << "Enter your password: ";
				cin >> P1;
				if (P1 == PASSWORD_2)
				{
					acceptance = 1;
				}
				while (P1 != PASSWORD_2)
				{
					cout << u1 << " Enter your password: ";
					cin >> P1;
				}
				acceptance = 1;
				cout << "Welcome " << user_2 << endl;

			}
			else if (u1 == user_3)
			{
				cout << "Enter your password: ";
				cin >> P1;
				if (P1 == PASSWORD_3)
				{
					acceptance = 1;
				}
				while (P1 != PASSWORD_3)
				{
					cout << u1 << " Enter your password: ";
					cin >> P1;
				}
				acceptance = 1;
				cout << "Welcome " << user_3 << endl;
			}
			/*Entered wrong user name*/
			else
			{
				cout << "Not Working here !!!!!!!!!!" << endl;
				cout << "Enter your username again: ";
				cin >> u1;
				while ((u1 != user_1) && (u1 != user_2) && (u1 != user_3))
				{
					cout << "Enter your username again: ";
					cin >> u1;
				}
				cout << u1 << " Enter your password: ";
				cin >> P1;
				while ((P1 != PASSWORD_1) && (P1 != PASSWORD_2) && (P1 != PASSWORD_3))
				{
					cout << u1 << " Enter your password: ";
					cin >> P1;
				}
				acceptance = 1;
				cout << "Welcome " << u1 << endl;
			}

			/***True Username and true password***/
			if (acceptance == 1)
			{ 
				/*******while loop to remain within the program until the user chooses to quit the program*******/
				while (run)
				{
					if (index > 100)
					{
						cout << endl<<"There is no more space for any extra cars " << endl;
						full = listAfterFull(&fn);
					}
					if (!full)
					{
						listProgramOptions(&fn);
					}
						
						switch (fn)
					{
					case 1:
						cout << "Enter the number of cars you want to add: ";
						cin >> number;
						addCars(&dataStructure, number, &index);
						
						break;
					case 2:
						list_Names(&dataStructure, index);
						cout << "Enter the number of cars you want to remove: ";
						cin >> number;
						removeCars(&dataStructure, number, &index);
						list_Names(&dataStructure, index);
						
						break;
					case 3:
						cout << endl << "Options Available: " << endl;
						cout << "1- List Cars' names only " << endl << "2- List all DATA_BASE " << endl;
						short op;
						cin >> op;
						switch (op)
						{
						case 1:
							list_Names(&dataStructure, index);
							break;

						case 2:
							list_Structure(&dataStructure, index);
							listProgramOptions(&fn);
							break;
						}
						break;
					case 4:
						continueOption(&choice);
						switch (choice)
						{
						case 1:
							cout << "Enter the number of renters you want to add: ";
							cin >> renterNumber;
							addRenters(&renterDataStructure, renterNumber, &renter_index);
							break;
						case 2:
							listRenters(&renterDataStructure, renter_index);
							break;
						case 5:
							listReservations(&renterDataStructure, renter_index);
							break;
						case 6:
							if (full)
							{
								listAfterFull(&fn);
							}
							else
							{
								listProgramOptions(&fn);
							}

							break;
						}
					case 5:
						listReservationOptions(&choice_2);
						switch (choice_2)
						{
						case 1:
							cout << "Enter the number of reservations you want to make: ";
							cin >> reservationNumber;
							addreservation(&reservationsDataStructure,&dataStructure, reservationNumber, &reservations_index,index);
							break;
						case 2:
							cout << endl;
							listAllReservation(&reservationsDataStructure, &dataStructure, reservations_index,index);
							break;
						case 5:
							cout << endl;

							listReservationNumbers(&reservationsDataStructure, reservations_index);
							uint16 reservation_number;
							cout << "Choose the Reservation wanted to be shown: " << endl;
							cin >> reservation_number;
							listReservation_2(&reservationsDataStructure, &dataStructure,index, reservations_index, reservation_number);
							break;
						case 6:
							uint32 random;
							random = listRandomReservation(&reservationsDataStructure, reservations_index);
							cout << "The Reservation randomed is: " << endl;
							listReservation_2(&reservationsDataStructure, &dataStructure, index, reservations_index, random);
							break;
						case 7:
							continueOption(&choice);
							break;
						}
						
						break;
					case 7:
						listReportOptions(&report_choice);

						switch (report_choice)
						{
						case 1:
							uint16 d, m, y;
							cout << "Enter the day to look for :";
							cin >> d;
							cout << "Enter the month to look for :";
							cin >> m;
							cout << "Enter the year to look for :";
							cin >> y;
							totalNumberOfRentedCars(&reservationsDataStructure, reservations_index, d, m, y);
							break;
						case 2:
							favRentedCar(&dataStructure, index);
							break;
						case 4:
							avgRentalTime(&reservationsDataStructure, reservations_index);
							break;
						case 5:
							uint32 toBeSearch;
							toBeSearch = listRenterNames(&reservationsDataStructure, reservations_index);
							renterInfo(&reservationsDataStructure, reservations_index, toBeSearch);
							break;
						case 6:
							listProgramOptions(&fn);
							break;
						}
						break;
					case 8:
						run = 0;
						break;	
					}



					
				}

				}
		}
		else if (program == 2)
		{
			cout << endl << "1- Continue " << endl << "2- Exit " << endl;
			short z;
			cin >> z;
			if (z == 1)
			{
				while (run2)
				{
					ListClientOptions(&client_fn);
					switch (client_fn)
					{
					case 1:
						AvilableCars(&dataStructure, index);
						int u;
						cout << "Choose a car Number: ";
						cin >> u;
						listCarSpecs(&dataStructure, u);
						break;
					case 2:
						cout << "Enter the number of reservations you want to make: ";
						cin >> reservationNumber;
						makereservation(&reservationsDataStructure, &dataStructure, reservationNumber, &reservations_index, index);
						break;
					case 5:
						receipt(&reservationsDataStructure, reservations_index);
						break;
					case 6:
						listAllReservation(&reservationsDataStructure, &dataStructure, reservations_index, index);
						break;
					}
				}

			}
			else if (z == 2)
			{
				cout << "Thanks for visiting our Website " << endl << "We hope We'll see you once more " << endl;
				return 0;
			}
			
		}

	}
	else if (option == 2)
	{
		cout << "Shut Down";
		return 0;
	}
	cout << "Shut Down";
	return 0;
	
}