#include "StaffDto.h"

StaffDTO::StaffDTO(std::vector<TaskDTO*> _tasks, std::string _name, Rang CurrentPositio,int id)
{
	Tasks = _tasks;
	Name = _name;
	Position = CurrentPositio;
	this->id = id;
}
