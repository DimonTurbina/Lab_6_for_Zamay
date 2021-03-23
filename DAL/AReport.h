#pragma once
#include "AEntity.h"
#include <string>
#include "ATask.h"
#include <vector>

class AReport : public AEntity
{
protected:
	std::string Text;
	std::string Druft;
	std::vector<ATask*> PinnedTask;
	int UpdateDate;
	bool Ended;
public:
	bool IsSprint;
	int Date;
	virtual std::string GetDruft() const = 0;
	virtual std::string GetText() const = 0;
	virtual bool IsEnded() const = 0;
	virtual void SetEnded(bool Ended) = 0;
	virtual void SetDruft(std::string Druft) = 0;
	virtual void SetText(std::string Text) = 0;
	virtual void PinTask(ATask* Task) = 0;
	virtual std::vector<ATask*> GetAllTask() const = 0;
	virtual ATask* GetTask(int id) const = 0;
	virtual void UpdateDay(int Date) = 0;
	virtual void FinishTask() = 0;
};

