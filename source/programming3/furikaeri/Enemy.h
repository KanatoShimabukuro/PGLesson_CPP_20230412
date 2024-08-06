#pragma once

#include "GameObject.h"

class Enemy : public GameObject {
private:
	int animation_image_handle; // アニメーションの画像データ

public:
	Enemy();
	~Enemy();

	void initialize() override;
	void update() override;
	void draw() const override;
	void finalize() override;
};