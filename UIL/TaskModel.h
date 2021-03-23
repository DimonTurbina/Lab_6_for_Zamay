#pragma once
#include <string>
#include <vector>

enum class State;
//{
//	Open,
//	Active,
//	Resolved
//};

class TaskModel
{
public:
	TaskModel(std::string _name, std::string _text, std::vector<std::string> _comments, State _curState);
	//TaskModel(ATask* task);
	std::string Name;
	std::string Text;
	std::vector<std::string> Comments;
	State CurrentState;
	int id;
};