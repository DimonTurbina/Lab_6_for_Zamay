#pragma once
#include <string>
#include <vector>
#include "TaskModel.h"

class ReportModel
{
public:
	ReportModel(std::string Dr, std::string _text, int _Date, std::vector<TaskModel*> Tasks);
	//ReportModel(AReport* rep);
	std::string Text;
	std::string Druft;
	std::vector<int> PinnedTask;
	int Date;
	int UpdateDate;
	bool Ended;
};