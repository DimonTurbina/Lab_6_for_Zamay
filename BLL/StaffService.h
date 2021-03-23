#pragma once
#include "IStaffService.h"
#include "Repository.h"
#include "Staff.h"

class StaffService : public IStaffService
{
	Repository<AStaff>* ReportBase;
public:
	StaffService(Repository<AStaff>* Base);
	void AddEmployee(StaffDTO* _staff);
	void FireEmployee(StaffDTO* _staff);
	StaffDTO* GetEmployee(int id) const;
	void SetStatus(Rang status, int id);
	void SetName(std::string Name, int id);
};

