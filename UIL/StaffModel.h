#pragma once
#include <string>
#include <vector>
#include "TaskModel.h"

enum class Rang;
//{
////	TeamLead,
////	Developer
////};


class StaffModel
{
public:
	StaffModel(std::vector<TaskModel*> _tasks, std::string _name, Rang CurrentPositio);
	std::vector<TaskModel*> Tasks;
	std::string Name;
	Rang Position;
};