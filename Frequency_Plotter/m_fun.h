#pragma once

#include "v_fun.h"
#include <map>
#include <string>

namespace m_fun {

	std::vector<int> map_in(std::map<std::string, int> &);
	void map_out(std::map<std::string, int> &);

}