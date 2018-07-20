#pragma once
#include "area.h"
#include "Item.h"
#include "key.h"
#include <string>
#include <vector>
#include <random>
#include <iostream>
class corridor : public area
{
public:
	corridor() {
		roomid = 1;
		totalEnemies = 1;
		totalNPCs = 0;
		totalOptions = 4;
	};
	~corridor();

	string lookAround() {
		return "Boi Dog looks around, but doesn't see anything or anyone. The area appears to be safe.";
	}

	string checkGreetingMat() {
		return "Boi Dog Checks under the greeting mat, and finds a key.";
	}

	string lookDown() override {
		return "Boi Dog looks down and sees a greeting mat";
	}

	string lookRight() override {
		return "Boi Dog looks to his left, he sees some stairs that lead down to the ground floor";
	}

	string lookLeft() override {
		return "Boi Dog sees a window and a wall";
	}

	string lookUp() override {
		return "Boi Dog see a roof. He notes that it looks like it's not been cleaned for a while.";
	}

	//Opens a door
	bool openDoor(key givenKey) {
		if (givenKey.openDoor(roomid)) {
			return true;
		}
		else {
			return false;
		}
	}


	// a function puzzle that will yield some money. There's a secret door in front of boi dog.

	bool secretDoorPuzzle() {
		cout << "Boi Dog can only see the front of what appears to be a wall." << endl;
		cout << "What does boi dog do, boi?" << endl;
		bool complete = false;
		while (!complete) {
			//keep asking for user input until player figures out how to open the door.

			string choice;

			cout << "Choice: ";

			cin >> choice;

			//handle choice input
			std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

			//boi dog chooses to feel the wall
			if (choice.compare("feel") || choice.compare("feel wall") || choice.compare("touch")) {
				cout << "Boi Dog feels the door" << endl;
				cout << "It feels very smooth until a he feels around what feels like a small block that can be pushed inwards" << endl;
				cout << "Boi Dog thinks he can push it" << endl;
			}

			else if (choice.compare("look at wall") || choice.compare("look") || choice.compare("look around wall")) {

			}

		}
	}
protected:
};

