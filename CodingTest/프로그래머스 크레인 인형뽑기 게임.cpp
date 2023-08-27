#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) 
{
    vector<vector<int>> boards;
    boards.resize(board.size());

    vector<int> save;
    int answer = 0;

    for (int i = board.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if(board[i][j] != 0)
                boards[j].push_back(board[i][j]);
        }
    }

    for (int i = 0; i < moves.size(); i++)
    {
        if (boards[moves[i] - 1].size() > 0)
        {
            save.push_back(boards[moves[i] - 1].back());
            boards[moves[i] - 1].pop_back();
        }
    }

    for (int i = 1; i < save.size(); i++)
    {
        if (save[i] == save[i - 1])
        {
            save.erase(save.begin() + i);
            save.erase(save.begin() + i - 1);
            answer += 2;
            i-= 2;
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> board = { {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1}
    ,{4,2,4,4,2},{3,5,1,3,1} };
    vector <int> moves = { 1,5,3,5,1,2,1,4 };
    cout << solution(board, moves);
}