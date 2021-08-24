// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (isBadVersion(1)) {
		return 1;
	}

	int i = 1;
	int j = n;

	while (i < j) {
		int mid = i + (j - i) / 2 + 1;
		if (!isBadVersion(mid)) {
			i = mid;
		} else {
			j = mid - 1;
		}
	}

	return j + 1;
    }
};