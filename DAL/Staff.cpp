#include "Staff.h"

Staff::Staff(std::string _name, int _id, Rang CurrentPosition, int CurrentReport, std::vector<int> _Tasks)
{
	Name = _name;
	id = _id;
	Position = CurrentPosition;
	this->CurrentReport = CurrentReport;
	Tasks = _Tasks;
}

std::string Staff::GetName() const
{
	return Name;
}

void Staff::AddTask(int task)
{
	Tasks.push_back(task);
}

void Staff::DeleteTask(int task)
{
	auto it = std::find(Tasks.begin(), Tasks.end(), task);
	Tasks.erase(it);
}

std::vector<int> Staff::GetTasks()
{
	return Tasks;
}

void Staff::ChangePosition(Rang NewPosition)
{
	Position = NewPosition;
}

int Staff::GetCurrentReport() const
{
	return CurrentReport;
}

void Staff::SetCurrentReport(int rep)
{
	CurrentReport = rep;
}
