//STLデバッグ機能をオフにする。
#define _SECURE_SCL(o)
#define _HAS_ITERATOR_DEBUGGING(o)

//GameL使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "winscene.h"
#include"GameHead.h"

//コンストラクタ
CSceneWin::CSceneWin()
{

}

//デストラクタ
CSceneWin::~CSceneWin()
{

}

//初期化メソッド
//文字の登録
void CSceneWin::InitScene()
{
	Font::SetStrTex(L"You Win!");
	Font::SetStrTex(L"エンターキーでタイトルに戻る。");

}

//実行メソッド
void CSceneWin::Scene()
{

}