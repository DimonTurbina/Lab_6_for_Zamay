#pragma once
#include "AStaff.h"

class Staff : public AStaff
{
public:
	Staff(std::string _name, int _id, Rang CurrentPosition, AReport* CurrentReport);
	std::string GetName() const override;
	void AddTask(ATask* task) override;
	void DeleteTask(ATask* task) override;
	std::vector<ATask*> GetTasks() override;
	void ChangePosition(Rang NewPosition) override;
	AReport* GetCurrentReport() const override ;
	void SetCurrentReport(AReport* rep) override;
};

