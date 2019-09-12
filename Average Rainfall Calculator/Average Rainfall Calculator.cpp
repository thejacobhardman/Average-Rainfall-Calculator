// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/12/19

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	string monthNum[3] = { "1st", "2nd", "3rd" };
	string months[3] = {};
	double rainContainer[3] = {};

   for (int i = 0; i < 3; i++) {
	   string month;
	   cout << "Please enter the name of the " << monthNum[i] << " month: ";
	   cin >> month;

	   double rainAmount;
	   cout << "Enter the rainfall for " << month << ": ";
	   cin >> rainAmount;

	   months[i] = month;
	   rainContainer[i] = rainAmount;
   }

   double averageRainfall = (rainContainer[0] + rainContainer[1] + rainContainer[2]) / 3.00;
   cout << "\nThe average rainfall for " << months[0] << ", " << months[1] << ", and " << months[2] << " is " << averageRainfall << " inches.\n";
}
