#include <vector>
#include <string>
using namespace std;

namespace ObserverPattern{
	// Description:
	// This abstract class is to receive data from the subject. If you want 
	// to use this class for observer pattern, you must define a new class 
	// to extend this class, and then implement the abstract member
	// method `updateData()`.
	class myObserverInterface{
		// public methods
		public:
			// Description: Update info
			// @param sKey: The keyword of the data
			// @param pData: The data is sent to observer
			virtual void updateData(const string sKey, void *pData) = 0;
	};	// End of class myObserverInterface

	// Description:
	// This abstract class is to send data to all observers. If you want
	// use this class, you must define a new class to extand this class, 
	// and then implement the abstract method `notifyData()`.
	class mySubjectInterface{
		// protected fields
		protected:
			// The list is to store all observer.
			vector<myObserverInterface*> m_vpoObserver;

		public:
			mySubjectInterface();
			~mySubjectInterface();

			// Description: Register observer into the list
			// @param poObserver: The object pointer of the class myObserverInterface
			void registerObserver(myObserverInterface *poObserver);

			// Description: Remove the observer from the list
			// @param poObserver: The object pointer of the class myObserverInterface
			void removeObserver(myObserverInterface *poObserver);

			// Description: Notify the data to observers
			// @param sKey: The keyword of the data
			// @param pData: The data will notify to observer.
			virtual void notifyData(const string sKey, void *pData) = 0;
	};	// End of class mySubjectInterface
}	// End of namespace ObserverPattern

