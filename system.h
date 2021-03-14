#pragma once

#include "myio.h"

class CSystem {
	static long lcounter;

	long maxCounter=10000;

	long lastTime;
	long currentTime;
protected:
	long interval;
public:
	long gettime();


	CSystem() { lcounter = 0; lastTime = 0; currentTime = 0;  interval = 10; sendOut("Start System"); }
	 virtual ~CSystem() { sendOut("End System"); }
	 virtual void name() { sendOut("Name System"); }
	 virtual void loop() { sendOut("Loop System"); }
	 void setup() { sendOut("Setup System"); }
	 bool isReady();
	 bool isDone();
	 void SetmaxCounter(long val){

		 maxCounter = val;
	 }

};

class CAlexander :public CSystem {
public: 


	CAlexander() { interval = 50; sendOut("Start Alexander"); };
	~CAlexander() { sendOut("End Alexander"); };
	void name() { sendOut("Name Alexander"); }
	void loop() { sendOut("Loop Alexander"); }
	void setup() { sendOut("Setup Alexander"); }

};


class CMag :public CSystem {
public:
	CMag() { interval = 5; sendOut("Start Mag"); };
	~CMag() { sendOut("End Mag"); };

	void name() { sendOut("Name Mag"); }
	void loop() { sendOut("Loop Mag"); }
	void setup() { sendOut("Setup Mag"); }
};


class CLight :public CSystem {
public:
	CLight() { interval = 15; sendOut("Start Light"); };
	~CLight() { sendOut("End Light"); };

	void name() { sendOut("Name Light"); }
	void loop() { sendOut("Loop Light"); }
	void setup() { sendOut("Setup Light"); }
};


class CCam :public CSystem {
public:
	CCam() { interval = 1; sendOut("Start Cam"); };
	~CCam() { sendOut("End Cam"); };

	void name() { sendOut("Name Cam"); }
	void loop() { sendOut("Loop Cam"); }
	void setup() { sendOut("Setup Cam"); }
};


class CDeploy :public CSystem {
public:
	CDeploy() { sendOut("Start Deploy"); };
	~CDeploy() { sendOut("End Deploy"); };

	void name() { sendOut("Name Deploy"); }
	void loop() { sendOut("Loop Deploy"); }
	void setup() { sendOut("Setup Deploy"); }

};
