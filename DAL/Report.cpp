#include "Report.h"

Report::Report(int _id, std::string Dr, std::string _text, int Date, std::vector<ATask*> Tasks, bool _IsSprint)
{
	id = _id;
	Druft = Dr;
	Text = _text;
	this->PinnedTask = Tasks;
	Ended = false;
	IsSprint = _IsSprint;
}

std::string Report::GetDruft() const
{
	return Druft;
}

std::string Report::GetText() const
{
	return Text;
}

bool Report::IsEnded() const
{
	return Ended;
}

void Report::SetEnded(bool Ended)
{
	this->Ended = Ended;
}

void Report::SetDruft(std::string Druft)
{
	Druft = Druft;
}

void Report::SetText(std::string Text)
{
	Text = Text;
}

void Report::PinTask(ATask* Task)
{
	PinnedTask.push_back(Task);
}

std::vector<ATask*> Report::GetAllTask() const
{
	return PinnedTask;
}

ATask* Report::GetTask(int id) const
{
	for (auto& task : PinnedTask) {
		if (task->GetId())
			return task;
	}
	return nullptr;
}

void Report::UpdateDay(int Date)
{
	UpdateDate = Date;
}

void Report::FinishTask()
{
	Ended = true;
}
