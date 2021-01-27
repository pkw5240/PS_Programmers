import java.util.Arrays;
public class 최소공배수최대공약수 {
    //수학 공식을 알고있으면 더 쉽게 풀겠지만.. 까먹음

    public static void main(String[] args) {
        최소공배수최대공약수 module = new 최소공배수최대공약수();
        System.out.println(Arrays.toString(module.solution(3, 12)));
    }
    public int[] solution(int n, int m) {
        return new int[]{ getGCD(n, m), getLCM(n,m)};
    }

    int getGCD(int a, int b){
        int answer = Math.min(a,b);
        while(answer > 0){
            if(a % answer == 0 && b % answer == 0)
                break;
            answer--;
        }
        return answer;
    }

    int getLCM(int a, int b){
       int answer = Math.max(a, b);
       while(true){
           if(answer % a == 0 && answer % b == 0)
               break;
           answer++;
       }
       return answer;
    }
}
