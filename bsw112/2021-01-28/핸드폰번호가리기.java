public class 핸드폰번호가리기 {
    public String solution(String phone_number) {
        //charArr로 바꿔도 될듯
        StringBuilder answer = new StringBuilder(phone_number);
        for (int i = 0; i < answer.length() - 4; i++) {
            answer.replace(i, i + 1, "*");
        }
        return answer.toString();
    }

}
