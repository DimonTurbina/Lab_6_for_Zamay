#pragma once
#include "ReportService.h"
#include "TaskService.h"
#include "StaffService.h"

class ServiceManager
{
	IReportService* ReportS;
	ITaskService* TaskS;
	IStaffService* StaffS;
public:
	ServiceManager(IReportService* R, ITaskService* T, IStaffService* S) : ReportS(R), TaskS(T), StaffS(S) {};
	std::vector<TaskDTO*> GetTasksByOwner(int owner);
	void AddEmployee(StaffDTO* _staff);
	void FireEmployee(StaffDTO* _staff);
	StaffDTO* GetEmployee(int id) const;
	void SetStatus(Rang status, int id);
	void SetName(std::string Name, int id);

	void AddReport(ReportDTO* Rep, int Date);
	void RemoveReport(ReportDTO* Rep);
	ReportDTO* GetReport(int id) const;
	void UpdateReport(ReportDTO* Rep, int Date);
	std::vector<ReportDTO*> getAllReports();
	std::vector<ReportDTO*> getAllReportsCreatedAfter(int day);

	std::vector<TaskDTO*> GetUserTasks();
	void DeleteTask(int id);
	void CreateTask(TaskDTO* task);
	std::string GetName(int id) const;
	std::string GetText(int id) const;
	void SetText(std::string Text, int id);
	State GetCondition(int id) const;
	void SetCondition(State Condition, int id);
	std::vector<std::string> GetComment(int id) const;
	void EditComment(std::string Comment, int id, int CommentId);
	void AddCommet(std::string NewCommet, int id);
	TaskDTO* GetTask(int id);
};

