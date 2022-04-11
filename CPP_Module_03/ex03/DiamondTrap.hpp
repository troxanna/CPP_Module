class DiamondTrap: public virtual ScavTrap, public virtual FragTrap
{
private:
	DiamondTrap(/* args */);
public:
	DiamondTrap( std::string name );
	~DiamondTrap();
	void highFivesGuys();
	void DiamondTrap::whoAmI( void );
};
 