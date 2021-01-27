public class SumNDigit {

    //자릿수 더하기
    public int solution(int n) {
        int answer = 0;

        String number = Integer.toString(n);
        for (int i = 0; i < number.length(); i++) {
            answer += Integer.parseInt(Character.toString(number.charAt(i)));
        }
        return answer;
    }
}

