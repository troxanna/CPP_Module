#pragma once

# include <iostream>
# include <string>
# include "ATarget.hpp"
# include <vector>

class TargetGenerator
{
private:
	std::vector<ATarget*> targets;

	TargetGenerator( TargetGenerator const & other);
	TargetGenerator & operator=(TargetGenerator const & other);
public:
	TargetGenerator( void );
	~TargetGenerator();

	void learnTargetType(ATarget* ptr);
	void forgetTargetType(std::string const & targetType);
	ATarget* createTarget(std::string const & targetType);
	// void	setTitle(const std::string & title) {this->title = title;};
	// void introduce() const;

};
