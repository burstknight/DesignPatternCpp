#include "../includes/myNotifier.h"
#include <vector>

void myNotifier::run(){
	// Send a struct to observer
	struct Point oPoint;
	oPoint.iX = 10;
	oPoint.iY = 50;
	this->notifyData("Point", (void*)&oPoint);

	// Notify observer with a float data
	float fDistance = 200.0;
	this->notifyData("Distance", (void*)&fDistance);

	// Notify observer with string
	string sName = "Joe";
	this->notifyData("Name", (void*)&sName);

	// Notify observer with vector
	vector<int> viVector;
	for(int i = 0; i < 5; i++){
		viVector.push_back(i*10);
	}	// End of for-loop
	this->notifyData("Vector", (void*)&viVector);
}	// End of myNotifier::run
