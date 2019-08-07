#include "AbstractAdapter.h"


AbstractAdapter::AbstractAdapter(string name, string desc, pcap_if_t* orgAdapter) : _name(name), _description(desc), _orgAdapter(orgAdapter)
{
}

string const& AbstractAdapter::getName() const
{
	return this->_name;
}

void AbstractAdapter::setName(string const& name)
{
	_name = name;
}

string const& AbstractAdapter::getDescription() const
{
	return this->_description;
}

void AbstractAdapter::setDescription(string const& desc)
{
	_description = desc;
}
