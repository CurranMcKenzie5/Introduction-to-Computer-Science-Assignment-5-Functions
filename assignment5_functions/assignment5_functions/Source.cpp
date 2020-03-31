
/*
Curran McKenzie
October 3rd 2016
Intro to Computer Programming
Assignment 5 Functions
*/

#include <iomanip> 
#include <iostream>
using namespace std; 

double RankineTemp(double fahren);  // function 1
double OtherTemp(double fahren, bool abs); // function 2



int main()

{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	

		double fahrenheit, temp; // double used for decimals

		char scale, again; // need to run again and for scale

		bool absolute; // true or false variable


		do {

			cout << "Please enter a tempature in degrees Fahrenheit ";

			cin >> fahrenheit; // asks for inital temp


			cout << "Enter a letter for which the scale you want: C, K, or R ";

			cin >> scale; // asks for letter 


			if (scale == 'R' || scale == 'r') // if user inputs r then does this
			{

				temp = RankineTemp(fahrenheit); // brings back rankine

			}

			else

				if (scale == 'k' || scale == 'K') // if what user inputs is k then finds kelvin
				{
					absolute = true; // tells that we need absolute using boolean
					temp = OtherTemp(fahrenheit, absolute); // brings back kelvin
				}

				else

					if (scale == 'c' || scale == 'C') // if what user imputs is c then does this
					{
						absolute = false; // need this to say c does not need absolute
						temp = OtherTemp(fahrenheit, absolute); // brings back temp of celcius
					}


			cout << fahrenheit << "  F is equivalent to " << temp << " degrees " << scale << endl << endl; // prints out what you are trying to find

			cout << "Would you like to try this again? (Enter Y for yes or N for no)" ; //asks you if you want to do it again and repeats it

			cin >> again;
			
		} while (again == 'y' || again == 'Y'); //asks if wants to do again and input y for yes 

		system("pause");
		return 0;

	}


		double RankineTemp(double fahren) // first function header

		{

			double tem;
			tem = fahren + 459.67; //calculates the number for degrees rankine
			return tem;

		}

		double OtherTemp(double fahren, bool abs) // second function header

		{

			double tem;
			if (abs == true) // sees if absolute is true
				tem = ((fahren - 32.0) * 0.555555) + 273.15; //if true then finds degrees of kelivn

			else

				tem = (fahren - 32.0) * 0.55555555;    //find celcius degrees and returns tem
			return tem;
		}

	