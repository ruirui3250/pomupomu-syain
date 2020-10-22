//STLデバッグ機能をオフにする。
#define _SECURE_SCL(o)
#define _HAS_ITERATOR_DEBUGGING(o)

//GameL使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include"GameL\DrawTexture.h"

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
	//外部グラフィック読み込み登録0番
	Draw::LoadImage(L"kekkan.png", 0, TEX_SIZE_512);
	//外部グラフィック読み込む1番
	Draw::LoadImage(L"virusclear.png", 1, TEX_SIZE_512);

	Font::SetStrTex(L"You Win!");
	Font::SetStrTex(L"エンターキーでタイトルに戻る。");

	//クリアオブジェクト登録
	CObjWin* obj = new CObjWin();//クリアオブジェクト作成
	Objs::InsertObj(obj, OBJ_WIN, 10);//クリアオブジェクト登録


		//クリア時背景オブジェクト作成
	CObjClearback* back = new CObjClearback();
	Objs::InsertObj(back, OBJ_CLEAR_BACK, 0);

	//クリアウイルス作成
	CObjClearvirus* obj2 = new CObjClearvirus();//クリア作成
	Objs::InsertObj(obj2, OBJ_CLEAR_VIRUS, 1);//クリアウイルス登録

}

//実行メソッド
void CSceneWin::Scene()
{

}