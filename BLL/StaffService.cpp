#include "StaffService.h"

StaffService::StaffService(Repository<AStaff>* Base)
{
	ReportBase = Base;
}

void StaffService::AddEmployee(StaffDTO* _staff)
{
	ReportBase->Add(new Staff(_staff->Name, _staff->GetId(), _staff->Position, 0, _staff->Tasks));
}

void StaffService::FireEmployee(StaffDTO* _staff)
{
	ReportBase->DeleteById(_staff->GetId());
}

StaffDTO* StaffService::GetEmployee(int id) const
{
	auto s = ReportBase->Get(id);
	std::vector<int> t;
	for (auto& i : s->GetTasks())
	{
		t.emplace_back(i);
	}
	return new StaffDTO(t, s->GetName(), s->Position, id);
}

void StaffService::SetStatus(Rang status, int id)
{
	ReportBase->Get(id)->Position = status;
}

void StaffService::SetName(std::string Name, int id)
{
}
