#include "Maze.h"
#include "MCell.h"
using namespace std;

Maze::Maze(int n, int m)
{
	m_field = new MCell[n * m];
	m_n = n;
	m_m = m;
}

bool MCell::down() { return m_down; }

MCell::MCell()
{
	m_down = false;
	m_right = false;
}

bool MCell::right() { return m_right; }

const MCell& Maze::cell(int i, int j) const { return *m_field; }
