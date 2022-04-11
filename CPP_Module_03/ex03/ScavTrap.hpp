class ScavTrap: public ClapTrap
{
private:
	ScavTrap(/* args */);
public:
	ScavTrap( std::string name );
	~ScavTrap();
	void guardGate();
};
 