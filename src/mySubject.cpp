#include "../includes/ObserverPattern.h"
#include <cstddef>

using namespace ObserverPattern;

mySubject::mySubject(){
	this->m_vpoObserver.clear();
}	// End of constructor

mySubject::~mySubject(){
	this->m_vpoObserver.clear();
}	// End of deconstructor

void mySubject::registerObserver(myObserverInterface *poObserver){
	if(NULL == poObserver)
		return;
	
	bool isExist = false;
	for(size_t i = 0; i < this->m_vpoObserver.size(); i++){
		if(this->m_vpoObserver[i] == poObserver){
			isExist = true;
			break;
		}	// End of if-condition
	}	// End of for-loop

	if(false == isExist){
		this->m_vpoObserver.push_back(poObserver);
	}	// End of if-condition
}	// End of mySubject::registerObserver

void mySubject::removeObserver(myObserverInterface *poObserver){
	if(NULL == poObserver)
		return;

	size_t iSizeOfObserverList = this->m_vpoObserver.size();

	if(iSizeOfObserverList <= 0)
		return;
	
	for(size_t i = 0; i < iSizeOfObserverList; i++){
		if(poObserver == this->m_vpoObserver[i]){
			myObserverInterface *poTmpObserver = this->m_vpoObserver[i];
			this->m_vpoObserver[i] = this->m_vpoObserver.back();
			this->m_vpoObserver.back() = poTmpObserver;
			break;
		}	// End of if-condition
	}	// End of for-loop

	this->m_vpoObserver.resize(iSizeOfObserverList - 1);
}	// End of mySubject::removeObserver

void mySubject::notifyData(const string sKey, void *pData){
	if(NULL == pData)
		return;

	size_t iSizeOfObserverList = this->m_vpoObserver.size();
	if(iSizeOfObserverList <= 0)
		return;

	for(size_t i = 0; i < iSizeOfObserverList; i++){
		this->m_vpoObserver[i]->updateData(sKey, pData);	
	}	// End of for-loop
}	// End of mySubject::notifyData
