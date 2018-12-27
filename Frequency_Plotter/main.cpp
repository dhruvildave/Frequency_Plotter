
#include "m_fun.h"

int main(void) {

	std::vector<int> freq;
	std::map<std::string, int> m;

	freq = m_fun::map_in(m);
	v_fun::plot_freq(freq);

	if (!__linux) {
		system("PAUSE");
	}
	
	return 0;
}
