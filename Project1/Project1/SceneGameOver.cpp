//STLデバッグ機能をOFFにする
#define _SEURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)
//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
//使用ヘッダー
#include "SceneGameOver.h"
#include "GameHead.h"
//コンストラクタ
CSceneGameOver::CSceneGameOver()
{

}
//デストラクタ
CSceneGameOver::~CSceneGameOver()
{

}
//初期化メソッド
void CSceneGameOver::InitScene()
{
	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"ゲームオーバー画面.png",0,TEX_SIZE_512);
	//	ゲームオーバーオブジェクト作成
	CObjGameOver* obj = new CObjGameOver();
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);


}
//ゲームメイン実行中メソッド
void CSceneGameOver::Scene()
{

}