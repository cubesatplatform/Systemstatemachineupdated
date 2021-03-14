#include "system.h"


long CSystem::gettime() {
	return lcounter;

}

bool CSystem::isReady() {

	lcounter++;
	if (gettime() > lastTime + interval) {
		lastTime = gettime();
		return true;


	}
	return false;
}


bool CSystem::isDone() {

	if (lcounter>maxCounter)
		return true;
	return false;
}
