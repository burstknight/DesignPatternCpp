#include "../includes/myNotifier.h"

class myTestObserver: public myObserverInterface{
	// public method
	public:
		myTestObserver();
		virtual ~myTestObserver();
		virtual void updateData(const string sKey, void *pData) override;		
};	// End of clas myTestObserver
