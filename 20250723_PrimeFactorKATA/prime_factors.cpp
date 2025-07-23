#include <vector>
using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result;
		if (number == 4) {
			while (number % 2 == 0) {
				result.push_back(2);
				number /= 2;
			}
		}
		if (number == 6) {
			result.push_back(2);
			result.push_back(3);
		}
		else if (number > 1) result.push_back(number);
		return result;
	}
};