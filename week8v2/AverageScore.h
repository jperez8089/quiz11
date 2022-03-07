#pragma once
#include <string>
using namespace std;

class AverageScore {

private:

	string name[5];
	int scores[3]; //in private because we might use it in other places



public:

	void readScores(); //read the scores from data.txt into for all students into an array 
	double calcAverageScore(); 
	void readNames();
	//void writeAverage();// write the average score for each student into average.txt 





};