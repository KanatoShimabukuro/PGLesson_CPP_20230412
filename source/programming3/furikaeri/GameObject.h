#pragma once

#include "Vector2D.h"

class GameObject {
protected:
	Vector2D location;      // 位置座標
	Vector2D collisionSize; // 当たり判定の大きさ
	float angle;            // 進行方向の角度
	int image_handle;       // 画像データ
	int sound_handle;       // 音声データ

public:
	GameObject();
	~GameObject();

	virtual void initialize(); // 初期化
	virtual void update();     // 更新
	virtual void draw() const; // 描画
	virtual void finalize();   // 終了
};