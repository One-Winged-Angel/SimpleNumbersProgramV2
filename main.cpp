#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;




int main()
{

	vector <int> numbers;
	char selection;

	do
	{
		//Display menu
		cout << "\nP - Print Numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display the mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - quit\n" << endl;
		cout << "Enter your selection: \n";
		cin >> selection;
		selection = toupper(selection);

		switch (selection)
		{
		case 'P':
			if (numbers.size() == 0)
			{
				cout << "The list is empty" << endl;;

			}

			else
			{
				for (int i = 0; i < numbers.size(); i++)
				{
					cout << numbers[i] << endl;
				}
			}
			break;
		case 'A':
			int num;
			cout << "What number would you like to add?\n";
			if (cin >> num)
			{
				numbers.push_back(num);
				cout << "\nYou have added " << num << " to the numbers." << endl;;
			}
			else
			{
				cout << "That is not an integer\n";
				cin.clear();
				cin.ignore(1000, '\n'); //get rid of bad input 
			}
			
			break;
		case 'M':
			if (numbers.size() == 0)
			{
				cout << "You must add a number first!" << endl;;
				
			}

			else
			{
				double sum{ 0 };
				double mean_of_numbers;
				for (int i = 0; i < numbers.size(); i++)
				{
					sum += numbers[i];
				}
				mean_of_numbers = sum / numbers.size();
				cout << "The mean of the numbers is " << mean_of_numbers << endl;
			}
			
			break;
		case 'S':
			if (numbers.size() == 0)
			{
				cout << "\nYou must add a number first! The list is empty!" << endl;;
				
			}

			else
			{
				int smallest_num = numbers[0];
				for (int i = 0; i < numbers.size(); i++)
				{
					if (numbers[i] < smallest_num)
					{
						smallest_num = numbers[i];
					}
				}
				cout << "\nThe smallest numbers in the list is " << smallest_num << endl;;
			}
			
			break;
		case 'L':
			if (numbers.size() == 0)
			{
				cout << "You must add a number first! The list is empty!";

			}

			else
			{
				int largest_num = numbers[0];
				for (int i = 0; i < numbers.size(); i++)
				{
					if (numbers[i] > largest_num)
					{
						largest_num = numbers[i];
					}
				}
				cout << "The smallest numbers in the list is " << largest_num;
			}

			break;

		
		default:
			cout << "You have not entered a valid selection!";
			break;
		}

	} while (selection !='q' && selection !='Q'); // only continues while 'q' is not pressed

	cout << endl;
	return 0;
}