#include <iostream>

class Warlock
{
private:
    std::string name;
    std::string title;
    Warlock( const Warlock & other );
    Warlock& operator=( const Warlock & other );
    Warlock( void );
public:
    Warlock( std::string name, std::string title );
    ~Warlock();
    const std::string & getName() const;
    const std::string & getTitle() const;
    void setTitle(const std::string & other);
    void introduce() const;
};

