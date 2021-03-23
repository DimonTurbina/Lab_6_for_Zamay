#pragma once
#include "ITaskService.h"
#include "Repository.h"
#include "Task.h"

class TaskService : public ITaskService
{
	Repository<ATask>* ReportBase;
public:
	TaskService(Repository<ATask>* _ReportBase);
	TaskDTO* GetTask(int id) const override;
	std::vector<TaskDTO*> GetUserTasks() const override;
	void DeleteTask(int id) override;
	void CreateTask(TaskDTO* task) override;
	std::string GetName(int id) const override;
	std::string GetText(int id) const override;
	void SetText(std::string Text, int id) override;
	State GetCondition(int id) const override;
	void SetCondition(State Condition, int id) override;
	std::vector<std::string> GetComment(int id) const override;
	void EditComment(std::string Comment, int id, int CommentId) override;
	void AddCommet(std::string NewCommet, int id) override;
};

