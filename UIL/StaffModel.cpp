#include "StaffModel.h"

StaffModel::StaffModel(std::vector<TaskModel*> _tasks, std::string _name, Rang CurrentPositio)
{
	Tasks = _tasks;
	Name = _name;
	Position = CurrentPositio;
}
