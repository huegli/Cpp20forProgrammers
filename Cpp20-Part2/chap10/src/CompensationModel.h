// Fig. 10.26: CompensationModel.h
// CompensationModel "interface" is a pure abstract base class.
#pragma once
#include <string>

class CompensationModel {
public:
    virtual ~CompensationModel() = default; // generated destructor
    virtual double earnings() const = 0; // pure virtual
    virtual std::string toString() const = 0; // pure virtual
};
