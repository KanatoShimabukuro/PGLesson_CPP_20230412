#pragma once

class POS {
	private:
		int x;
		int y;

	public:
		POS();

		int getX() const;
		int getY() const;

		void setX(int tmpX);
		void setY(int tmpY);
};
