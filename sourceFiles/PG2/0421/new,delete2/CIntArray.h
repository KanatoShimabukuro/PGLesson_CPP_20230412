#pragma once


class CIntArray {
	private: // アクセス指定子：非公開
		int* m_pnum; // new で確保される配列データ
		int m_NumOf; // 配列 m_pnum の要素数

	public: // アクセス指定子：公開
		/*
		* 
		*/
		CIntArray(const int nNumOf);

		/*
		* 関数名：デストラクタ
		* 引数：なし
		* メンバ変数の配列 m_pnum
		*/
		~CIntArray();

	public:
		/*
		* 関数名：ゲット
		* 引数：インデックス
		* インデックスの値の位置に格納された値を返す
		*/
		int Get(const int index);

		/*
		* 関数名：セット
		* 引数：インデックス、値
		* インデックスの値の位置に値を格納
		*/
		void Set(const int index, const int value);

	private:
		void CheckIndex(const int index);
};

