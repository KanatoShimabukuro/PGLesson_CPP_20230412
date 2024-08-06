#pragma once

#include "GameObject.h"

class Player : public GameObject {
private:
	int animation_image_handle; // アニメーションの画像データ
	int animation_time;         // アニメーションの時間
	int animation_index;        // アニメーションの添え字

public:
	Player();
	~Player();

	void initialize() override;
	void update() override;
	void draw() const override;
	void finalize() override;
};