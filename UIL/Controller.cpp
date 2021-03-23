#include "Controller.h"

void Controller::Login(int id)
{
	const auto s = Manager->GetEmployee(id);
	if (s->Position == Rang::TeamLead)
		HighPermision = true;
	else
		HighPermision = false;
}

void Controller::RemoveReport(int id)
{
	//Manager->GetReport(id);
	Manager->RemoveReport(Manager->GetReport(id));
}

void Controller::AddReport(ReportModel* Rep, int Date)
{
	std::vector<TaskDTO*> t;
	for (auto& i : Rep->PinnedTask)
	{
		t.emplace_back(new TaskDTO(i->Name, i->Text, i->Comments,i->CurrentState, i->id));
	}
	auto R = new ReportDTO(CurrentReport, Rep->Druft, Rep->Text, Date, t, false);
	Manager->AddReport(R, Date);
	CurrentReport++;
}

void Controller::AddSprint(ReportModel* Rep, int Date)
{
	if (HighPermision == true) {
		std::vector<TaskDTO*> t;
		for (auto& i : Rep->PinnedTask)
		{
			t.emplace_back(new TaskDTO(i->Name, i->Text, i->Comments, i->CurrentState, i->id));
		}
		auto R = new ReportDTO(CurrentReport, Rep->Druft, Rep->Text, Date, t, true);
		Manager->AddReport(R, Date);
		CurrentReport++;
	}
	else throw std::invalid_argument("no permission");
}

void Controller::RemoveSprint(int id)
{
	if (HighPermision == true) {
		Manager->GetReport(id);
		Manager->RemoveReport(Manager->GetReport(id));
	}
	else throw std::invalid_argument("no permission");
}

void Controller::AddEmployee(StaffModel* _staff)
{
	CurrentStaff++;
	std::vector<TaskDTO*> t;
	for (auto& i : _staff->Tasks)
	{
		t.emplace_back(new TaskDTO(i->Name, i->Text, i->Comments, i->CurrentState, i->id));
	}
	auto s = new StaffDTO(t, _staff->Name, _staff->Position, CurrentStaff);
	Manager->AddEmployee(s);
}

void Controller::FireEmployee(int id)
{
	Manager->FireEmployee(Manager->GetEmployee(id));
}

StaffModel* Controller::GetEmployee(int id) const
{
	auto Dto = Manager->GetEmployee(id);
	std::vector<TaskModel*> t;
	for (auto& i : Dto->Tasks)
	{
		t.emplace_back(new TaskModel(i->Name, i->Text, i->Comments, i->CurrentState));
	}
	auto Model = new StaffModel(t, Dto->Name, Dto->Position);
	return Model;
}

ReportModel* Controller::GetReport(int id) const
{
	auto r = Manager->GetReport(id);
	std::vector<TaskModel*> t;
	for (auto& i : r->PinnedTask)
	{
		t.emplace_back(new TaskModel(i->Name, i->Text, i->Comments, i->CurrentState));
	}
	return new ReportModel(r->Druft, r->Text, r->Date, t);
}

void Controller::UpdateReport(int id, int Date)
{
	auto r = Manager->GetReport(id);
	r->UpdateDate = Date;
}

void Controller::DeleteTask(int id)
{
	Manager->DeleteTask(id);
}

void Controller::CreateTask(TaskModel* task)
{
	auto t = new TaskDTO(task->Name, task->Text, task->Comments, task->CurrentState, CurrentTask);
	Manager->CreateTask(t);
	CurrentTask++;
}
