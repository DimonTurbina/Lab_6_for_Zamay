#pragma once
#include <string>
#include <vector>
#include "TaskDto.h"
#include "ReportDTO.h"
#include "EntityDto.h"
#include "AStaff.h"

//enum class Rang {
//	TeamLead,
//	Developer
//};


class StaffDTO : public EntityDto
{
public:
	StaffDTO(std::vector<int> _tasks, std::string _name, Rang CurrentPositio, int id);
	std::vector<int> Tasks;
	std::string Name;
	Rang Position;
};

