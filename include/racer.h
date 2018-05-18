#ifndef RACER_H
#define RACER_H

#include <string>
#include "position.h"
#include "entity.h"

class Racer : public Entity
{ 
private:
    bool m_hasCarrot;

public:
	Racer()
	  : Entity("")
	  , m_hasCarrot(false)
	{}
	
    Racer(string id)
	  : Entity(id)
      , m_hasCarrot(false)
    {}
    
    virtual ~Racer() {}
    
    void create() {
		Entity::create();
    }
      
    void setHasCarrot(bool hasCarrot) { m_hasCarrot = hasCarrot; }
    bool hasCarrot() { return m_hasCarrot; }
};

#endif /* RACER_H */
