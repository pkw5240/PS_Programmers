import java.util.Arrays;

public class 실패율 {

    //https://programmers.co.kr/learn/courses/30/lessons/42889
    //슈퍼 게임 개발자 오렐리는 큰 고민에 빠졌다. 그녀가 만든 프랜즈 오천성이 대성공을 거뒀지만, 요즘 신규 사용자의 수가 급감한 것이다. 원인은 신규 사용자와 기존 사용자 사이에 스테이지 차이가 너무 큰 것이 문제였다.
    //이런 인덱스가 헷갈리는 문제는 그냥 배열 크기를 아끼지 말고 양껏 잡는게 빨리 푸는 방법인듯..

    public static void main(String[] args) {
        실패율 module = new 실패율();
        System.out.println(Arrays.toString(module.solution(4, new int[]{4, 4, 4, 4, 4})));
    }

    class FailRate {
        //몇번째 스테이지
        int num = 0;
        float failRate = 0.f;

        public FailRate(int num, float failRate) {
            this.num = num;
            this.failRate = failRate;
        }

    }

    public int[] solution(int N, int[] stages) {

        int[] userClearStage = new int[N+1];
        for (int i = 0; i < stages.length; i++) {
            for (int j = 0; j < stages[i]; j++) {
                userClearStage[j] += 1; //0에 있는 유저는 아무것도 클리어하지 못한 사람
            }
        }

        FailRate[] failRates = new FailRate[N];
        for (int i = 1; i < N+1; i++) {
            float failRate = Math.abs((userClearStage[i] - userClearStage[i-1]) / (float)userClearStage[i-1]);
            failRates[i-1] = new FailRate(i, userClearStage[i-1] == 0 ? 0 : failRate);
        }

        Arrays.sort(failRates, (a, b) -> {
            int result = Float.compare(b.failRate, a.failRate);
            if(result == 0)
                return Integer.compare(a.num, b.num);
            return result;
        });

        return Arrays.stream(failRates).mapToInt(it -> it.num).toArray();
    }


}


