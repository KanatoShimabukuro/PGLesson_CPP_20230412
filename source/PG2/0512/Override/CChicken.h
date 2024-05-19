#include <stdio.h>
#include "CBird.h"

class CChicken : public CBird {
	// 「鳴く」仮想関数
	void sing() override;

	// 「飛ぶ」関数
	void fly();
};