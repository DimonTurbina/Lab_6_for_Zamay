#include "TaskService.h"


TaskService::TaskService(Repository<ATask>* _ReportBase)
{
	ReportBase = _ReportBase;
}

TaskDTO* TaskService::GetTask(int id) const
{
	return new TaskDTO(ReportBase->Get(id));
}

std::vector<TaskDTO*> TaskService::GetUserTasks() const
{
	std::vector<TaskDTO*> AllTasks;
	auto m = ReportBase->GetAll();
	for (const auto& i :m)
	{
		AllTasks.emplace_back(new TaskDTO(i.second));
	}
	return AllTasks;
}

void TaskService::DeleteTask(int id)
{
	ReportBase->DeleteById(id);
}

void TaskService::CreateTask(TaskDTO* task)
{
	auto t = new Task(task->Name, task->GetId(), task->Text);
	ReportBase->Add(t);
}

std::string TaskService::GetName(int id) const
{
	return ReportBase->Get(id)->GetName();
}

std::string TaskService::GetText(int id) const
{
	return ReportBase->Get(id)->GetText();
}

void TaskService::SetText(std::string Text, int id)
{
	ReportBase->Get(id)->SetText(Text);
}

State TaskService::GetCondition(int id) const
{
	return ReportBase->Get(id)->GetCondition();
}

void TaskService::SetCondition(State Condition, int id)
{
	ReportBase->Get(id)->SetCondition(Condition);
}

std::vector<std::string> TaskService::GetComment(int id) const
{
	return ReportBase->Get(id)->GetComments();
}

void TaskService::EditComment(std::string Comment, int id, int CommentId)
{

}

void TaskService::AddCommet(std::string NewCommet, int id)
{
	ReportBase->Get(id)->AddCommet(NewCommet);
}

