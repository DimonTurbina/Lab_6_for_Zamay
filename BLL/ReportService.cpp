#include "ReportService.h"

ReportService::ReportService(Repository<AReport>* Rep)
{
	ReportBase = Rep;
}

void ReportService::AddReport(ReportDTO* Rep, int Date)
{
	std::vector<int> t;
	for (auto& i : Rep->PinnedTask)
	{
		t.push_back(i);
	}
	auto NewReport = new Report(Rep->GetId(), Rep->Druft, Rep->Text, Date, t, Rep->IsSprint);
	ReportBase->Add(NewReport);
}

void ReportService::RemoveReport(ReportDTO* Rep)
{
	ReportBase->DeleteById(Rep->GetId());
}

ReportDTO* ReportService::GetReport(int id) const
{
	return new ReportDTO(ReportBase->Get(id));
}


void ReportService::UpdateReport(ReportDTO* Rep, int Date)
{
	const auto id = Rep->GetId();
	auto R = ReportBase->Get(id);
	R->UpdateDay(Date);
}

std::vector<ReportDTO*> ReportService::getAllReports() const
{
	std::vector<ReportDTO*> AllReports;

	auto MapReport = ReportBase->GetAll();
	for (auto& r : MapReport) {
		std::vector<int> t;
		for (auto& m : r.second->GetAllTask()) {
			t.push_back(m);
		}
		AllReports.emplace_back(new ReportDTO(r.first, r.second->GetDruft(), r.second->GetText(), r.second->Date, t, r.second->IsSprint));
	}
	return AllReports;
}

std::vector<ReportDTO*> ReportService::getAllReportsCreatedAfter(int day) const
{
	std::vector<ReportDTO*> CreatedAfter;
	auto m = ReportBase->GetAll();
	for (const auto& i : m)
	{
		if (i.second->Date == day)
			CreatedAfter.emplace_back(new ReportDTO(i.second));
	}
	return CreatedAfter;
}
