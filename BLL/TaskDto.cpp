#include "TaskDto.h"

TaskDTO::TaskDTO(std::string _name, std::string _text, std::vector<std::string> _comments, State _curState, int _id)
{
	Name = _name;
	Text = _text;
	Comments = _comments;
	CurrentState = _curState;
	id = _id;
}

TaskDTO::TaskDTO(ATask* task)
{
	Name = task->GetName();
	Text = task->GetText();
	Comments = task->Comments;
	CurrentState = task->GetCondition();
	id = task->GetId();
}
