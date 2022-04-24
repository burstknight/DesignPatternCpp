#include "../includes/myTestObserver.h"
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>

myTestObserver::myTestObserver(){
		
}	// End of constructor

myTestObserver::~myTestObserver(){
		
}	// End of deconstructor

void myTestObserver::updateData(const string sKey, void *pData){
	if("Point" == sKey){
		struct Point *poPoint = (struct Point*)pData;
		printf("Point: (%3d, %3d)\n", poPoint->iX, poPoint->iY);
	}else if("Distance" == sKey){
		float *pfDistance = (float*)pData;
		printf("Distance: %f m\n", *pfDistance);
	}else if("Name" == sKey){
		printf("Username: %s\n", ((string*)pData)->c_str());
	}else if("Vector" == sKey){
		printf("Vector:\n");
		for(size_t i = 0; i < ((vector<int>*)pData)->size(); i++){
			printf("%3d ", ((vector<int>*)pData)->data()[i]);	
		}	// End of for-loop

		printf("\n");
	}	// End of if-conditon
}	// End of myTestObserver::updateData
