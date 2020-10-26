#pragma once

#include "GameL\SceneObjManager.h"

using namespace GameL;

class CObjHero : public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init();
	void Action();
	void Draw();
private:

};