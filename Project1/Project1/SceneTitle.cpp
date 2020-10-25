//STLデバック機能をOFFにする
#define _SWCURE_SCL(o)
#define _HAS_ITERATOR_DEBUGGING(o)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
//#include "SceneMain.h"
#include "GameHead.h"

//コントラクタ
CSceneTitle::CSceneTitle()
{

}

//デストラクタ
CSceneTitle::~CSceneTitle()
{

}

//ゲームメイン初期化メソッド
void CSceneTitle::InitScene()
{
	Font::SetStrTex(L"バイラスクラッシュ");
	Font::SetStrTex(L"エンターキーでゲームを始める");

	//クリアオブジェクト登録
	CObjTitle* obj = new CObjTitle();//クリアオブジェクト作成
	Objs::InsertObj(obj, OBJ_TITLE, 10);//クリアオブジェクト登録
}

//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{

}