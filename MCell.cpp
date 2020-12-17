#include "Maze.h"
#include "MCell.h"
using namespace std;

bool MCell::down() { return maze_down; }
bool MCell::right() { return maze_right; }

MCell::MCell()
{
	maze_down = false;
	maze_right = false;
}



