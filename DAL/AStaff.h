#pragma once
#include "AEntity.h"
#include <vector>
#include "ATask.h"
#include "AReport.h"

enum class Rang {
	TeamLead,
	Developer
};

class AStaff : public AEntity
{
protected:
	std::vector<ATask*> Tasks;
	std::string Name;
	AReport* CurrentReport;
public:
	Rang Position;
	virtual std::string GetName() const = 0;
	virtual void AddTask(int task) = 0;
	virtual void DeleteTask(int task) = 0;
	virtual std::vector<int> GetTasks() = 0;
	virtual void ChangePosition(Rang NewPosition) = 0;
	virtual AReport* GetCurrentReport() const = 0;
	virtual void SetCurrentReport(AReport* rep) = 0;
};

