//使用するヘッダーファイルINput
#include	"GameL\DrawFont.h"
#include	"GameL\WinInputs.h"
#include	"GameL\SceneManager.h"
#include	"GameHead.h"
#include	"ObjGameOver.h"
#include	"GameL\DrawTexture.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjGameOver::Init()
{

}
//アクション
void CObjGameOver::Action()
{

}
//ドロー
void CObjGameOver::Draw()
{

	Draw::LoadImage(L"ゲームオーバー画面.png", 0, TEX_SIZE_512);



}