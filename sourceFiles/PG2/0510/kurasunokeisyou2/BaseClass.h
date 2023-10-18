#pragma once

class BaseClass {
// オブジェクト外部からのアクセスを禁止、ただし継承先クラスからは許可
protected: // public だと無理
	const char* str;
};
