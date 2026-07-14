#pragma once
#include <vector>
#include <string>

//配列をシャッフルする
void Shuffle(std::vector<int>& indices);

//ランダムな番号配列を作成する
std::vector<int> CreateRandomIndices(int n);

//間違った番号の配列を作成する
// ｎ			作成する番号の範囲
// correctIndex 正解の番号

/// <summary>/// 間違った番号の配列を作成する /// </summary>
/// <param name="n">作成する番号の範囲</param>
/// <param name="correctIndex">正解の番号</param>
/// <returns></returns>
std::vector<int> CreateWrongIndices(int n, int correctIndex);

//文字列を分割する
//ｓ分解する文字列
//ｃ区切り文字
std::vector<std::string> Split(const std::string& s, char c);