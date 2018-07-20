#pragma once
#include "Item.h"
#include <string>
#include <vector>
#include <random>
class area
{
public:
	area();
	~area();

	string getWest() {
		return westDescriptor;
	}

	string getNorth() {
		return northDescriptor;
	}

	string getEast() {
		return eastDescriptor;
	}

	string getSouth() {
		return southDescriptor;
	}
	
	virtual string lookDown() = 0;

	virtual string lookRight() = 0;

	virtual string lookLeft() = 0;

	virtual string lookUp() = 0;
	

protected:
	int totalOptions;
	int totalEnemies;
	int totalNPCs;
	int pathways;
	int roomid;

	vector<Item> items;

	bool isCritical;
	bool isSafeArea;
	bool hasShop;

	string westDescriptor;
	string northDescriptor;
	string eastDescriptor;
	string southDescriptor;
};

