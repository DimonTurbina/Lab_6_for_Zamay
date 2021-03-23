#include "Staff.h"

Staff::Staff(std::string _name, int _id, Rang CurrentPosition, AReport* CurrentReport)
{
	Name = _name;
	id = _id;
	Position = CurrentPosition;
	this->CurrentReport = CurrentReport;
}

std::string Staff::GetName() const
{
	return Name;
}

void Staff::AddTask(ATask* task)
{
	Tasks.push_back(task);
}

void Staff::DeleteTask(ATask* task)
{
	auto it = std::find(Tasks.begin(), Tasks.end(), task);
	Tasks.erase(it);
}

std::vector<ATask*> Staff::GetTasks()
{
	return Tasks;
}

void Staff::ChangePosition(Rang NewPosition)
{
	Position = NewPosition;
}

AReport* Staff::GetCurrentReport() const
{
	return CurrentReport;
}

void Staff::SetCurrentReport(AReport* rep)
{
	CurrentReport = rep;
}
