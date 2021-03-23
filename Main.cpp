#include <iostream>
#include "UIL/Controller.h"


int main() {
	Repository<AReport>* RepR = new Repository<AReport>();
	Repository<ATask>* RepT = new Repository<ATask>();
	Repository<AStaff>* RepS = new Repository<AStaff>();

	ReportService* SerR = new ReportService(RepR);
	TaskService* SerT = new TaskService(RepT);
	StaffService* SerS = new StaffService(RepS);

	ServiceManager* Manager = new ServiceManager(SerR, SerT, SerS);

	Controller* Con = new Controller(Manager);

	std::vector<std::string> Comms;
	Comms.push_back("Commit1");
	Comms.push_back("Commit2");
	TaskModel* T1 = new TaskModel("Laba", "Make 6th Lab", Comms, State::Active);
	Con->CreateTask(T1);

	std::vector<TaskModel*> Tasks;
	Tasks.push_back(T1);

	StaffModel* E1 = new StaffModel(Tasks, "Zamay", Rang::TeamLead);
	Con->AddEmployee(E1);

	Con->Login(1);
	ReportModel* Rep = new ReportModel("blabla", "We close dolg", 25, Tasks);
	Con->AddReport(Rep, 25);

	std::cout << Con->GetReport(0)->Text;

	return 0;
}