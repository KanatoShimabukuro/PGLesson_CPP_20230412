#pragma once

#include "GameObject.h"

class Player : public GameObject {
private:
	int   animation_image_handles[10]; // アニメーションの画像データ
	int   animation_index;             // アニメーションの添え字
	float animation_time;              // アニメーションの時間

public:
	Player();
	~Player();

	void initialize() override;
	void update() override;
	void draw() const override;
	void finalize() override;
};