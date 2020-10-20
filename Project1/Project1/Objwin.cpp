//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"Objwin.h"

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
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneTitle(a));
			m_key_flag = false;
		}
	}
	else
	{
		m_key_flag = true;
	}
}

//ドロー
void CObjWin::Draw()
{

}