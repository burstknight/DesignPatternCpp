#include "../../../includes/DesignPatternCpp.h"

using namespace ObserverPattern;
struct Point{
	int iX;
	int iY;
};	// End of struct Point

class myNotifier: public mySubject{
	// public methods
	public:
		// Description: Run to generate datum to notify to observer.
		void run();
};	// End of class myNotifier
