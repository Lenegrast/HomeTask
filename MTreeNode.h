#pragma once
#include <vector>
using namespace std;

class MTreeNode
{
	
private:
	MTreeNode* m_parent;
	int m_i, m_j;
	int m_distance;
	vector<MTreeNode*> m_children;
	MTreeNode(MTreeNode* parent);
	
public:	
	int i() const;
	int j() const;
	const MTreeNode* parent() const;
	const MTreeNode* child(int i);
	int distance() const;
	int childCount() const;
	bool addChild(int i, int j);
	MTreeNode* hasChild(int i, int j);
	static MTreeNode* beginTree(int i, int j);
};