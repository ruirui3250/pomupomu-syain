//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"


#include"GameHead.h"
#include"Objwin.h"
#include"GameL\DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjWin::Init()
{
	m_key_flag = false;
}
//アクション
void CObjWin::Action()
{
	//エンターキーを押してシーンタイトルを移行する
	//if (Input::GetVKey(VK_RETURN) == true)
	//{
		//if (m_key_flag == true)
		//{
			//Scene::SetScene(new CSceneTitle());
			//m_key_flag = false;
		//}
	//}
	//else
	//{
		//m_key_flag = true;
	//}
}

//ドロー
void CObjWin::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画切り取り位置
	RECT_F dst;//描画先表示

	//切り取り位置
	src.m_top =0.0f;
	src.m_left = 0.0f;
	src.m_right = 100.0f;
	src.m_bottom = 100.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 100.0f;
	dst.m_bottom = 100.0f;

	//フォントの表示
	Font::StrDraw(L"You Win!", 270, 200, 50, c);
	Font::StrDraw(L"エンターキーでタイトル戻る。", 170, 500, 30, c);
}