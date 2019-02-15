/* eoddataDataSoapProxy.h
   Generated by gSOAP 2.8.28 from eoddata.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef eoddataDataSoapProxy_H
#define eoddataDataSoapProxy_H
#include "eoddataH.h"

namespace eoddata {

class SOAP_CMAC DataSoapProxy : public soap
{ public:
	/// Endpoint URL of service 'DataSoapProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in eoddata.h (non-static)
	/// Constructor
	DataSoapProxy();
	/// Copy constructor
	DataSoapProxy(const DataSoapProxy& rhs);
	/// Construct from another engine state
	DataSoapProxy(const struct soap&);
	/// Constructor with endpoint URL
	DataSoapProxy(const char *url);
	/// Constructor with engine input+output mode control
	DataSoapProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	DataSoapProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	DataSoapProxy(soap_mode imode, soap_mode omode);
	/// Destructor deletes deserialized data and engine context
	virtual	~DataSoapProxy();
	/// Initializer used by constructors
	virtual	void DataSoapProxy_init(soap_mode imode, soap_mode omode);
	/// Create a new copy
	virtual	DataSoapProxy *copy() SOAP_PURE_VIRTUAL;
	/// Copy assignment
	DataSoapProxy& operator=(const DataSoapProxy&);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'Login' (returns error code or SOAP_OK)
	virtual	int Login(_eoddata1__Login *eoddata1__Login, _eoddata1__LoginResponse &eoddata1__LoginResponse) { return this->Login(NULL, NULL, eoddata1__Login, eoddata1__LoginResponse); }
	virtual	int Login(const char *endpoint, const char *soap_action, _eoddata1__Login *eoddata1__Login, _eoddata1__LoginResponse &eoddata1__LoginResponse);

	/// Web service operation 'Login2' (returns error code or SOAP_OK)
	virtual	int Login2(_eoddata1__Login2 *eoddata1__Login2, _eoddata1__Login2Response &eoddata1__Login2Response) { return this->Login2(NULL, NULL, eoddata1__Login2, eoddata1__Login2Response); }
	virtual	int Login2(const char *endpoint, const char *soap_action, _eoddata1__Login2 *eoddata1__Login2, _eoddata1__Login2Response &eoddata1__Login2Response);

	/// Web service operation 'Membership' (returns error code or SOAP_OK)
	virtual	int Membership(_eoddata1__Membership *eoddata1__Membership, _eoddata1__MembershipResponse &eoddata1__MembershipResponse) { return this->Membership(NULL, NULL, eoddata1__Membership, eoddata1__MembershipResponse); }
	virtual	int Membership(const char *endpoint, const char *soap_action, _eoddata1__Membership *eoddata1__Membership, _eoddata1__MembershipResponse &eoddata1__MembershipResponse);

	/// Web service operation 'ExchangeList' (returns error code or SOAP_OK)
	virtual	int ExchangeList(_eoddata1__ExchangeList *eoddata1__ExchangeList, _eoddata1__ExchangeListResponse &eoddata1__ExchangeListResponse) { return this->ExchangeList(NULL, NULL, eoddata1__ExchangeList, eoddata1__ExchangeListResponse); }
	virtual	int ExchangeList(const char *endpoint, const char *soap_action, _eoddata1__ExchangeList *eoddata1__ExchangeList, _eoddata1__ExchangeListResponse &eoddata1__ExchangeListResponse);

	/// Web service operation 'ExchangeGet' (returns error code or SOAP_OK)
	virtual	int ExchangeGet(_eoddata1__ExchangeGet *eoddata1__ExchangeGet, _eoddata1__ExchangeGetResponse &eoddata1__ExchangeGetResponse) { return this->ExchangeGet(NULL, NULL, eoddata1__ExchangeGet, eoddata1__ExchangeGetResponse); }
	virtual	int ExchangeGet(const char *endpoint, const char *soap_action, _eoddata1__ExchangeGet *eoddata1__ExchangeGet, _eoddata1__ExchangeGetResponse &eoddata1__ExchangeGetResponse);

	/// Web service operation 'SymbolList' (returns error code or SOAP_OK)
	virtual	int SymbolList(_eoddata1__SymbolList *eoddata1__SymbolList, _eoddata1__SymbolListResponse &eoddata1__SymbolListResponse) { return this->SymbolList(NULL, NULL, eoddata1__SymbolList, eoddata1__SymbolListResponse); }
	virtual	int SymbolList(const char *endpoint, const char *soap_action, _eoddata1__SymbolList *eoddata1__SymbolList, _eoddata1__SymbolListResponse &eoddata1__SymbolListResponse);

	/// Web service operation 'SymbolList2' (returns error code or SOAP_OK)
	virtual	int SymbolList2(_eoddata1__SymbolList2 *eoddata1__SymbolList2, _eoddata1__SymbolList2Response &eoddata1__SymbolList2Response) { return this->SymbolList2(NULL, NULL, eoddata1__SymbolList2, eoddata1__SymbolList2Response); }
	virtual	int SymbolList2(const char *endpoint, const char *soap_action, _eoddata1__SymbolList2 *eoddata1__SymbolList2, _eoddata1__SymbolList2Response &eoddata1__SymbolList2Response);

	/// Web service operation 'QuoteGet' (returns error code or SOAP_OK)
	virtual	int QuoteGet(_eoddata1__QuoteGet *eoddata1__QuoteGet, _eoddata1__QuoteGetResponse &eoddata1__QuoteGetResponse) { return this->QuoteGet(NULL, NULL, eoddata1__QuoteGet, eoddata1__QuoteGetResponse); }
	virtual	int QuoteGet(const char *endpoint, const char *soap_action, _eoddata1__QuoteGet *eoddata1__QuoteGet, _eoddata1__QuoteGetResponse &eoddata1__QuoteGetResponse);

	/// Web service operation 'QuoteList2' (returns error code or SOAP_OK)
	virtual	int QuoteList2(_eoddata1__QuoteList2 *eoddata1__QuoteList2, _eoddata1__QuoteList2Response &eoddata1__QuoteList2Response) { return this->QuoteList2(NULL, NULL, eoddata1__QuoteList2, eoddata1__QuoteList2Response); }
	virtual	int QuoteList2(const char *endpoint, const char *soap_action, _eoddata1__QuoteList2 *eoddata1__QuoteList2, _eoddata1__QuoteList2Response &eoddata1__QuoteList2Response);

	/// Web service operation 'SymbolGet' (returns error code or SOAP_OK)
	virtual	int SymbolGet(_eoddata1__SymbolGet *eoddata1__SymbolGet, _eoddata1__SymbolGetResponse &eoddata1__SymbolGetResponse) { return this->SymbolGet(NULL, NULL, eoddata1__SymbolGet, eoddata1__SymbolGetResponse); }
	virtual	int SymbolGet(const char *endpoint, const char *soap_action, _eoddata1__SymbolGet *eoddata1__SymbolGet, _eoddata1__SymbolGetResponse &eoddata1__SymbolGetResponse);

	/// Web service operation 'QuoteList' (returns error code or SOAP_OK)
	virtual	int QuoteList(_eoddata1__QuoteList *eoddata1__QuoteList, _eoddata1__QuoteListResponse &eoddata1__QuoteListResponse) { return this->QuoteList(NULL, NULL, eoddata1__QuoteList, eoddata1__QuoteListResponse); }
	virtual	int QuoteList(const char *endpoint, const char *soap_action, _eoddata1__QuoteList *eoddata1__QuoteList, _eoddata1__QuoteListResponse &eoddata1__QuoteListResponse);

	/// Web service operation 'NewsList' (returns error code or SOAP_OK)
	virtual	int NewsList(_eoddata1__NewsList *eoddata1__NewsList, _eoddata1__NewsListResponse &eoddata1__NewsListResponse) { return this->NewsList(NULL, NULL, eoddata1__NewsList, eoddata1__NewsListResponse); }
	virtual	int NewsList(const char *endpoint, const char *soap_action, _eoddata1__NewsList *eoddata1__NewsList, _eoddata1__NewsListResponse &eoddata1__NewsListResponse);

	/// Web service operation 'NewsListBySymbol' (returns error code or SOAP_OK)
	virtual	int NewsListBySymbol(_eoddata1__NewsListBySymbol *eoddata1__NewsListBySymbol, _eoddata1__NewsListBySymbolResponse &eoddata1__NewsListBySymbolResponse) { return this->NewsListBySymbol(NULL, NULL, eoddata1__NewsListBySymbol, eoddata1__NewsListBySymbolResponse); }
	virtual	int NewsListBySymbol(const char *endpoint, const char *soap_action, _eoddata1__NewsListBySymbol *eoddata1__NewsListBySymbol, _eoddata1__NewsListBySymbolResponse &eoddata1__NewsListBySymbolResponse);

	/// Web service operation 'FundamentalList' (returns error code or SOAP_OK)
	virtual	int FundamentalList(_eoddata1__FundamentalList *eoddata1__FundamentalList, _eoddata1__FundamentalListResponse &eoddata1__FundamentalListResponse) { return this->FundamentalList(NULL, NULL, eoddata1__FundamentalList, eoddata1__FundamentalListResponse); }
	virtual	int FundamentalList(const char *endpoint, const char *soap_action, _eoddata1__FundamentalList *eoddata1__FundamentalList, _eoddata1__FundamentalListResponse &eoddata1__FundamentalListResponse);

	/// Web service operation 'TechnicalList' (returns error code or SOAP_OK)
	virtual	int TechnicalList(_eoddata1__TechnicalList *eoddata1__TechnicalList, _eoddata1__TechnicalListResponse &eoddata1__TechnicalListResponse) { return this->TechnicalList(NULL, NULL, eoddata1__TechnicalList, eoddata1__TechnicalListResponse); }
	virtual	int TechnicalList(const char *endpoint, const char *soap_action, _eoddata1__TechnicalList *eoddata1__TechnicalList, _eoddata1__TechnicalListResponse &eoddata1__TechnicalListResponse);

	/// Web service operation 'QuoteListByDate' (returns error code or SOAP_OK)
	virtual	int QuoteListByDate(_eoddata1__QuoteListByDate *eoddata1__QuoteListByDate, _eoddata1__QuoteListByDateResponse &eoddata1__QuoteListByDateResponse) { return this->QuoteListByDate(NULL, NULL, eoddata1__QuoteListByDate, eoddata1__QuoteListByDateResponse); }
	virtual	int QuoteListByDate(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDate *eoddata1__QuoteListByDate, _eoddata1__QuoteListByDateResponse &eoddata1__QuoteListByDateResponse);

	/// Web service operation 'QuoteListByDate2' (returns error code or SOAP_OK)
	virtual	int QuoteListByDate2(_eoddata1__QuoteListByDate2 *eoddata1__QuoteListByDate2, _eoddata1__QuoteListByDate2Response &eoddata1__QuoteListByDate2Response) { return this->QuoteListByDate2(NULL, NULL, eoddata1__QuoteListByDate2, eoddata1__QuoteListByDate2Response); }
	virtual	int QuoteListByDate2(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDate2 *eoddata1__QuoteListByDate2, _eoddata1__QuoteListByDate2Response &eoddata1__QuoteListByDate2Response);

	/// Web service operation 'SymbolHistory' (returns error code or SOAP_OK)
	virtual	int SymbolHistory(_eoddata1__SymbolHistory *eoddata1__SymbolHistory, _eoddata1__SymbolHistoryResponse &eoddata1__SymbolHistoryResponse) { return this->SymbolHistory(NULL, NULL, eoddata1__SymbolHistory, eoddata1__SymbolHistoryResponse); }
	virtual	int SymbolHistory(const char *endpoint, const char *soap_action, _eoddata1__SymbolHistory *eoddata1__SymbolHistory, _eoddata1__SymbolHistoryResponse &eoddata1__SymbolHistoryResponse);

	/// Web service operation 'Top10Gains' (returns error code or SOAP_OK)
	virtual	int Top10Gains(_eoddata1__Top10Gains *eoddata1__Top10Gains, _eoddata1__Top10GainsResponse &eoddata1__Top10GainsResponse) { return this->Top10Gains(NULL, NULL, eoddata1__Top10Gains, eoddata1__Top10GainsResponse); }
	virtual	int Top10Gains(const char *endpoint, const char *soap_action, _eoddata1__Top10Gains *eoddata1__Top10Gains, _eoddata1__Top10GainsResponse &eoddata1__Top10GainsResponse);

	/// Web service operation 'Top10Losses' (returns error code or SOAP_OK)
	virtual	int Top10Losses(_eoddata1__Top10Losses *eoddata1__Top10Losses, _eoddata1__Top10LossesResponse &eoddata1__Top10LossesResponse) { return this->Top10Losses(NULL, NULL, eoddata1__Top10Losses, eoddata1__Top10LossesResponse); }
	virtual	int Top10Losses(const char *endpoint, const char *soap_action, _eoddata1__Top10Losses *eoddata1__Top10Losses, _eoddata1__Top10LossesResponse &eoddata1__Top10LossesResponse);

	/// Web service operation 'SymbolChart' (returns error code or SOAP_OK)
	virtual	int SymbolChart(_eoddata1__SymbolChart *eoddata1__SymbolChart, _eoddata1__SymbolChartResponse &eoddata1__SymbolChartResponse) { return this->SymbolChart(NULL, NULL, eoddata1__SymbolChart, eoddata1__SymbolChartResponse); }
	virtual	int SymbolChart(const char *endpoint, const char *soap_action, _eoddata1__SymbolChart *eoddata1__SymbolChart, _eoddata1__SymbolChartResponse &eoddata1__SymbolChartResponse);

	/// Web service operation 'ExchangeMonths' (returns error code or SOAP_OK)
	virtual	int ExchangeMonths(_eoddata1__ExchangeMonths *eoddata1__ExchangeMonths, _eoddata1__ExchangeMonthsResponse &eoddata1__ExchangeMonthsResponse) { return this->ExchangeMonths(NULL, NULL, eoddata1__ExchangeMonths, eoddata1__ExchangeMonthsResponse); }
	virtual	int ExchangeMonths(const char *endpoint, const char *soap_action, _eoddata1__ExchangeMonths *eoddata1__ExchangeMonths, _eoddata1__ExchangeMonthsResponse &eoddata1__ExchangeMonthsResponse);

	/// Web service operation 'SplitListByExchange' (returns error code or SOAP_OK)
	virtual	int SplitListByExchange(_eoddata1__SplitListByExchange *eoddata1__SplitListByExchange, _eoddata1__SplitListByExchangeResponse &eoddata1__SplitListByExchangeResponse) { return this->SplitListByExchange(NULL, NULL, eoddata1__SplitListByExchange, eoddata1__SplitListByExchangeResponse); }
	virtual	int SplitListByExchange(const char *endpoint, const char *soap_action, _eoddata1__SplitListByExchange *eoddata1__SplitListByExchange, _eoddata1__SplitListByExchangeResponse &eoddata1__SplitListByExchangeResponse);

	/// Web service operation 'SplitListBySymbol' (returns error code or SOAP_OK)
	virtual	int SplitListBySymbol(_eoddata1__SplitListBySymbol *eoddata1__SplitListBySymbol, _eoddata1__SplitListBySymbolResponse &eoddata1__SplitListBySymbolResponse) { return this->SplitListBySymbol(NULL, NULL, eoddata1__SplitListBySymbol, eoddata1__SplitListBySymbolResponse); }
	virtual	int SplitListBySymbol(const char *endpoint, const char *soap_action, _eoddata1__SplitListBySymbol *eoddata1__SplitListBySymbol, _eoddata1__SplitListBySymbolResponse &eoddata1__SplitListBySymbolResponse);

	/// Web service operation 'CountryList' (returns error code or SOAP_OK)
	virtual	int CountryList(_eoddata1__CountryList *eoddata1__CountryList, _eoddata1__CountryListResponse &eoddata1__CountryListResponse) { return this->CountryList(NULL, NULL, eoddata1__CountryList, eoddata1__CountryListResponse); }
	virtual	int CountryList(const char *endpoint, const char *soap_action, _eoddata1__CountryList *eoddata1__CountryList, _eoddata1__CountryListResponse &eoddata1__CountryListResponse);

	/// Web service operation 'SymbolHistoryPeriod' (returns error code or SOAP_OK)
	virtual	int SymbolHistoryPeriod(_eoddata1__SymbolHistoryPeriod *eoddata1__SymbolHistoryPeriod, _eoddata1__SymbolHistoryPeriodResponse &eoddata1__SymbolHistoryPeriodResponse) { return this->SymbolHistoryPeriod(NULL, NULL, eoddata1__SymbolHistoryPeriod, eoddata1__SymbolHistoryPeriodResponse); }
	virtual	int SymbolHistoryPeriod(const char *endpoint, const char *soap_action, _eoddata1__SymbolHistoryPeriod *eoddata1__SymbolHistoryPeriod, _eoddata1__SymbolHistoryPeriodResponse &eoddata1__SymbolHistoryPeriodResponse);

	/// Web service operation 'SymbolHistoryPeriodByDateRange' (returns error code or SOAP_OK)
	virtual	int SymbolHistoryPeriodByDateRange(_eoddata1__SymbolHistoryPeriodByDateRange *eoddata1__SymbolHistoryPeriodByDateRange, _eoddata1__SymbolHistoryPeriodByDateRangeResponse &eoddata1__SymbolHistoryPeriodByDateRangeResponse) { return this->SymbolHistoryPeriodByDateRange(NULL, NULL, eoddata1__SymbolHistoryPeriodByDateRange, eoddata1__SymbolHistoryPeriodByDateRangeResponse); }
	virtual	int SymbolHistoryPeriodByDateRange(const char *endpoint, const char *soap_action, _eoddata1__SymbolHistoryPeriodByDateRange *eoddata1__SymbolHistoryPeriodByDateRange, _eoddata1__SymbolHistoryPeriodByDateRangeResponse &eoddata1__SymbolHistoryPeriodByDateRangeResponse);

	/// Web service operation 'QuoteListByDatePeriod' (returns error code or SOAP_OK)
	virtual	int QuoteListByDatePeriod(_eoddata1__QuoteListByDatePeriod *eoddata1__QuoteListByDatePeriod, _eoddata1__QuoteListByDatePeriodResponse &eoddata1__QuoteListByDatePeriodResponse) { return this->QuoteListByDatePeriod(NULL, NULL, eoddata1__QuoteListByDatePeriod, eoddata1__QuoteListByDatePeriodResponse); }
	virtual	int QuoteListByDatePeriod(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDatePeriod *eoddata1__QuoteListByDatePeriod, _eoddata1__QuoteListByDatePeriodResponse &eoddata1__QuoteListByDatePeriodResponse);

	/// Web service operation 'QuoteListByDatePeriod2' (returns error code or SOAP_OK)
	virtual	int QuoteListByDatePeriod2(_eoddata1__QuoteListByDatePeriod2 *eoddata1__QuoteListByDatePeriod2, _eoddata1__QuoteListByDatePeriod2Response &eoddata1__QuoteListByDatePeriod2Response) { return this->QuoteListByDatePeriod2(NULL, NULL, eoddata1__QuoteListByDatePeriod2, eoddata1__QuoteListByDatePeriod2Response); }
	virtual	int QuoteListByDatePeriod2(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDatePeriod2 *eoddata1__QuoteListByDatePeriod2, _eoddata1__QuoteListByDatePeriod2Response &eoddata1__QuoteListByDatePeriod2Response);

	/// Web service operation 'SymbolChangesByExchange' (returns error code or SOAP_OK)
	virtual	int SymbolChangesByExchange(_eoddata1__SymbolChangesByExchange *eoddata1__SymbolChangesByExchange, _eoddata1__SymbolChangesByExchangeResponse &eoddata1__SymbolChangesByExchangeResponse) { return this->SymbolChangesByExchange(NULL, NULL, eoddata1__SymbolChangesByExchange, eoddata1__SymbolChangesByExchangeResponse); }
	virtual	int SymbolChangesByExchange(const char *endpoint, const char *soap_action, _eoddata1__SymbolChangesByExchange *eoddata1__SymbolChangesByExchange, _eoddata1__SymbolChangesByExchangeResponse &eoddata1__SymbolChangesByExchangeResponse);

	/// Web service operation 'DataClientLatestVersion' (returns error code or SOAP_OK)
	virtual	int DataClientLatestVersion(_eoddata1__DataClientLatestVersion *eoddata1__DataClientLatestVersion, _eoddata1__DataClientLatestVersionResponse &eoddata1__DataClientLatestVersionResponse) { return this->DataClientLatestVersion(NULL, NULL, eoddata1__DataClientLatestVersion, eoddata1__DataClientLatestVersionResponse); }
	virtual	int DataClientLatestVersion(const char *endpoint, const char *soap_action, _eoddata1__DataClientLatestVersion *eoddata1__DataClientLatestVersion, _eoddata1__DataClientLatestVersionResponse &eoddata1__DataClientLatestVersionResponse);

	/// Web service operation 'DataFormats' (returns error code or SOAP_OK)
	virtual	int DataFormats(_eoddata1__DataFormats *eoddata1__DataFormats, _eoddata1__DataFormatsResponse &eoddata1__DataFormatsResponse) { return this->DataFormats(NULL, NULL, eoddata1__DataFormats, eoddata1__DataFormatsResponse); }
	virtual	int DataFormats(const char *endpoint, const char *soap_action, _eoddata1__DataFormats *eoddata1__DataFormats, _eoddata1__DataFormatsResponse &eoddata1__DataFormatsResponse);

	/// Web service operation 'UpdateDataFormat' (returns error code or SOAP_OK)
	virtual	int UpdateDataFormat(_eoddata1__UpdateDataFormat *eoddata1__UpdateDataFormat, _eoddata1__UpdateDataFormatResponse &eoddata1__UpdateDataFormatResponse) { return this->UpdateDataFormat(NULL, NULL, eoddata1__UpdateDataFormat, eoddata1__UpdateDataFormatResponse); }
	virtual	int UpdateDataFormat(const char *endpoint, const char *soap_action, _eoddata1__UpdateDataFormat *eoddata1__UpdateDataFormat, _eoddata1__UpdateDataFormatResponse &eoddata1__UpdateDataFormatResponse);

	/// Web service operation 'ValidateAccess' (returns error code or SOAP_OK)
	virtual	int ValidateAccess(_eoddata1__ValidateAccess *eoddata1__ValidateAccess, _eoddata1__ValidateAccessResponse &eoddata1__ValidateAccessResponse) { return this->ValidateAccess(NULL, NULL, eoddata1__ValidateAccess, eoddata1__ValidateAccessResponse); }
	virtual	int ValidateAccess(const char *endpoint, const char *soap_action, _eoddata1__ValidateAccess *eoddata1__ValidateAccess, _eoddata1__ValidateAccessResponse &eoddata1__ValidateAccessResponse);

	/// Web service operation 'Login' (returns error code or SOAP_OK)
	virtual	int Login_(_eoddata1__Login *eoddata1__Login, _eoddata1__LoginResponse &eoddata1__LoginResponse) { return this->Login_(NULL, NULL, eoddata1__Login, eoddata1__LoginResponse); }
	virtual	int Login_(const char *endpoint, const char *soap_action, _eoddata1__Login *eoddata1__Login, _eoddata1__LoginResponse &eoddata1__LoginResponse);

	/// Web service operation 'Login2' (returns error code or SOAP_OK)
	virtual	int Login2_(_eoddata1__Login2 *eoddata1__Login2, _eoddata1__Login2Response &eoddata1__Login2Response) { return this->Login2_(NULL, NULL, eoddata1__Login2, eoddata1__Login2Response); }
	virtual	int Login2_(const char *endpoint, const char *soap_action, _eoddata1__Login2 *eoddata1__Login2, _eoddata1__Login2Response &eoddata1__Login2Response);

	/// Web service operation 'Membership' (returns error code or SOAP_OK)
	virtual	int Membership_(_eoddata1__Membership *eoddata1__Membership, _eoddata1__MembershipResponse &eoddata1__MembershipResponse) { return this->Membership_(NULL, NULL, eoddata1__Membership, eoddata1__MembershipResponse); }
	virtual	int Membership_(const char *endpoint, const char *soap_action, _eoddata1__Membership *eoddata1__Membership, _eoddata1__MembershipResponse &eoddata1__MembershipResponse);

	/// Web service operation 'ExchangeList' (returns error code or SOAP_OK)
	virtual	int ExchangeList_(_eoddata1__ExchangeList *eoddata1__ExchangeList, _eoddata1__ExchangeListResponse &eoddata1__ExchangeListResponse) { return this->ExchangeList_(NULL, NULL, eoddata1__ExchangeList, eoddata1__ExchangeListResponse); }
	virtual	int ExchangeList_(const char *endpoint, const char *soap_action, _eoddata1__ExchangeList *eoddata1__ExchangeList, _eoddata1__ExchangeListResponse &eoddata1__ExchangeListResponse);

	/// Web service operation 'ExchangeGet' (returns error code or SOAP_OK)
	virtual	int ExchangeGet_(_eoddata1__ExchangeGet *eoddata1__ExchangeGet, _eoddata1__ExchangeGetResponse &eoddata1__ExchangeGetResponse) { return this->ExchangeGet_(NULL, NULL, eoddata1__ExchangeGet, eoddata1__ExchangeGetResponse); }
	virtual	int ExchangeGet_(const char *endpoint, const char *soap_action, _eoddata1__ExchangeGet *eoddata1__ExchangeGet, _eoddata1__ExchangeGetResponse &eoddata1__ExchangeGetResponse);

	/// Web service operation 'SymbolList' (returns error code or SOAP_OK)
	virtual	int SymbolList_(_eoddata1__SymbolList *eoddata1__SymbolList, _eoddata1__SymbolListResponse &eoddata1__SymbolListResponse) { return this->SymbolList_(NULL, NULL, eoddata1__SymbolList, eoddata1__SymbolListResponse); }
	virtual	int SymbolList_(const char *endpoint, const char *soap_action, _eoddata1__SymbolList *eoddata1__SymbolList, _eoddata1__SymbolListResponse &eoddata1__SymbolListResponse);

	/// Web service operation 'SymbolList2' (returns error code or SOAP_OK)
	virtual	int SymbolList2_(_eoddata1__SymbolList2 *eoddata1__SymbolList2, _eoddata1__SymbolList2Response &eoddata1__SymbolList2Response) { return this->SymbolList2_(NULL, NULL, eoddata1__SymbolList2, eoddata1__SymbolList2Response); }
	virtual	int SymbolList2_(const char *endpoint, const char *soap_action, _eoddata1__SymbolList2 *eoddata1__SymbolList2, _eoddata1__SymbolList2Response &eoddata1__SymbolList2Response);

	/// Web service operation 'QuoteGet' (returns error code or SOAP_OK)
	virtual	int QuoteGet_(_eoddata1__QuoteGet *eoddata1__QuoteGet, _eoddata1__QuoteGetResponse &eoddata1__QuoteGetResponse) { return this->QuoteGet_(NULL, NULL, eoddata1__QuoteGet, eoddata1__QuoteGetResponse); }
	virtual	int QuoteGet_(const char *endpoint, const char *soap_action, _eoddata1__QuoteGet *eoddata1__QuoteGet, _eoddata1__QuoteGetResponse &eoddata1__QuoteGetResponse);

	/// Web service operation 'QuoteList2' (returns error code or SOAP_OK)
	virtual	int QuoteList2_(_eoddata1__QuoteList2 *eoddata1__QuoteList2, _eoddata1__QuoteList2Response &eoddata1__QuoteList2Response) { return this->QuoteList2_(NULL, NULL, eoddata1__QuoteList2, eoddata1__QuoteList2Response); }
	virtual	int QuoteList2_(const char *endpoint, const char *soap_action, _eoddata1__QuoteList2 *eoddata1__QuoteList2, _eoddata1__QuoteList2Response &eoddata1__QuoteList2Response);

	/// Web service operation 'SymbolGet' (returns error code or SOAP_OK)
	virtual	int SymbolGet_(_eoddata1__SymbolGet *eoddata1__SymbolGet, _eoddata1__SymbolGetResponse &eoddata1__SymbolGetResponse) { return this->SymbolGet_(NULL, NULL, eoddata1__SymbolGet, eoddata1__SymbolGetResponse); }
	virtual	int SymbolGet_(const char *endpoint, const char *soap_action, _eoddata1__SymbolGet *eoddata1__SymbolGet, _eoddata1__SymbolGetResponse &eoddata1__SymbolGetResponse);

	/// Web service operation 'QuoteList' (returns error code or SOAP_OK)
	virtual	int QuoteList_(_eoddata1__QuoteList *eoddata1__QuoteList, _eoddata1__QuoteListResponse &eoddata1__QuoteListResponse) { return this->QuoteList_(NULL, NULL, eoddata1__QuoteList, eoddata1__QuoteListResponse); }
	virtual	int QuoteList_(const char *endpoint, const char *soap_action, _eoddata1__QuoteList *eoddata1__QuoteList, _eoddata1__QuoteListResponse &eoddata1__QuoteListResponse);

	/// Web service operation 'NewsList' (returns error code or SOAP_OK)
	virtual	int NewsList_(_eoddata1__NewsList *eoddata1__NewsList, _eoddata1__NewsListResponse &eoddata1__NewsListResponse) { return this->NewsList_(NULL, NULL, eoddata1__NewsList, eoddata1__NewsListResponse); }
	virtual	int NewsList_(const char *endpoint, const char *soap_action, _eoddata1__NewsList *eoddata1__NewsList, _eoddata1__NewsListResponse &eoddata1__NewsListResponse);

	/// Web service operation 'NewsListBySymbol' (returns error code or SOAP_OK)
	virtual	int NewsListBySymbol_(_eoddata1__NewsListBySymbol *eoddata1__NewsListBySymbol, _eoddata1__NewsListBySymbolResponse &eoddata1__NewsListBySymbolResponse) { return this->NewsListBySymbol_(NULL, NULL, eoddata1__NewsListBySymbol, eoddata1__NewsListBySymbolResponse); }
	virtual	int NewsListBySymbol_(const char *endpoint, const char *soap_action, _eoddata1__NewsListBySymbol *eoddata1__NewsListBySymbol, _eoddata1__NewsListBySymbolResponse &eoddata1__NewsListBySymbolResponse);

	/// Web service operation 'FundamentalList' (returns error code or SOAP_OK)
	virtual	int FundamentalList_(_eoddata1__FundamentalList *eoddata1__FundamentalList, _eoddata1__FundamentalListResponse &eoddata1__FundamentalListResponse) { return this->FundamentalList_(NULL, NULL, eoddata1__FundamentalList, eoddata1__FundamentalListResponse); }
	virtual	int FundamentalList_(const char *endpoint, const char *soap_action, _eoddata1__FundamentalList *eoddata1__FundamentalList, _eoddata1__FundamentalListResponse &eoddata1__FundamentalListResponse);

	/// Web service operation 'TechnicalList' (returns error code or SOAP_OK)
	virtual	int TechnicalList_(_eoddata1__TechnicalList *eoddata1__TechnicalList, _eoddata1__TechnicalListResponse &eoddata1__TechnicalListResponse) { return this->TechnicalList_(NULL, NULL, eoddata1__TechnicalList, eoddata1__TechnicalListResponse); }
	virtual	int TechnicalList_(const char *endpoint, const char *soap_action, _eoddata1__TechnicalList *eoddata1__TechnicalList, _eoddata1__TechnicalListResponse &eoddata1__TechnicalListResponse);

	/// Web service operation 'QuoteListByDate' (returns error code or SOAP_OK)
	virtual	int QuoteListByDate_(_eoddata1__QuoteListByDate *eoddata1__QuoteListByDate, _eoddata1__QuoteListByDateResponse &eoddata1__QuoteListByDateResponse) { return this->QuoteListByDate_(NULL, NULL, eoddata1__QuoteListByDate, eoddata1__QuoteListByDateResponse); }
	virtual	int QuoteListByDate_(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDate *eoddata1__QuoteListByDate, _eoddata1__QuoteListByDateResponse &eoddata1__QuoteListByDateResponse);

	/// Web service operation 'QuoteListByDate2' (returns error code or SOAP_OK)
	virtual	int QuoteListByDate2_(_eoddata1__QuoteListByDate2 *eoddata1__QuoteListByDate2, _eoddata1__QuoteListByDate2Response &eoddata1__QuoteListByDate2Response) { return this->QuoteListByDate2_(NULL, NULL, eoddata1__QuoteListByDate2, eoddata1__QuoteListByDate2Response); }
	virtual	int QuoteListByDate2_(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDate2 *eoddata1__QuoteListByDate2, _eoddata1__QuoteListByDate2Response &eoddata1__QuoteListByDate2Response);

	/// Web service operation 'SymbolHistory' (returns error code or SOAP_OK)
	virtual	int SymbolHistory_(_eoddata1__SymbolHistory *eoddata1__SymbolHistory, _eoddata1__SymbolHistoryResponse &eoddata1__SymbolHistoryResponse) { return this->SymbolHistory_(NULL, NULL, eoddata1__SymbolHistory, eoddata1__SymbolHistoryResponse); }
	virtual	int SymbolHistory_(const char *endpoint, const char *soap_action, _eoddata1__SymbolHistory *eoddata1__SymbolHistory, _eoddata1__SymbolHistoryResponse &eoddata1__SymbolHistoryResponse);

	/// Web service operation 'Top10Gains' (returns error code or SOAP_OK)
	virtual	int Top10Gains_(_eoddata1__Top10Gains *eoddata1__Top10Gains, _eoddata1__Top10GainsResponse &eoddata1__Top10GainsResponse) { return this->Top10Gains_(NULL, NULL, eoddata1__Top10Gains, eoddata1__Top10GainsResponse); }
	virtual	int Top10Gains_(const char *endpoint, const char *soap_action, _eoddata1__Top10Gains *eoddata1__Top10Gains, _eoddata1__Top10GainsResponse &eoddata1__Top10GainsResponse);

	/// Web service operation 'Top10Losses' (returns error code or SOAP_OK)
	virtual	int Top10Losses_(_eoddata1__Top10Losses *eoddata1__Top10Losses, _eoddata1__Top10LossesResponse &eoddata1__Top10LossesResponse) { return this->Top10Losses_(NULL, NULL, eoddata1__Top10Losses, eoddata1__Top10LossesResponse); }
	virtual	int Top10Losses_(const char *endpoint, const char *soap_action, _eoddata1__Top10Losses *eoddata1__Top10Losses, _eoddata1__Top10LossesResponse &eoddata1__Top10LossesResponse);

	/// Web service operation 'SymbolChart' (returns error code or SOAP_OK)
	virtual	int SymbolChart_(_eoddata1__SymbolChart *eoddata1__SymbolChart, _eoddata1__SymbolChartResponse &eoddata1__SymbolChartResponse) { return this->SymbolChart_(NULL, NULL, eoddata1__SymbolChart, eoddata1__SymbolChartResponse); }
	virtual	int SymbolChart_(const char *endpoint, const char *soap_action, _eoddata1__SymbolChart *eoddata1__SymbolChart, _eoddata1__SymbolChartResponse &eoddata1__SymbolChartResponse);

	/// Web service operation 'ExchangeMonths' (returns error code or SOAP_OK)
	virtual	int ExchangeMonths_(_eoddata1__ExchangeMonths *eoddata1__ExchangeMonths, _eoddata1__ExchangeMonthsResponse &eoddata1__ExchangeMonthsResponse) { return this->ExchangeMonths_(NULL, NULL, eoddata1__ExchangeMonths, eoddata1__ExchangeMonthsResponse); }
	virtual	int ExchangeMonths_(const char *endpoint, const char *soap_action, _eoddata1__ExchangeMonths *eoddata1__ExchangeMonths, _eoddata1__ExchangeMonthsResponse &eoddata1__ExchangeMonthsResponse);

	/// Web service operation 'SplitListByExchange' (returns error code or SOAP_OK)
	virtual	int SplitListByExchange_(_eoddata1__SplitListByExchange *eoddata1__SplitListByExchange, _eoddata1__SplitListByExchangeResponse &eoddata1__SplitListByExchangeResponse) { return this->SplitListByExchange_(NULL, NULL, eoddata1__SplitListByExchange, eoddata1__SplitListByExchangeResponse); }
	virtual	int SplitListByExchange_(const char *endpoint, const char *soap_action, _eoddata1__SplitListByExchange *eoddata1__SplitListByExchange, _eoddata1__SplitListByExchangeResponse &eoddata1__SplitListByExchangeResponse);

	/// Web service operation 'SplitListBySymbol' (returns error code or SOAP_OK)
	virtual	int SplitListBySymbol_(_eoddata1__SplitListBySymbol *eoddata1__SplitListBySymbol, _eoddata1__SplitListBySymbolResponse &eoddata1__SplitListBySymbolResponse) { return this->SplitListBySymbol_(NULL, NULL, eoddata1__SplitListBySymbol, eoddata1__SplitListBySymbolResponse); }
	virtual	int SplitListBySymbol_(const char *endpoint, const char *soap_action, _eoddata1__SplitListBySymbol *eoddata1__SplitListBySymbol, _eoddata1__SplitListBySymbolResponse &eoddata1__SplitListBySymbolResponse);

	/// Web service operation 'CountryList' (returns error code or SOAP_OK)
	virtual	int CountryList_(_eoddata1__CountryList *eoddata1__CountryList, _eoddata1__CountryListResponse &eoddata1__CountryListResponse) { return this->CountryList_(NULL, NULL, eoddata1__CountryList, eoddata1__CountryListResponse); }
	virtual	int CountryList_(const char *endpoint, const char *soap_action, _eoddata1__CountryList *eoddata1__CountryList, _eoddata1__CountryListResponse &eoddata1__CountryListResponse);

	/// Web service operation 'SymbolHistoryPeriod' (returns error code or SOAP_OK)
	virtual	int SymbolHistoryPeriod_(_eoddata1__SymbolHistoryPeriod *eoddata1__SymbolHistoryPeriod, _eoddata1__SymbolHistoryPeriodResponse &eoddata1__SymbolHistoryPeriodResponse) { return this->SymbolHistoryPeriod_(NULL, NULL, eoddata1__SymbolHistoryPeriod, eoddata1__SymbolHistoryPeriodResponse); }
	virtual	int SymbolHistoryPeriod_(const char *endpoint, const char *soap_action, _eoddata1__SymbolHistoryPeriod *eoddata1__SymbolHistoryPeriod, _eoddata1__SymbolHistoryPeriodResponse &eoddata1__SymbolHistoryPeriodResponse);

	/// Web service operation 'SymbolHistoryPeriodByDateRange' (returns error code or SOAP_OK)
	virtual	int SymbolHistoryPeriodByDateRange_(_eoddata1__SymbolHistoryPeriodByDateRange *eoddata1__SymbolHistoryPeriodByDateRange, _eoddata1__SymbolHistoryPeriodByDateRangeResponse &eoddata1__SymbolHistoryPeriodByDateRangeResponse) { return this->SymbolHistoryPeriodByDateRange_(NULL, NULL, eoddata1__SymbolHistoryPeriodByDateRange, eoddata1__SymbolHistoryPeriodByDateRangeResponse); }
	virtual	int SymbolHistoryPeriodByDateRange_(const char *endpoint, const char *soap_action, _eoddata1__SymbolHistoryPeriodByDateRange *eoddata1__SymbolHistoryPeriodByDateRange, _eoddata1__SymbolHistoryPeriodByDateRangeResponse &eoddata1__SymbolHistoryPeriodByDateRangeResponse);

	/// Web service operation 'QuoteListByDatePeriod' (returns error code or SOAP_OK)
	virtual	int QuoteListByDatePeriod_(_eoddata1__QuoteListByDatePeriod *eoddata1__QuoteListByDatePeriod, _eoddata1__QuoteListByDatePeriodResponse &eoddata1__QuoteListByDatePeriodResponse) { return this->QuoteListByDatePeriod_(NULL, NULL, eoddata1__QuoteListByDatePeriod, eoddata1__QuoteListByDatePeriodResponse); }
	virtual	int QuoteListByDatePeriod_(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDatePeriod *eoddata1__QuoteListByDatePeriod, _eoddata1__QuoteListByDatePeriodResponse &eoddata1__QuoteListByDatePeriodResponse);

	/// Web service operation 'QuoteListByDatePeriod2' (returns error code or SOAP_OK)
	virtual	int QuoteListByDatePeriod2_(_eoddata1__QuoteListByDatePeriod2 *eoddata1__QuoteListByDatePeriod2, _eoddata1__QuoteListByDatePeriod2Response &eoddata1__QuoteListByDatePeriod2Response) { return this->QuoteListByDatePeriod2_(NULL, NULL, eoddata1__QuoteListByDatePeriod2, eoddata1__QuoteListByDatePeriod2Response); }
	virtual	int QuoteListByDatePeriod2_(const char *endpoint, const char *soap_action, _eoddata1__QuoteListByDatePeriod2 *eoddata1__QuoteListByDatePeriod2, _eoddata1__QuoteListByDatePeriod2Response &eoddata1__QuoteListByDatePeriod2Response);

	/// Web service operation 'SymbolChangesByExchange' (returns error code or SOAP_OK)
	virtual	int SymbolChangesByExchange_(_eoddata1__SymbolChangesByExchange *eoddata1__SymbolChangesByExchange, _eoddata1__SymbolChangesByExchangeResponse &eoddata1__SymbolChangesByExchangeResponse) { return this->SymbolChangesByExchange_(NULL, NULL, eoddata1__SymbolChangesByExchange, eoddata1__SymbolChangesByExchangeResponse); }
	virtual	int SymbolChangesByExchange_(const char *endpoint, const char *soap_action, _eoddata1__SymbolChangesByExchange *eoddata1__SymbolChangesByExchange, _eoddata1__SymbolChangesByExchangeResponse &eoddata1__SymbolChangesByExchangeResponse);

	/// Web service operation 'DataClientLatestVersion' (returns error code or SOAP_OK)
	virtual	int DataClientLatestVersion_(_eoddata1__DataClientLatestVersion *eoddata1__DataClientLatestVersion, _eoddata1__DataClientLatestVersionResponse &eoddata1__DataClientLatestVersionResponse) { return this->DataClientLatestVersion_(NULL, NULL, eoddata1__DataClientLatestVersion, eoddata1__DataClientLatestVersionResponse); }
	virtual	int DataClientLatestVersion_(const char *endpoint, const char *soap_action, _eoddata1__DataClientLatestVersion *eoddata1__DataClientLatestVersion, _eoddata1__DataClientLatestVersionResponse &eoddata1__DataClientLatestVersionResponse);

	/// Web service operation 'DataFormats' (returns error code or SOAP_OK)
	virtual	int DataFormats_(_eoddata1__DataFormats *eoddata1__DataFormats, _eoddata1__DataFormatsResponse &eoddata1__DataFormatsResponse) { return this->DataFormats_(NULL, NULL, eoddata1__DataFormats, eoddata1__DataFormatsResponse); }
	virtual	int DataFormats_(const char *endpoint, const char *soap_action, _eoddata1__DataFormats *eoddata1__DataFormats, _eoddata1__DataFormatsResponse &eoddata1__DataFormatsResponse);

	/// Web service operation 'UpdateDataFormat' (returns error code or SOAP_OK)
	virtual	int UpdateDataFormat_(_eoddata1__UpdateDataFormat *eoddata1__UpdateDataFormat, _eoddata1__UpdateDataFormatResponse &eoddata1__UpdateDataFormatResponse) { return this->UpdateDataFormat_(NULL, NULL, eoddata1__UpdateDataFormat, eoddata1__UpdateDataFormatResponse); }
	virtual	int UpdateDataFormat_(const char *endpoint, const char *soap_action, _eoddata1__UpdateDataFormat *eoddata1__UpdateDataFormat, _eoddata1__UpdateDataFormatResponse &eoddata1__UpdateDataFormatResponse);

	/// Web service operation 'ValidateAccess' (returns error code or SOAP_OK)
	virtual	int ValidateAccess_(_eoddata1__ValidateAccess *eoddata1__ValidateAccess, _eoddata1__ValidateAccessResponse &eoddata1__ValidateAccessResponse) { return this->ValidateAccess_(NULL, NULL, eoddata1__ValidateAccess, eoddata1__ValidateAccessResponse); }
	virtual	int ValidateAccess_(const char *endpoint, const char *soap_action, _eoddata1__ValidateAccess *eoddata1__ValidateAccess, _eoddata1__ValidateAccessResponse &eoddata1__ValidateAccessResponse);
};

} // namespace eoddata

#endif