#include "ServiceManager.h"

std::vector<int> ServiceManager::GetTasksByOwner(int owner)
{
	const auto s = StaffS->GetEmployee(owner);
	return s->Tasks;
}

void ServiceManager::AddEmployee(StaffDTO* _staff)
{
	StaffS->AddEmployee(_staff);
}

void ServiceManager::FireEmployee(StaffDTO* _staff)
{
	StaffS->FireEmployee(_staff);
}

StaffDTO* ServiceManager::GetEmployee(int id) const
{
	return StaffS->GetEmployee(id);
}

void ServiceManager::SetStatus(Rang status, int id)
{
	StaffS->SetStatus(status, id);
}

void ServiceManager::SetName(std::string Name, int id)
{
	StaffS->SetName(Name, id);
}

void ServiceManager::AddReport(ReportDTO* Rep, int Date)
{
	ReportS->AddReport(Rep, Date);
}

void ServiceManager::RemoveReport(ReportDTO* Rep)
{
	ReportS->RemoveReport(Rep);
}

ReportDTO* ServiceManager::GetReport(int id) const
{
	return ReportS->GetReport(id);
}

void ServiceManager::UpdateReport(ReportDTO* Rep, int Date)
{
	ReportS->UpdateReport(Rep, Date);
}

std::vector<ReportDTO*> ServiceManager::getAllReports()
{
	return ReportS->getAllReports();
}

std::vector<ReportDTO*> ServiceManager::getAllReportsCreatedAfter(int day)
{
	return ReportS->getAllReportsCreatedAfter(day);
}

std::vector<TaskDTO*> ServiceManager::GetUserTasks()
{
	return TaskS->GetUserTasks();
}

void ServiceManager::DeleteTask(int id)
{
	TaskS->DeleteTask(id);
}

TaskDTO* ServiceManager::GetTask(int id) const
{
	return TaskS->GetTask(id);
}

void ServiceManager::CreateTask(TaskDTO* task)
{
	TaskS->CreateTask(task);
}

std::string ServiceManager::GetName(int id) const
{
	return TaskS->GetName(id);
}

std::string ServiceManager::GetText(int id) const
{
	return TaskS->GetText(id);
}

void ServiceManager::SetText(std::string Text, int id)
{
	TaskS->SetText(Text, id);
}

State ServiceManager::GetCondition(int id) const
{
	return TaskS->GetCondition(id);
}

void ServiceManager::SetCondition(State Condition, int id)
{
	TaskS->SetCondition(Condition, id);
}

std::vector<std::string> ServiceManager::GetComment(int id) const
{
	return TaskS->GetComment(id);
}

void ServiceManager::EditComment(std::string Comment, int id, int CommentId)
{
	TaskS->EditComment(Comment, id, CommentId);
}

void ServiceManager::AddCommet(std::string NewCommet, int id)
{
	TaskS->AddCommet(NewCommet, id);
}

TaskDTO* ServiceManager::GetTask(int id)
{
	return TaskS->GetTask(id);
}
