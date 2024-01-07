// STL.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
// STL→Standard Template Library

#include <iostream>
#include <list>//list
using namespace std;
/*Buble sortを付け加える*/
int Buble(void)
{
	int i, j;
	int num[5] = { 7, 1, 3, 8, 5 };
	int tmp;
	//      昇順ソートのプログラム
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	//      並べ替え結果の表示
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}







int list_sample() {
	//listは配列と似ているがもっと高度（追加・削除が自由)
	std::list<int> m{ 4,5,6 };
	//list<int> m1{ 7,8,9 };
	m.push_front(3);//先頭に代入することができる
	m.push_back(7);//後ろに代入することができる
	//3-4-5-6-7
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		cout << *itr << " ";

	}
	cout << endl;
	auto itr = m.begin();//リストの先頭アドレス m.begin()
	itr++;
	itr++;
	m.erase(itr);//現アドレスのリストを削除
	//3-4-6-7
	cout << "リスト削除" << endl;
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		cout << *itr << " ";
	}
	cout << "リストの挿入" << endl;
	//3-4-6-7
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		if (*itr == 6)
			m.insert(itr, 5);
	}
	cout << endl;
	//3-4-5-6-7
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		cout << *itr << " ";
	}

	return 0;

}
#include<map>//mapのテンプレート(連想配列）

int main()
{
	/*map 連想配列 可読性が上がる*/
	map<string, int>m;
	//普通に値を入れる
	m["SUN"] = 10;
	m["TUE"] = 12;
	m["WED"] = 13;
	//初期化
	map < string, int >m1 = {
		{"THU",12},
		{"FRI",15}
	};
	cout << "m1=" << m1.size() << endl;
	cout << "m=" << m.size();
	cout << endl;
	/*
	mapをすべて出力
	*/
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		cout << itr->first << "=>" << itr->second << endl;

	}


}
