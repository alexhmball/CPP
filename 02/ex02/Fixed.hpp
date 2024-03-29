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
		Fixed operator+(const Fixed &F);
		Fixed operator-(const Fixed &F);
		Fixed operator*(const Fixed &F);
		Fixed operator/(const Fixed &F);
		bool operator>(const Fixed &F);
		bool operator<(const Fixed &F);
		bool operator>=(const Fixed &F);
		bool operator<=(const Fixed &F);
		bool operator==(const Fixed &F);
		bool operator!=(const Fixed &F);
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &os, const Fixed &F);

#endif