
#ifndef _ROBOT_H
#define _ROBOT_H

#include "railroad.h"

typedef struct block
{
	int location;
	bool flag;
}Block;

class Robot
{
	private:
		char *name;
		int location;
		bool flag;

	public:

		Robot(char *name);

		void moveLeft();
		void moveRight();

		bool checkStatus(Railroad &rr);
};

#endif