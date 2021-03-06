// Boi Dog prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <fstream>
#include <algorithm>
#include <string> 
#include "conio.h"
#include "Player.h"

using namespace std;
	
int choice = 0;
bool success = false;
	int main()
	{
		Player player; //not needed yet. This only the intro sequence.

		//INTRO SEQUENCE
		
		cout << "Boi Dog wakes up after a night at work on the moon. He was tired from all the dancing he did the previous night, so he feels a little bit groggy." << endl;
		cout << "Boi Dog looks around, he sees that he is in his bedroom at his apartment. He doesn't know what time it is. The room is pitch black." << endl;
		cout << "Boi dog has some ideas on what to do: " << endl;
		cout << "\n";

		while (choice != 3) {

			//first set of options for the player.
			cout << "1. Look for alarm clock" << endl;
			cout << "2. Rub Eyes" << endl;
			cout << "3. Look for a light switch" << endl << endl;

			//player options. Moves on if it's option 3.

			cout << "Option: ";

			cin >> choice;

			if (!cin.good()) {

				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Not a number, boi." << endl << endl;
				
			}

			else
			{

				switch (choice) {

					case 1:
						cout << "Boi Dog fumbles around but is unable to find the clock due to the darkness of the room." << endl << endl;
						break;
					case 2:
						cout << "Boi Dog rubs his eyes really hard, but nothing happens and now he is seeing weird symbols flashing." << endl << endl;
						break;
					case 3:
						cout << "Boi Dog feels around his general surroundings with his paws and feels the knob of a switch, he presses down on it and the lights come on in his room. \n" << endl;
						break;
					default:
						cout << "Not an option, Boi" << endl << endl;
						break;
					}
			}

		}

		//This is now option number 2.
		cout << "Boi Dog can now see clearly. Boi Dog looks around and sees his room is in a mess for some reason. To his left, is his tie, which has been left thrown on the ground." << endl << endl;
		cout << "On his Right, he sees his apartment keys lying on top of his table stand. He picks them up." << endl << endl;
		cout << "To his front, Boi Dog sees his desk. His desk houses his Computer, which he has bought recently. He has some idea on what to do." << endl << endl;

		//use a bool if there is more than one option
		while (!success) {

			cout << "1. Look for alarm clock" << endl;
			cout << "2. Get dressed" << endl;
			cout << "3. Check Drawer" << endl;

			cout << "Choose an option: ";


			cin >> choice;

			if (!cin.good()) {

				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Not a number, boi." << endl << endl;

			}

			else
			{

				//case 2 is the success choice that progreses the story.
				switch (choice) {

				case 1:

					cout << "Boi Dog finds his alarm clock to his bedside and looks at the time. He sees that it's 11AM." << endl;
					cout << "Boi Dog needs to get dressed" << endl << endl;
					break;

				case 2:

					cout << "Boi Dog Gets out of bed, grabs his tie and puts it on." << endl;
					cout << "Boi Dog suddenly feels hungry and feels his stomach complaining, he should go get something to eat." << endl << endl;
					success = true;
					break;

				case 3:

					cout << "Boi Dog checks the drawer, he finds a piece of paper with some hard to read number written poorly on it. It states 'Code: 5492'" << endl << endl;
					break;


				default:
					cout << "Not an option, boi" << endl << endl;
					break;
				}
			}
		} //end while.

		//Option 3: Boi Dog now has more free will. (haha fak u luc)
		//this is the last of the intro sequence before moving on to making some areas and trying to string them up.

		string choice; //variable to store input

		cout << "Boi Dog is now in his room. However, Boi Dog can now no longer think of something to do!" << endl;
		cout << "Boi Dog sees a Door, a desk with a PC and a window." << endl << endl;


		while (true) {
			cout << "Action: ";

			cin.ignore();
			cin.clear();
			cin.sync();

			std::getline(cin, choice);

			//handle what the user has inputted.

			//trying to find something.
			if (choice.compare("find") == 0 || choice.compare("Find") == 0 || choice.compare("FIND") == 0) {
				cout << "Find what, boi? \n" << endl;
				cout << "Find ";
				
				getline(cin, choice);

				//Boi dog finds a door.
				if (choice.compare("Door") == 0 || choice.compare("door") == 0) {
					cout << "Boi Dog finds the door to his room. What should he do now?" << endl;
					//internal loop: if action is successful, moves onto main game segment.

					while (true) {
						cout << "Choice: ";

						cin.ignore();
						cin.clear();
						cin.sync();

						std::getline(cin, choice);
						
						//convert the string to lower case.

						std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

						if (choice.compare("open") == 0 || choice.compare("open door") == 0) {
							cout << "Boi Dog tries to open the door by pushing it, but nothing happens" << endl << endl;
						}
						else if (choice.compare("turn knob")) {
							cout << "Boi Dog tries turning the knob. He hears a small click and pushes the door open." << endl;
							cout << "Boi Dog walks out into a corridor. He can go either left or right." << endl;

							break; //ends the loop.
						}
					}
					break; //moves the game onto the next phase. End of intro sequence. 
				}

				//Boi dog finds his PC
				else if (choice.compare("PC") == 0 || choice.compare("pc") == 0) {
					cout << "Boi Dog finds his PC. He bought it recently and doesn't exactly know how to use it yet." << endl;

					//loop to figure out how to turn on PC

					cout << "Boi Dog decides to figure out how to turn on his PC" << endl;

					//turning on PC
					while (true) {
						cout << "Try: ";

						cin.ignore();
						cin.clear();
						cin.sync();

						std::getline(cin, choice);

						//convert the string to lower case.
						std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

						if (choice.compare("look") == 0 || choice.compare("look at pc") == 0 || choice.compare("look around pc") == 0) {
							cout << "Boi dog looks around the PC, he sees that theres a Big button on the top, a small button on the side and a rectangle button on the front." << endl;
						}

						else if (choice.compare("press button") == 0 || choice.compare("push button") == 0 || choice.compare("use button") == 0) {
							cout << "Boi Dog doesn't know what button to use." << endl;
						}

						else if (choice.compare("press big button") == 0 || choice.compare("push big button") == 0 || choice.compare("use big button") == 0) {
							cout << "Boi Dog presses the button, he hears a sound emitting from the PC as lights turn on inside." << endl;
							cout << "He then notices his monitor's screen has lit up with a logo of the moon. The moon logo disappears after a few seconds." << endl;
							cout << "Boi Dog is now presented with a login screen with a textbox asking for a password." << endl;
							cout << "Boi Dog does not remember his password, what will he do?" << endl;
							break; //sequence complete.
						}

						else {
							cout << "What, boi?" << endl;
						}
					}

					//logging into computer. The password is "dreugay"
					bool complete = false;
					while (!complete) {
						cout << "Try: ";

						cin.ignore();
						cin.clear();
						cin.sync();

						std::getline(cin, choice);

						std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower); //convert string

						if (choice.compare("enter password") || choice.compare("login") || choice.compare("password")) {

							cout << "Boi Dog decides to enter a password. (You can give up by typing: 'give up')" << endl;

							while (choice != "give up") {

								cout << "Enter password: ";
								cin >> choice;

								if (choice.compare("dreugay")) {
									cout << "That's homophobic, boi" << endl;
								}

								else if (choice.compare("dreugreat")) {
									cout << "login successful";
									break; //end sequence.
									complete = true;
									
								}

								else {
									cout << "Login failed, type 'give up' if you don't know the password" << endl;
								}
							}
						}

						else if (choice.compare("search desk") || choice.compare("find password on desk") || choice.compare("look around desk")) {

							cout << "Boi Dog looks around his desk for anything that can help him." << endl;
							cout << "He finds a piece of paper that has been folded." << endl;

							while (true) {

								cout << "Boi Dog decides to: ";
								cin >> choice;

								std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower); //convert string

								if (choice.compare("unfold") || choice.compare("unfold paper")) {

									cout << "Boi Dog unfolds the paper, revealing a note with some writing on it." << endl;
									cout << "It says: 'the password is dreug' the last few letters seem to have been scribbled out" << endl;
									cout << "Boi Dog should try to guess the remainder" << endl << endl;
									break; //end sequence

								}
								else {
									cout << "That didn't do anything." << endl;
								}
							}
						}

					} //end login sequence

					//using computer.
					complete = false;

					cout << "Boi Dog is now logged into his computer. He sees a bunch of icons that look like paper." << endl;
					cout << "The first says: 'README.txt'" << endl;
					cout << "The second says: 'Todolist.txt'" << endl;
					cout << "The final one says: 'WARNING.txt'" << endl;

					cout << "Boi Dog decides to open one of the files." << endl << endl;

					cout << "Choose from the following: " << endl;
					cout << "1. Open READEME.txt" << endl;
					cout << "2. Open 'Todolist.txt'" << endl;
					cout << "3. Open 'WARNING.txt'" << endl;

					int option = 0;
					while (!complete) {
						cout << "Choice: ";

						cin.ignore();
						cin.clear();
						cin.sync();

						cin >> option;

						if (!cin.good()) {

							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "Not a number, boi." << endl << endl;

						}
						else {

							ofstream file("WARNING.txt");
							switch (option) {
							case 1:
								cout << "Boi Dog opens the readme file, but finds it to be empty! What a redundant file." << endl << endl;
								cout << "Boi Dog decides to try opening another file." << endl;
								break;

							case 2:
								cout << "Boi Dog opens the Todolist.txt file, he finds a list of tasks he wanted to do today." << endl << endl;
								break;
							case 3:
								cout << "Boi Dog opens the WARNING.txt file, it's all scrambled and doesn't make any sense to him." << endl;
								cout << "He decides to print it out, incase it actually means something." << endl;
								cout << "File created, check directory." << endl;
								//create a new file in the directory of the EXE file.
								if (file.is_open()) {
									file << "RGVhciBCb2kgRG9nLA0KDQpJZiB5b3UncmUgcmVhZGluZyB0aGlzLCB5b3UgbmVlZCB0byBnZXQgb3V0IG9mIGhlcmUuDQoNCkRvIG5vdCB0cnVzdCBhbnlvbmUgb24gdGhpcyBwbGFuZXQuDQoNCk1ha2Ugc3VyZSB5b3UgdGFrZSBhIG5vdGUgb2YgdGhlIGNvZGUgSSBsZWZ0IGF0IHlvdXIgYmVkc2lkZSBsYXN0IG5pZ2h0Lg0KDQpUaGlzICJtb29uIiBob2xkcyBhIHRlcnJpYmxlIHNlY3JldC4NCg0KU29ycnkgSSBkcnVnZ2VkIHlvdSBsYXN0IG5pZ2h0LCBpdCB3YXMgYSBuZWNlc3NpdHkgdG8gcHJlc2VydmUgbXkgYW5vbnltaXR5Lg0KDQpQbGVhc2UgYmUgY2FyZWZ1bC4NClRoYW5rcywNCkEgbXV0dWFsIGZyaWVuZC4NCg0KTjdIOXhDDQo=";
									file.close();
								}
								complete = true;
								break;
							default:
								cout << "Not an option, boi." << endl;
							}
						}
						break;
					}
				} // end PC sequence

				//Boi dog finds the windows.

				else if(choice.compare("Window") != 0 || choice.compare("window") != 0) {
					cout << "Boi Dog finds his window. He looks outside, but cannot see anything due to it being pitch black." << endl << endl;
					cout << "Boi Dog finds it suspicious that he cannot see anything because the streetlights are usually on. He should find a flashlight before going outside. Boi Dog is now worried something bad is going on." << endl << endl;
				}

				else {
					cout << "Boi dog can't find that, boi." << endl;
				}

			}
			else {
				cout << "Boi dog does not understand what you meant, boi." << endl;
			}
		}
		//end of game.
		
		cout << "Ok, so that was the code?" << endl;

		int code = 0;

		while (true) {

			cin >> code;

			if (!cin.good()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Not a number, boi." << endl << endl;
			}
			else {

				if (code == 5492)
				{
					cout << "S U C C E S S" << endl << endl;
					break;
				}

				else 
				{
					cout << "try again boi" << endl << endl;
				}
			}
		}

		cout << "Press any key to exit";
		_getch();

		                                                                                                                                                                                  
			
	}
