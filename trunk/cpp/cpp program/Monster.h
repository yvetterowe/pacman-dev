#pragma once
#include "MovableObject.h"
#include "GameScene.h"
#include "MonsterAI.h"
#include <hgesprite.h>
#include <hge.h>
#include <string>

class MonsterAI;

class Monster:public MovableObject
{
public:
	Monster(Map *map , const char *sprname);
	~Monster();
	virtual void Update(float delta);
	virtual void Render();
	void SetWeak(float time);
	bool IsWeak() { return weakTime > 0.0f;}
	hgeRect* GetBoudingBox();
	const std::string& SprName() const { return sprName; }
	MonsterAI* GetAI();
private:
	float weakTime;
	hgeSprite *spr;
	int score;
	hgeSprite *newSpr;
	HGE *hge;
	MonsterAI *ai;
	std::string sprName;
};