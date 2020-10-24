//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameHead.h"
#include"ObjClearBack.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjClearback::Init()
{

}

//アクション
void CObjClearback::Action()
{

}

//ドロー
void CObjClearback::Draw()
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

	//画像表示
	Draw::Draw(0, &src, &dst, c, 0.0f);

}