#include "ReportDTO.h"

ReportDTO::ReportDTO(int _id, std::string Dr, std::string _text, int Date, std::vector<TaskDTO*> Tasks, bool _IsSprint)
{
	id = _id;
	Druft = Dr;
	this->Date = Date;
	PinnedTask = Tasks;
	Text = _text;
	IsSprint = _IsSprint;
}

ReportDTO::ReportDTO(AReport* rep)
{
	IsSprint = IsSprint;
	id = rep->GetId();
	Druft = rep->GetDruft();
	Date = rep->Date;
	auto tasks = rep->GetAllTask();
	for (auto& t : tasks)
		PinnedTask.emplace_back();
}
