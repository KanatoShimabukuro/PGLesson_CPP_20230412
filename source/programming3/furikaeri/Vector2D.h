#pragma once

class Vector2D {
public:
	float x;
	float y;

public:
	// コンストラクタ - 引数無し
	Vector2D() : x(0.0f), y(0.0f) {}

	// コンストラクタ - xとy座標の引数
	Vector2D(float _x, float _y) : x(_x), y(_y) {}

	// コンストラクタ - 単一値の引数
	Vector2D(float scalar) : x(scalar), y(scalar) {}

	// デストラクタ
	~Vector2D() {}

public:
	//
	// operator | 演算子オーバーロード
	// クラスに対する演算子を定義することで、特定の演算を行うことができる。
	//

	// "="演算子オーバーロード
	Vector2D& operator = (const Vector2D& vec) {
		this->x = vec.x;
		this->y = vec.y;

		return *this;
	}

	// "+"演算子オーバーロード
	const Vector2D operator + (const Vector2D& vec) {
		float x = this->x + vec.x;
		float y = this->y + vec.y;

		return Vector2D(x, y);
	}

	// "-"演算子オーバーロード
	const Vector2D operator - (const Vector2D& vec) {
		float x = this->x - vec.x;
		float y = this->y - vec.y;

		return Vector2D(x, y);
	}

	// "*"演算子オーバーロード
	const Vector2D operator * (const Vector2D& vec) {
		float x = this->x * vec.x;
		float y = this->y * vec.y;

		return Vector2D(x, y);
	}

	// "*"演算子オーバーロード（掛けた値が単一）
	const Vector2D operator * (const float& scalar) {
		float x = this->x * scalar;
		float y = this->y * scalar;

		return Vector2D(x, y);
	}

	// "/"演算子オーバーロード
	const Vector2D operator / (const Vector2D& vec) {
		if (vec.x < 1e-6f) return Vector2D(0.0f);
		if (vec.y < 1e-6f) return Vector2D(0.0f);

		return Vector2D(this->x / vec.x, this->y / vec.y);
	}

	// "/"演算子オーバーロード（割った値が単一）
	const Vector2D operator / (const float& scalar) {
		if (scalar < 1e-6f) return Vector2D(0.0f);

		return Vector2D(this->x / scalar, this->y / scalar);
	}

	// "+="演算子オーバーロード
	Vector2D& operator += (const Vector2D& vec) {
		this->x += vec.x;
		this->y += vec.y;

		return *this;
	}

	// "-="演算子オーバーロード
	Vector2D& operator -= (const Vector2D& vec) {
		this->x -= vec.x;
		this->y -= vec.y;

		return *this;
	}

	// "*="演算子オーバーロード
	Vector2D& operator *= (const Vector2D& vec) {
		this->x *= vec.x;
		this->y *= vec.y;

		return *this;
	}

	// "*="演算子オーバーロード（掛けた値が単一）
	Vector2D& operator *= (const float& scalar) {
		this->x *= scalar;
		this->y *= scalar;

		return *this;
	}

	// "/="演算子オーバーロード
	Vector2D& operator /= (const Vector2D& vec) {
		if (vec.x < 1e-6f) {
			this->x = 0.0f;
			this->y = 0.0f;
		}
		else if (vec.y < 1e-6f) {
			this->x = 0.0f;
			this->y = 0.0f;
		}
		else {
			this->x /= vec.x;
			this->y /= vec.y;
		}

		return *this;
	}

	// "/="演算子オーバーロード（割った値が単一）
	Vector2D& operator /= (const float& scalar) {
		if (scalar < 1e-6f) {
			this->x = 0.0f;
			this->y = 0.0f;
		}
		else {
			this->x /= scalar;
			this->y /= scalar;
		}

		return *this;
	}
};