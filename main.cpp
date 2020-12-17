#pragma once
#include "Maze.h"
#include "MTreeNode.h"

int main()
{
	Maze* lMaze = new Maze(5, 5);

	for (int i = 0; i < 5; i++)
	{
		lMaze->makeConnection(i, i, i - 1, i);
		
		for (int j = 1; j < 5; j++)
		{
			lMaze->makeConnection(i + j - 1, i, i + j, i);
			lMaze->makeConnection(i, i + j - 1, i, i + j);
		}
	}

	lMaze->printMaze();

	MTreeNode* tree = MTreeNode::beginTree(0, 0);
	MTreeNode* currentNode = tree;

	int* maze_weights = new int[25];

	for (int i = 0; i < 25; i++)
		maze_weights[i] = 0;

	while (currentNode != nullptr)
	{
		int i = currentNode->i();
		int j = currentNode->j();
		
		maze_weights[i * 5 + j] = currentNode->distance();

		MTreeNode* doi_Node = currentNode->hasChild(i + 1, j);
		
		if (doi_Node == nullptr && lMaze->hasConnection(i, j, i + 1, j))
		{
			currentNode->addChild(i + 1, j);
			currentNode = currentNode->hasChild(i + 1, j);
			continue;
		}

		MTreeNode* right_Node = currentNode->hasChild(i, j + 1);
		
		if (right_Node == nullptr && lMaze->hasConnection(i, j, i, j + 1))
		{
			currentNode->addChild(i, j + 1);
			currentNode = currentNode->hasChild(i, j + 1);
			continue;
		}

		currentNode = (MTreeNode*)currentNode->parent();
	}

	cout << endl << "Maze Weights: " << endl;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << maze_weights[i * 5 + j] << " ";

		cout << endl;
	}
}