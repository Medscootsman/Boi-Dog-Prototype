#pragma once
#include "Item.h"
class key : public Item
{
public:
	key();
	~key();

	bool openDoor(int givendoor_id) {
		if (doorid == givendoor_id) {
			return true;
		}
		else {
			return false;
		}
	}
protected:
	bool used = false;
	int id;
	int doorid;
	bool oneUse;
	bool unique;
};

