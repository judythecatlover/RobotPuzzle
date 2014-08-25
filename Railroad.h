#ifndef _RAILROAD_H
#define _RAILROAD_H

#include <vector>
#include "Robot.h"

using namespace std;

class Railroad
{
	private:
		int length;
		int index;
		Block bloc;
		std::vector<Block> v;

	public:
		Railroad(int len);
		int setLocation(Robot &rob);
};



#endif