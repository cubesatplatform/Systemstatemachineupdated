#pragma once
#include <string>
#include <map>
#include <vector>



class CMessage {
	std::string str;
	std::string rssi;
public:
	std::map<std::string, std::string> Parameters;

	CMessage() {}
	CMessage(const char* s) { str = s; }
	void Fill();
};
