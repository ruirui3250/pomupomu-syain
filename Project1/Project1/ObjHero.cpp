//使用するヘ5ッダーファイルINput
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameHead.h"
#include "objhero.h"



//イニシャライズ
void CObjHero::Init()
{

}
//アクション
void CObjHero::Action()
{

}
//ドロー
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f, 1.0f, 1.0f, };
	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置
	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 32.0f;
	src.m_bottom = 32.0f;
	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 32.0f;
	dst.m_bottom = 32.0f;
	Draw::Draw(0, &src, &dst, c, 0.0f);
}