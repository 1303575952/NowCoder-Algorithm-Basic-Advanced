package basic_class_01;

/**
 * 数组中的最大元素
 */
public class Code_13_MaxNumber {
    public int getMax(int[] arr) {
        return getMax(arr, 0, arr.length - 1);
    }

    public int getMax(int[] arr, int left, int right) {
        if (left == right) {
            return arr[left];
        }
        int mid = (left + right) / 2;
        return Math.max(getMax(arr, left, mid), getMax(arr, mid + 1, right));
    }

    public static void main(String[] args) {
        int[] arr = {4, 2, 5, 3, 5, 6, 1};
        System.out.println(new Code_13_MaxNumber().getMax(arr));
    }
}
