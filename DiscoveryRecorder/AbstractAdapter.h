#pragma once
#include <string>

using std::string;
class AbstractAdapter {
public:
	AbstractAdapter(string name, string desc, pcap_if_t* orgAdapter);
	virtual string const& getName() const override;
	virtual void setName(string const&) override;
	virtual string const& getDescription() const override;
	virtual void setDescription(string const&) override;
	virtual pcap_t* startLiveCapture(char* errBuf) = 0;
	virtual void closeCaptureSession() = 0;

protected:
	string _name, _description;
	pcap_if_t* _orgAdapter;
	pcap_t* _session;
	
};