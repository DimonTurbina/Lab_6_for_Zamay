#pragma once
#include <string>
#include <vector>
#include "EntityDto.h"
#include "ATask.h"
//
//enum class State
//{
//	Open,
//	Active,
//	Resolved
//};

class TaskDTO : public EntityDto
{
public:
	TaskDTO(std::string _name, std::string _text, std::vector<std::string> _comments, State _curState, int _id);
	TaskDTO(ATask* task);
	std::string Name;
	std::string Text;
	std::vector<std::string> Comments;
	State CurrentState;
};

