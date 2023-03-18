#ifndef FIXED
#define FIXED

#define FIXED_MAX 999999
#define FIXED_MIN -999999

class Fixed {
	private:
		int value;
		static const int bits;
	public:
		Fixed();
		Fixed(const Fixed &F);
		Fixed& operator=(const Fixed &F);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
