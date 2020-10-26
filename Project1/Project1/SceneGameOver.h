#pragma once
//使用するネームヘッダー
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーンクリア 名前による宣言
class CSceneGameOver :public CScene
{
public:
	CSceneGameOver();
	~CSceneGameOver();
	void InitScene();//初期化
	void Scene();//実行中
private:
};