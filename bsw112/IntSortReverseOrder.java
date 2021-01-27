import java.util.Arrays;
import java.util.Comparator;

public class IntSortReverseOrder {

    public long solution(long n) {
        long answer = 0;
        String[] nums = Long.toString(n).split("");
        Arrays.sort(nums, Comparator.reverseOrder());
        String tmp = "";
        for (int i = 0; i < nums.length; i++) {
            tmp += nums[i];
        }
        return Long.parseLong(tmp);
    }
}
