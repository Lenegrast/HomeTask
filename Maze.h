#pragma once
#pragma once
#include <cstdlib>
#include <iostream>


class MCell;

class Maze
{
private:
	MCell* m_field;
	int m_n;
	int m_m;
public:
	Maze(int n, int m);
	~Maze();

	const MCell& cell(int i, int j) const;
	bool hasConnection(int i1, int j1, int i2, int j2);
	void makeConnection(int i1, int j1, int i2, int j2);
	void removeConnection(int i1, int j1, int i2, int j2);
	bool cellMaze(int i1, int j1);
	void printMaze();
};
