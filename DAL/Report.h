#pragma once
#include "AReport.h"
class Report : public AReport
{
public:
	Report(int _id, std::string Dr, std::string _text, int Date, std::vector<int> Tasks, bool _IsSprint);
	std::string GetDruft() const override;
	std::string GetText() const override;
	bool IsEnded() const override;
	void SetEnded(bool Ended) override;
	void SetDruft(std::string Druft) override;
	void SetText(std::string Text) override;
	void PinTask(int Task) override;
	std::vector<int> GetAllTask() const override;
	int GetTask(int id) const override;
	void UpdateDay(int Date) override;
	void FinishTask() override;
};

