#pragma once
using namespace std;
class Item
{
public:
	Item();
	~Item();

protected:
	bool important;
	double price;
	double weight;
	int slots;
};

