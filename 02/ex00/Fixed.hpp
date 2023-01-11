#ifndef FIXED
#define FIXED

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
