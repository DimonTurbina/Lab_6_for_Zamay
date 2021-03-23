#pragma once
#include "TaskDto.h"

class ITaskService
{
public:
	virtual std::vector<TaskDTO*> GetUserTasks() const = 0;
	virtual TaskDTO* GetTask(int id) const = 0;
	virtual void DeleteTask(int id) = 0;
	virtual void CreateTask(TaskDTO* task) = 0;
	virtual std::string GetName(int id) const = 0;
	virtual std::string GetText(int id) const = 0;
	virtual void SetText(std::string Text, int id) = 0;
	virtual State GetCondition(int id) const = 0;
	virtual void SetCondition(State Condition, int id) = 0;
	virtual std::vector<std::string> GetComment(int id) const = 0;
	virtual void EditComment(std::string Comment, int id, int CommentId) = 0;
	virtual void AddCommet(std::string NewCommet, int id) = 0;
};

