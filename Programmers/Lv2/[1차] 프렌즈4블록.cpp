#include <string>
#include <vector>
#include <string.h>
#include <iostream>
using namespace std;

bool check[30][30] = { false };
bool check_squear(int m, int n, const vector<string>& board)
{
	bool game_over = true;
	// 2x2 에서 좌하단에서만 확인.
	for (size_t i = 1; i < m; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			char tmp = board[i][j];

			// x는 비어있는 칸
			if (tmp == 'x') continue;

			if (tmp == board[i - 1][j - 1] && tmp == board[i - 1][j]
				&& tmp == board[i][j - 1])
			{
				check[i - 1][j - 1] = true;
				check[i - 1][j] = true;
				check[i][j - 1] = true;
				check[i][j] = true;
				game_over = false;
			}
		}
	}
	return game_over;
}


int solution(int m, int n, vector<string> board)
{
	int answer = 0;
	while (!check_squear(m, n, board))
	{

		// column 별로 칸 확인 후 삭제
		for (size_t i = 0; i < n; i++)
		{
			vector<char> tmp;
			int tmp_cnt = 0;

			// 없어질 칸 확인
			for (size_t j = 0; j < m; j++)
			{
				if (!check[j][i])
				{
					tmp.push_back(board[j][i]);
				}
				else if(check[j][i] && board[j][i] != 'x')
				{
					answer++;
					tmp_cnt++;
				}
			}

			// pop후 board 재배열
			for (size_t j = 0; j < m; j++)
			{
				if (j < tmp_cnt) board[j][i] = 'x';
				else
				{
					board[j][i] = tmp.front();
					tmp.erase(tmp.begin());
				}
			}
		}

		// check 초기화
		memset(check, 0, sizeof(check)); 
	}

	return answer;
}
