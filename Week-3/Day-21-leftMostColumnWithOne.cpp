/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> dim = binaryMatrix.dimensions();
        int rows = dim[0];
        int cols = dim[1];
        int candidate = -1;
        for (int r = 0, c = cols - 1; r < rows && c >= 0; ) {
            if (binaryMatrix.get(r, c) == 1) {
                candidate = c;
                c--;
            } else {
                r++;
            }
        }
        return candidate;
    }
};
