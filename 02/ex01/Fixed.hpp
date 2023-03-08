#ifndef FIXED
#define FIXED

#include <ostream>
#define FIXED_MAX 999999
#define FIXED_MIN -999999

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &F);
		Fixed& operator=(const Fixed &F);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &F);

#endif