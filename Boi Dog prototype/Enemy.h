#pragma once
#include <string>
#include <vector>
#include <random>

using namespace std;

class Enemy
{
public:
	Enemy(double hp, string name, int power) {
		this->hitPoints = hp;
		this->objname = name;
		this->power = power;
	}
	Enemy();
	~Enemy();

protected:
	double hitPoints;
	string objname;
	int power;
};

