#include <vector>
#include <string>
using namespace std;

namespace ObserverPattern{
	// Description:
	// This abstract class is to receive data from the subject. If you want 
	// to use this class for observer pattern, you must define a new class 
	// to extend this class, and then implement the abstract member
	// method `updateData()`.
	class myAbstractObserver{
		// public methods
		public:
			// Description: Update info
			// @param sKey: The keyword of the data
			// @param pData: The data is sent to observer
			virtual void updateData(const string sKey, void *pData) = 0;
	};	// End of class myAbstractObserver

}	// End of namespace ObserverPattern

