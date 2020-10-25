#pragma once
//使用するネームスペース
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン　ゲームメイン
class CSceneMain :public CScene
{
public:
	CSceneMain();
	~CSceneMain();
	void InitScene();//ゲームメインの初期化メソッド
	void Scene();//ゲームメインの実行中メソッド
private:
	int m_time;//シーンのタイム(主に敵機出現に使用)
};