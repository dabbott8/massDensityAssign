#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{
	ifstream inputMeas;
	inputMeas.open("input.dat");
	double dblDensity = 0;
	double dblMass = 0;
	double dblVolume = 0;

	inputMeas >> dblDensity >> dblMass;

	dblVolume = dblMass/dblDensity;

	


	inputMeas.close();


	ofstream outputVolume;
	outputVolume.open("output.txt");

	outputVolume << fixed << showpoint << setprecision(2) 
		<< "Volume:" << dblVolume << endl;



	outputVolume.close();

	return 0;
}