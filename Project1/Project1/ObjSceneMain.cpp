//使用するネームスペース
#include "GameL\DrawTexture.h"
#include"GameHead.h"
#include"ObjSceneMain.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjSceneMain::Init()
{
	m_x1 = 0.0f;
	m_x2 = 800.0f;
}
//アクション
void CObjSceneMain::Action()
{
	//背景１の操作
	m_x1 -= 10.0f;
	if (m_x1 < -800.0f)
		m_x1 = 800;
	//背景2の操作
	m_x2 -= 10.0f;
	if (m_x2 < -800.0f)
		m_x2 = 800;
}

//ドロー
void CObjSceneMain::Draw()
{
	//描画カラー情報 R=Red G=Green B=blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画先切り取り位置
	RECT_F dst;//描画先表示

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;

	////表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 500.0f;
	dst.m_bottom = 500.0f;

	////画像表示
	Draw::Draw(5, &src, &dst, c, 0.0f);

	//背景１を設定描画
	dst.m_top = 0.0f;
	dst.m_left = 0.0f + m_x1;
	dst.m_right = 1000.0f + m_x1;
	dst.m_bottom = 600.0f;

	//0番目に登録したグラフィックを描画。
	Draw::Draw(5, &src, &dst, c, 0.0f);

	//背景2を設定描画
	dst.m_top = 0.0f;
	dst.m_left = 0.0f + m_x2;
	dst.m_right = 1000.0f + m_x2;
	dst.m_bottom = 600.0f;

	//0番目に登録したグラフィックを描画。
	Draw::Draw(5, &src, &dst, c, 0.0f);
}