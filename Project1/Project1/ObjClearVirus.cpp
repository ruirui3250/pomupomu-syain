//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameHead.h"

#include"ObjClearVirus.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjClearvirus::Init()
{

}

//アクション
void CObjClearvirus::Action()
{

}

//ドロー
void CObjClearvirus::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画切り取り位置
	RECT_F dst;//描画先表示

	//切り取り位置
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(1, &src, &dst, c, 0.0f);

}