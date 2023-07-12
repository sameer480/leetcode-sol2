import java.util.ArrayList;

class Solution {
    public int uniquePaths(int m, int n) {
        ArrayList<ArrayList<Integer>> dp = new ArrayList<>(m);
        for (int i = 0; i < m; i++) {
            ArrayList<Integer> row = new ArrayList<>(n);
            for (int j = 0; j < n; j++) {
                row.add(1);
            }
            dp.add(row);
        }
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp.get(i).set(j, dp.get(i-1).get(j) + dp.get(i).get(j-1));
            }
        }
        
        return dp.get(m-1).get(n-1);
    }
}
