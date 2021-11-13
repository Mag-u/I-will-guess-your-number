#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int startingNumber = 0;
	int endingNumber = 0;
	int copy = 0;
	string stopProgram = "";
	bool correctNumber = false;

	cout << "Input the range from which you selected the number \n";
	cout << "The first number: ";
	cin >> startingNumber;
	cout << endl;
	cout << "The last number: ";
	cin >> endingNumber;
	cout << endl;
	                                                                             
	while (startingNumber == endingNumber)                                                    
	{                                                                                           
		cout << "The numbers are that same and becouse of it the game can't start" << endl;          
		cout << "Do you want to input numbers again? Y/N";                                       
		cin >> stopProgram;                                                                   
		if (stopProgram != "Y")                                                               
		{                                                                                      
			exit(0);                                                                            
		}
		else {
			cout << "The first number: ";
			cin >> startingNumber;
			cout << endl;
			cout << "The last number: ";
			cin >> endingNumber;
			cout << endl;
		}
	}
	if (startingNumber > endingNumber)
	{
		copy = endingNumber;
		endingNumber = startingNumber;
		startingNumber = copy;
	}

	number = endingNumber / 2;

	while (correctNumber == false)    // and in seven moves?
	{
		
		string correctNumber = "";
		string greaterNumber = "";

		cout << "Is " << number << " your number ? Y / N";
		cin >> correctNumber;
		if (correctNumber != "Y")
		{
			cout << endl <<"Is your number greater? Y/N";
			cin >> greaterNumber;
			if (greaterNumber != "Y")
			{
				endingNumber = number;
			}

		}
		else
		{
			correctNumber = true;
		}
	}
	cout << endl << "Your number was " << number;
}
