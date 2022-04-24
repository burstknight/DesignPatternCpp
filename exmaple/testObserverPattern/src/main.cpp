#include "../includes/myTestObserver.h"

int main(void){
	// Create Subject object to generate datum
	myNotifier *poNotifier = new myNotifier();
	
	// Create Observer object to receive datum 
	myTestObserver *poObserver = new myTestObserver();

	// Register observer to receive datum
	poNotifier->registerObserver((myObserverInterface*)&poObserver);

	// Call the method run to generate datum
	poNotifier->run();

	// Remove observer
	poNotifier->removeObserver((myObserverInterface*)&poObserver);

	delete poNotifier;
	delete poObserver;
	poNotifier = NULL;
	poObserver = NULL;

	return 0;
}	// End of main
