#include "ReportModel.h"

ReportModel::ReportModel(std::string Dr, std::string _text, int _Date, std::vector<TaskModel*> Tasks)
{
	Druft = Dr;
	Text = _text;
	Date = Date;
	PinnedTask = Tasks;
}
