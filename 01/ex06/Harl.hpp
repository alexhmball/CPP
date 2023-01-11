#ifndef HARL
#define HARL

#include <string>

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void invalid(void);
	public:
		void complain(std::string level);
};

typedef void (Harl::*complaintsMsg)(void);

#endif
