class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                a.add(matrix[i][j]);
            }
        }
        for (int i = 0; i < a.size(); i++) {
            if (target == a.get(i)) {
                return true;
            }
        }
        return false;
    }
}
