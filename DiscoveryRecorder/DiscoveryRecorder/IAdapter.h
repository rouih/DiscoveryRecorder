#include <string>
using std::string;

struct IAdapter
{
	virtual string const& getName() const = 0;
	virtual void setName(string const& name) = 0;
	virtual string const& getDescription() const = 0;
	virtual void setDescription(string const& desc) = 0;
	virtual pacp_t* startLiveCapture(char* errBuff) = 0;
	virtual void closeCaptureSession() = 0;
	virtual void setFilter(Abstractfilter*) = 0;
};