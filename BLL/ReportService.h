#pragma once
#include "IReportService.h"
#include "Repository.h"
#include "Report.h"
#include "Task.h"

class ReportService : public IReportService
{
private:
	Repository<AReport>* ReportBase;
public:
	ReportService(Repository<AReport>* Rep);
	void AddReport(ReportDTO* Rep, int Date) override;
	void RemoveReport(ReportDTO* Rep) override;
	ReportDTO* GetReport(int id) const override;
	void UpdateReport(ReportDTO* Rep, int Date) override;
	std::vector<ReportDTO*> getAllReports() const override;
	std::vector<ReportDTO*> getAllReportsCreatedAfter(int day) const override;
};

