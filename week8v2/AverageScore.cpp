#include "AverageScore.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// read array of strings 

void AverageScore::readScores()
{

	// 
	ifstream inputFile("data.txt");
	ofstream outputFile("reverse.txt");
	double sAverage;
	int j = 0;
	int i = 0;



	if (!inputFile)

	{

		cout << "Date file is not found!" << endl;
		exit(-1);
	}


	//read the scores for each student
	
	while (j < 5) // outer loop for rows/students--this is tracking the number of rows
		{


		i = 0;
	
		  while (i < 5)// inner lopp for test scores 

	{

		inputFile >> name[i];// go through each score, it will read 84, then i goes to 1, then the second one will be read, then i goes to 2(first row)
		i++;
	}
	// three scores for a student is in the scores array


	// outputFile << "student #" << j + 1 << " Average is: " << sAverage << endl;

	 j++;

	}

	for (int j = 4; j >= 0; j--)

	{

		outputFile << name[j] << endl;

	}

	inputFile.close();
	outputFile.close();




}

void AverageScore::readNames()
{

	// 
	ifstream inputFile("data.txt");
	ofstream outputFile("reverse.txt");
	
	for ( int j = 4; j > 0; j--)

	{






	}








}

