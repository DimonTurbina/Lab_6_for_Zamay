#pragma once
#include "ReportDTO.h"
#include "Report.h"

class IReportService
{
public:
	virtual void AddReport(ReportDTO* Rep, int Date) = 0;
	virtual void RemoveReport(ReportDTO* Rep) = 0;
	virtual ReportDTO* GetReport(int id) const = 0;
	virtual void UpdateReport(ReportDTO* Rep, int Date) = 0;
	virtual std::vector<ReportDTO*> getAllReports() const = 0;
	virtual std::vector<ReportDTO*> getAllReportsCreatedAfter(int day) const = 0;
};

