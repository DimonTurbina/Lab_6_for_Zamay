#pragma once
#include "StaffDto.h"

//enum class Rang {
//	TeamLead,
//	Developer
//};

class IStaffService
{
public:
	virtual void AddEmployee(StaffDTO* _staff) = 0;
	virtual void FireEmployee(StaffDTO* _staff) = 0;
	virtual StaffDTO* GetEmployee(int id) const = 0;
	virtual void SetStatus(Rang status, int id) = 0;
	virtual void SetName(std::string Name, int id) = 0;
};

