#include <stdio.h>
#include "CBird.h"

class CChicken : public CBird {
	// �u���v���z�֐�
	void sing() override;

	// �u��ԁv�֐�
	void fly();
};