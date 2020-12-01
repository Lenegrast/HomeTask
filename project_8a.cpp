#include "Maze.h"

int main()
{
	Maze* lMaze = new Maze(5, 5);

    for (int i=0; i<5;i++)
    {
		lMaze->makeConnection(i-1, i , i, i);
        lMaze->makeConnection(i, i , i, i+1);
    }
	lMaze->printMaze();
}

