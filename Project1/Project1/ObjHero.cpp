#include"GameL\DrawTexture.h"
#include "GameHead.h"
#include "ObjHero.h"

using namespace GameL;

void CObjHero::Init()
{

}

void CObjHero::Action()
{

}

void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 0.0f;
	dst.m_bottom = 0.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);

}
