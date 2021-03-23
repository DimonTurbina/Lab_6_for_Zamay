#include "TaskModel.h"

TaskModel::TaskModel(std::string _name, std::string _text, std::vector<std::string> _comments, State _curState)
{
	Name = _name;
	Text = _text;
	Comments = _comments;
	CurrentState = _curState;
}
