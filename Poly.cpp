
#include <vector>
#include "system.h"
#include "message.h"
#include <iostream> 
#include "sat.h"

long CSystem::lcounter = 0;
int main()
{
	CSat sat;
	sat.setup();
	while (1) {

		sat.loop();
		if (sat.SCount() == 0)break; 
			

	}
}
