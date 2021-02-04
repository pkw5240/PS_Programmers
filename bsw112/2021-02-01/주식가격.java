public class 주식가격 {

    //https://programmers.co.kr/learn/courses/30/lessons/42584
    //초당 가격이 주어진다.
    //가격이 하락하지 않은 동안의 시간을 초로 구하라.

    // 1 ,2, 3, 2, 3 이면 맨처음 1은 5초간 유지. 2는 4초간, 3은 1초간, 2는 2초간, 3은 0초간
    public static void main(String[] args) {
        주식가격 module = new 주식가격();
        System.out.println(module.solution(new int[]{1, 2, 3, 2, 3}));
    }

    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];

        for (int i = 0; i < prices.length; ++i) {
            int cnt = 0;
            for (int j = i + 1; j < prices.length; ++j) {
                cnt = j - i;
               if(prices[j] < prices[i])
                   break;

            }

            answer[i] = cnt;
        }

        return answer;
    }

}
