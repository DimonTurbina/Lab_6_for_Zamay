#pragma once
#include <stdexcept>
#include "StaffModel.h"
#include "TaskModel.h"
#include "ReportModel.h"
#include "ServiceManager.h"

class Controller
{
private:
	ServiceManager* Manager;
	bool HighPermision; //more actions is available if teamlead is ligged in
	uint32_t CurrentStaff = 0;
	uint32_t CurrentReport = 0;
	uint32_t CurrentTask = 0;

public:
	Controller(ServiceManager* _Manager) : Manager(_Manager) { };

	void Login(int id);
	void AddReport(ReportModel* Rep, int Date);
	void RemoveReport(int id);

	void AddSprint(ReportModel* Rep, int Date);
	void RemoveSprint(int id);

	std::vector<TaskDTO*> GetTasksByOwner(int owner);
	void AddEmployee(StaffModel* _staff);
	void FireEmployee(int id);
	StaffModel* GetEmployee(int id) const;
	void SetStatus(Rang status, int id);
	void SetName(std::string Name, int id);

	ReportModel* GetReport(int id) const;
	void UpdateReport(int id, int Date);
	std::vector<ReportModel*> getAllReports();
	std::vector<ReportModel*> getAllReportsCreatedAfter(int day);

	std::vector<TaskDTO*> GetUserTasks();
	void DeleteTask(int id);
	void CreateTask(TaskModel* task);
	std::string GetName(int id) const;
	std::string GetText(int id) const;
	void SetText(std::string Text, int id);
	State GetCondition(int id) const;
	void SetCondition(State Condition, int id);
	std::vector<std::string> GetComment(int id) const;
	void EditComment(std::string Comment, int id, int CommentId);
	void AddCommet(std::string NewCommet, int id);
};

