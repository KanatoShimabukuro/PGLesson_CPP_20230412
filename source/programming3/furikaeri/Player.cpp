#include "Player.h"

Player::Player() : animation_time(0.0f), animation_index(0) {
	for (int i = 0; i < 10; i++) {
		animation_image_handles[i] = 0;
	}
}

Player::~Player() {}

void Player::initialize() {
	//
}

void Player::update() {
	//
}

void Player::draw() const {
	//
}

void Player::finalize() {
	//
}