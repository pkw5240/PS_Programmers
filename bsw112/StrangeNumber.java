public class StrangeNumber {

    //https://programmers.co.kr/learn/courses/30/lessons/12930?language=java
    //이상한문자 만들기

    public static void main(String[] args) {
        StrangeNumber module = new StrangeNumber();
        System.out.println(module.solution("rr r   rr r"));
    }

    public String solution(String s) {
        String answer = "";
        String[] words = s.split("");
        int cnt = 0;
        for (int i = 0; i < words.length; i++) {

            answer += cnt % 2 == 0 ?
                    Character.toUpperCase(words[i].charAt(0)) :
                    Character.toLowerCase(words[i].charAt(0));

            cnt++;

            if(words[i].contains(" ")){
                cnt = 0;
            }
        }
        return answer;
    }


}
