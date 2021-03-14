#pragma once
#include <list>
#include "system.h"




class CSat {

	std::list<CSystem*> vsys;
public:
	CSat() {};
	~CSat() {};
	
	void setup(); 
	void loop();
	int SCount() {

		return vsys.size();

	}







};
