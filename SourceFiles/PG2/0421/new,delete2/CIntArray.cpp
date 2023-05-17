#include <stdio.h>
#include <memory.h>
#include "CIntArray.h"

// コンストラクタ
// new 演算子で配列を作成
CIntArray::CIntArray(const int nNumOf) {
	m_pnum = new int[nNumOf]; // new 演算子で配列を作成

	// m_pnum 
	if (m_pnum == NULL) {

		// 作成に失敗しているので、m_NumOf を0で初期化
		m_NumOf = 0;
	}
	else {
		m_NumOf = nNumOf;
		for (int i = 0; i < m_NumOf; i++) {
			m_pnum[i] = 0;
		}
	}
	printf("コンストラクタが呼び出されました。\n");
	printf("要素数は %d です。\n", m_NumOf);
}

// デストラクタ
// 配列に保存されたすべてを削除
CIntArray::~CIntArray() {
	if (m_pnum != NULL) {
		delete[] m_pnum;
	}
	printf("デストラクタが呼び出されました。\n");
	printf("要素数は %d でした。\n", m_NumOf);
}

// 配列に保存された値を取得
int CIntArray::Get(const int index) {
	CheckIndex(index);
	return m_pnum[index];
}

// 指定されたインデックス位置に、値を配列に保存
void CIntArray::Set(const int index, const int value) {
	CheckIndex(index);
	m_pnum[index] = value;
}

// 
void CIntArray::CheckIndex(const int index) {
	if (index < m_NumOf) {
		return;
	}
	printf("インデックスが不正！\n");
	printf("値 : %d \n", index);
}