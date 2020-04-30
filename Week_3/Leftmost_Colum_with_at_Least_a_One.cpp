/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> v=binaryMatrix.dimensions();
        int rows=v[0];
        int cols=v[1];
        int ans=cols;
        for(int i=0;i<rows;i++){
            while(ans>0 && binaryMatrix.get(i,ans-1)==1){
                ans--;
            }
        }
        if(ans==cols)
          return -1;
        return ans;
    }
};