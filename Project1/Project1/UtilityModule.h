#pragma once
//プロトタイプ宣言
bool UnitVec(float* vx, float* vy);//ベクトルの正規化を行う関数

bool CheckWindow(float pos_x, float pos_y,
	float window_x, float window_y, float window_w, float window_h);//領域内かどうかチェックする関数

float GetAtan2Angle(float w, float h);//高さと幅で角度を求める。

RECT_F GetBulletEffect(int* ani, int* ani_time, bool del, int timing);//delで弾丸のRECTや着弾effectのRECTを返す。