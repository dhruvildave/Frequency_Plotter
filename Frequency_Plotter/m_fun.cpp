
#include "m_fun.h"

std::vector<int> m_fun::map_in(std::map<std::string, int> &m) {

	for (std::string s; std::cin >> s;) {
		if (s == "break")
			break;
		++m[s];
	}

	std::vector<int> v; // Frequency std::vector
	for (const auto &p : m)
		v.push_back(p.second);

	return v;
}

void m_fun::map_out(std::map<std::string, int> &m) {

	for (const auto &p : m)
		std::cout << p.first << " " << p.second << "\n";

	return;
}