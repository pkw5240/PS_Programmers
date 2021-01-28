import java.util.Arrays;
public class reverseArr {

    //자연수 뒤집어 배열로 만들기
    public static void main(String[] args) {
        reverseArr module = new reverseArr();
        System.out.println(Arrays.toString(module.solution2(125)));
    }
    public int[] solution(long n) {
        String num = Long.toString(n);
        int[] answer = new int[num.length()];
        for (int i = num.length()-1; i >= 0; i--) {
            answer[num.length() - 1 - i] = Integer.parseInt(Character.toString(num.charAt(i)));
        }
        return answer;
    }
    public int[] solution2(long n) {
        String num = Long.toString(n);
        int[] answer = new int[num.length()];
        int cnt = 0;
        while(n > 0){
            answer[cnt++] = (int)(n % 10);
            n /= 10;
        }
        return answer;
    }
}
