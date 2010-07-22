#pragma once

class Monster;
class Map;

class MonsterAI
{
public:
	MonsterAI(Map *map);
	void Action(Monster *rhs , float delta);
private:
	int direction;
	void SetDirection(int now);
	Map *map;
};