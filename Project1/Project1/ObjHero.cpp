//使用するヘ5ッダーファイルINput
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameHead.h"
#include "Objhero.h"



//イニシャライズ
void CObjHero::Init()
{

}
//アクション
void CObjHero::Action()
{
	//主人公機の移動
	if (Input::GetVKey(VK_RIGHT) == true)
	{
		m_x += 3.0f;
	}
	if (Input::GetVKey(VK_LEFT) == true)
	{
		m_x -= 3.0f;
	}
	if (Input::GetVKey(VK_UP) == true)

	{
		m_y -= 3.0f;
	}
	if (Input::GetVKey(VK_DOWN) == true)

	{
		m_y += 3.0f;
	}
	//主人公が領域外に行かない処理
	if (m_x + 32.0 > 800.0f)
	{
		m_x = 800.0f - 32.0f;//原点に移動
	}
	if (m_y + 32.0 > 600.0f)
	{
		m_y = 600.0f - 32.0f;
	}
	if (m_y < 0.0f)
	{
		m_y = 0.0f;
	}
	if (m_x < 0.0f)
	{
		m_x = 0.0f;
	}

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