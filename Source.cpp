#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Vault {
private:
	int team;
	int level;
	int num;
	string name;
public:
	void InitQuest(int x, int y, int z, string a, int e);
	void PrintInfo();

protected:
	string Junk;
	string Animal;
	string Person;
	string Gun;
	int time;
	int caps;
};
class Quest : public Vault {
private:
	int wait;
public:
	void InitRewards(string a, string b, string c, string d, int e);
	void PrintRewards();
protected:
	
};
int main() {
	int input;

	cout << "Welcome to Fallout Shelter quest simulator, Overseer! Which quest would you like to send your dwellers on today?" << endl;

	Vault quest1;
	quest1.InitQuest(1, 5, 5, "The Quest for Stuff", 1);
	quest1.PrintInfo();

	Vault quest2;
	quest2.InitQuest(1, 10, 10, "The Orange Rose", 2);
	quest2.PrintInfo();

	Vault quest3;
	quest3.InitQuest(2, 20, 15, "sCHEMing", 3);
	quest3.PrintInfo();

	Vault quest4;
	quest4.InitQuest(2, 30, 20, "Reunions", 4);
	quest4.PrintInfo();

	Vault quest5;
	quest5.InitQuest(3, 60, 25, "The Deathclaw Chronicles", 5);
	quest5.PrintInfo();

	cin >> input;

	if (input == 1) {
		Sleep(3000);
		Quest quest1;
		quest1.InitRewards("Baseball glove", "Roxy", "No people", ".32 Pistol", 350);
		quest1.PrintRewards();
	}
	if (input == 2) {
		Sleep(6000);
		Quest quest2;
		quest2.InitRewards("Duct Tape", "Maine coon", "Cait", "Laser Pistol", 550);
		quest2.PrintRewards();
	}
	if (input == 3) {
		Sleep(9000);
		Quest quest3;
		quest3.InitRewards("Yarn", "Fluffy", "Moira Brown", "Gauss Rifle", 1750);
		quest3.PrintRewards();
	}
	if (input == 4) {
		Sleep(12000);
		Quest quest4;
		quest4.InitRewards("Microscope", "Apolda", "Three Dog", "Minigun", 3000);
		quest4.PrintRewards();
	}
	if (input == 5) {
		Sleep(15000);
		Quest quest5;
		quest5.InitRewards("Tri fold Flag", "Dogmeat", "Elder Maxson", "Fat Man", 5500);
		quest5.PrintRewards();
	}

}
void Vault::InitQuest(int x, int y, int z, string a, int e) {
	team = x;
	time = y;
	level = z;
	name = a;
	num = e;
}
void Vault::PrintInfo() {
	cout << "Quest " << num <<endl<< name << " : ";
	cout << endl << "Your team needs at least " << team << " people"<< endl;
	cout << "This quest will take your dwellers " << time << " minutes to complete" << endl;
	cout << "The minimum level requirement for this quest is :" << level << endl;
	cout << endl;
}
void Quest::InitRewards(string a, string b, string c, string d, int e) {
	Junk = a;
	Animal = b;
	Person = c;
	Gun = d;
	caps = e;

}
void Quest::PrintRewards() {
	cout << "Good work Overseer! You have successfully completed a quest!" << endl;
	cout << "For junk, you got (a) " << Junk << endl;
	cout << "For animals, you got " << Animal << endl;
	cout << "You brought " << Person << " to your vault" << endl;
	cout << "You've collected a " << Gun << endl;
	cout << "Your dwellers collected " << caps << " caps" << endl;
}
