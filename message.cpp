#include "message.h"

void CMessage::Fill() {

	if(str.size() == 0) return;
	if (str[str.size() - 1] != ';')str += ';';
	std::string  str1;

	std::vector<std::string> components;
	char c;
	char tok1 = ';';
	char tok2 = ':';
	int stop = 0, start = 0;

	for (int i = 0; i < str.size(); i++) {
		c = str[i];
		if (c == tok1) {
			stop = i;
			components.push_back(str.substr(start, stop - start));

			start = i + 1;
		}

	}



	for (int x = 0; x < components.size(); x++) {
		str1 = components[x];
		for (int i = 0; i < str1.size(); i++) {
			c = str1[i];

			if (c == tok2) {
				stop = i;
				Parameters[str1.substr(0, i)] = str1.substr(i + 1, 100);
			}

		}
	}

}
