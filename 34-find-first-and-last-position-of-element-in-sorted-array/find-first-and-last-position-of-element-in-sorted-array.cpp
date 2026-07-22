class Solution {
public:

    int firstOccurrence(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int first = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return first;
    }

    int lastOccurrence(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int last = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return last;
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        int first = firstOccurrence(arr, target);

        if (first == -1) {
            return {-1, -1};
        }

        int last = lastOccurrence(arr, target);

        return {first, last};
    }
};
