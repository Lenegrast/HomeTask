#pragma once
#include <cstdlib>
#include <iostream>

class MCell
{
	friend class Maze;
private:
	bool maze_down;
	bool maze_right;
	MCell();
public:
	bool right();
	bool down();
};
