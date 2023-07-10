#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
	map<string, string> users;
	vector<string> answer;

	for (int i = 0; i < record.size(); i++)
	{
		string command = "";
		string id = "";
		string name = "";
		int j = 0;

		while (record[i][j] != ' ')
		{
			command += record[i][j++];
		}
		j++;

		if (command == "Leave")
			continue;

		while (record[i][j] != ' ')
		{
			id += record[i][j++];
		}
		j++;

		while (j != record[i].size())
		{
			name += record[i][j++];
		}

		if (command == "Enter" || command == "Change")
			users[id] = name;
	}

	for (int i = 0; i < record.size(); i++)
	{
		string command = "";
		string id = "";
		string name = "";
		string answerinput;
		int j = 0;

		while (record[i][j] != ' ')
		{
			command += record[i][j++];
		}
		j++;

		while (record[i][j] != ' ' && j != record[i].size())
		{
			id += record[i][j++];
		}

		if (command == "Enter")
		{
			answerinput += users[id];
			answerinput += "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
			answer.push_back(answerinput);
		}
		else if (command == "Leave")
		{
			answerinput += users[id];
			answerinput += "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
			
			answer.push_back(answerinput);
		}
	}

	return answer;
}

int main()
{
	vector<string> v;
	v.push_back("Enter uid1234 Muzi");
	v.push_back("Enter uid4567 Prodo");
	v.push_back("Leave uid1234");
	v.push_back("Enter uid1234 Prodo");
	v.push_back("Change uid4567 Ryan");
	solution(v);
}