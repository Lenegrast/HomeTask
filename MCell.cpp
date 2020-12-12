#include "Maze.h"
#include "MCell.h"
using namespace std;

bool MCell::down() { return m_down; }

MCell::MCell()
{
	m_down = false;
	m_right = false;
}

bool MCell::right() { return m_right; }


