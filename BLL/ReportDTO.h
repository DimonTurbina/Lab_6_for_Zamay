#pragma once
#include "EntityDto.h"
#include "TaskDto.h"
#include "AReport.h"

class ReportDTO : public EntityDto
{
public:
	ReportDTO(int _id, std::string Dr, std::string _text, int Date, std::vector<TaskDTO*> Tasks, bool _IsSprint);
	ReportDTO(AReport* rep);
	std::string Text;
	std::string Druft;
	std::vector<TaskDTO*> PinnedTask;
	int Date;
	int UpdateDate;
	bool Ended;
	bool IsSprint;
};

