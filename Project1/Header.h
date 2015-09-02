#pragma once


struct vec2
{
	float x;
	float y;
};

struct PlayerData
{
	char name[128];
	float health;
	int score;
	float position;
	float velocity;
};
extern struct PlayerData createPlayer1();

struct TwodeRec
{
	struct vec2;
	float RBG;

};

struct Shop
{
	int gold;
	char itemName[5][128]{ "Bread", "Cheese", "Health Potion", "Mana Potion", "Lockpick" };
	int quanity[5]{ 20, 20, 5, 5, 2 };
	int price[5]{ 5, 10, 50, 50, 200 };
};
extern struct Shop generalStore();