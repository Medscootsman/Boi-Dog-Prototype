#pragma once
#include "Item.h"
#include "area.h"
#include <string>
#include <vector>
#include <random>
using namespace std;
const int MAXINV = 20; //maximum inventory space
const int MAXHP = 100; //maximum health

class Player
{
public:
	Player();
	~Player();
	void setHealth(double newHealth) {
		hitPoints = newHealth;
	}
	double getHealth() {
		return hitPoints;
	}

	string toString() {
		return "Hey, Boi";
	}

	void AddItem(Item item) {
		inventory.push_back(item);   
	}

	bool checkHealth() {
		return (hitPoints > 0);
	}

	string equipItem(int index) {
		equippedItem = inventory[index];
	}

	string levelUp() {
		level++;
		intelligence = intelligence + rand() % 5 + 1;
		charisma = charisma + rand() % 5 + 1;

		return "Level: " + to_string(level) + ". Intelligence: " + to_string(intelligence) + ". Charisma: " + to_string(charisma);
	}


protected:

	double hitPoints = MAXHP;
	short int dance_power;
	int intelligence = 1;
	int charisma = 1;
	
	int level = 0;

	string name;
	bool alive = true;
	vector<Item> inventory;     
	Item equippedItem;
};

