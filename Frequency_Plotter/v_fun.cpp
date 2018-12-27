
#include "v_fun.h"

void v_fun::vector_in(std::vector<int> &v) {

	std::cout << "Enter a non-negative integer: ";
	int n;
	std::cin >> n;

	if (n < 0)
		n *= -1;

	for (int i = 0; i < n; i++)
		v.push_back(1);

	return;
}


void v_fun::vector_out(std::vector<int> &v) {

	for (auto i = v.begin(); i != v.end(); ++i)
		std::cout << *i << '\n';

	return;
}

void v_fun::plot_freq(std::vector<int> &v) {

	for (auto i = v.begin(); i != v.end(); ++i) {
		for (int j = 0; j < *i; ++j) {
			std::cout << "* ";
		}

		std::cout << '\n';
	}

	return;
}
