import java.util.Arrays;
public class 비밀지도2 {

    public static void main(String[] args) {
        비밀지도2 module = new 비밀지도2();
        System.out.println(
                Arrays.toString(module.solution(5, new int[]{9, 20, 28, 18, 11}, new int[]{30, 1, 21, 17, 28})));
    }

    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        for (int i = 0; i < n; i++) {
            String merged = Integer.toBinaryString(arr1[i] | arr2[i]);
            merged = nomalizeBinarayString(merged, n);
            merged = merged.replace('0', ' ');
            merged =merged.replace('1', '#');
            answer[i] = merged;
        }
        return answer;
    }

    String nomalizeBinarayString(String str, int digit){
        String result = "";
        for (int i = 0; i < digit - str.length(); i++) {
            result += "0";
        }
        return result += str;
    }



}
