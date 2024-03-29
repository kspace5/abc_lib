
#include "utils.h"

namespace qx {
	namespace util {

		//
		// STRING UTILS
		//

		// Splits line into a vector or ints
		vector<int> split_to_ints(string str, char delimiter) {
			vector<int> result;
			stringstream ss(str); // Turn the string into a stream.
			string tok;

			while (getline(ss, tok, delimiter)) {
				result.push_back(std::stoi(tok));
			}

			return result;
		}

		// Splits line into a vector or floats
		vector<float> split_to_floats(string str, char delimiter) {
			vector<float> result;
			stringstream ss(str); // Turn the string into a stream.
			string tok;

			while (getline(ss, tok, delimiter)) {
				result.push_back(std::stof(tok));
			}

			return result;
		}
	}
}