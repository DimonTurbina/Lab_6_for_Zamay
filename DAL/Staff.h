#pragma once
#include "AStaff.h"

class Staff : public AStaff
{
public:
	Staff(std::string _name, int _id, Rang CurrentPosition, int CurrentReport, std::vector<int> _Tasks);
	std::string GetName() const override;
	void AddTask(int task) override;
	void DeleteTask(int task) override;
	std::vector<int> GetTasks() override;
	void ChangePosition(Rang NewPosition) override;
	int GetCurrentReport() const override ;
	void SetCurrentReport(int rep) override;
};

