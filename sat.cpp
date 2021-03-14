#include "sat.h"
#include "message.h"
#include "system.h"


void CSat::setup() {
	CMessage msg("cmd:deploy");
	CMessage msg1("mag:on;time:20;maxloops:50;alexander:blond");


	msg1.Fill();
	std::cout << msg1.Parameters["mag"] << msg1.Parameters["alexander"] << "\n";

	
	CMag* pmag = new CMag();
	CLight* plight = new CLight();
	CAlexander* palexander = new CAlexander();
	CCam* pcam = new CCam();
	CDeploy* pdeploy = new CDeploy();

	vsys.push_back(pdeploy);
	vsys.push_back(pmag);
	vsys.push_back(plight);
	vsys.push_back(pcam);
	vsys.push_back(palexander);

	pdeploy->SetmaxCounter(1000);
	pmag->SetmaxCounter(50000);
	plight->SetmaxCounter(10000);
	pcam->SetmaxCounter(2000);
	palexander->SetmaxCounter(6000);


}

void CSat::loop() {
	CSystem* psys;

	std::list<CSystem *>::iterator it;
	// Make iterate point to begining and incerement it one by one till it reaches the end of list.
	for (it = vsys.begin(); it != vsys.end(); it++)
	{
		// Access the object through iterator
		psys = *it;


		if (psys->isReady()) psys->loop();
		if (psys->isDone()) {
			delete psys;
			vsys.erase(it);
			return;


		}

	}
}
