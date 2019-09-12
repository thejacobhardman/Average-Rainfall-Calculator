// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/12/19

#include <iostream>
using namespace std;

int main()
{
	string monthNum[3] = { "1st", "2nd", "3rd" };
	string months[3] = {};
	int rainContainer[3] = {};

   for (int i = 0; i < 3; i++) {
	   string month;
	   cout << "Please enter the name of the " << monthNum[i] << " month: ";
	   cin >> month;

	   int rainAmount;
	   cout << "Enter the rainfall for " << month << ": ";
	   cin >> rainAmount;

	   months[i] = month;
	   rainContainer[i] = rainAmount;
   }

   float averageRainfall = (rainContainer[0] + rainContainer[1] + rainContainer[2]) / 3.0;
   cout << "The average rainfall for " << months[0] << ", " << months[1] << ", and " << months[2] << " is " << averageRainfall << " inches.";
}
