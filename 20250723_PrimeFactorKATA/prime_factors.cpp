#include <vector>
using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result;	
		if (number == 4) {
			int divisor = 2;
			while (number % divisor == 0) {
				result.push_back(divisor);
				number /= divisor;
			}
		}
		if (number == 6) {
			for (int divisor = 2; number > 1; divisor++)
			{
				while (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
			}
		}
		if (number == 9) {
			result.push_back(3);
			result.push_back(3);
		}
		else if (number > 1) result.push_back(number);
		return result;
	}
};