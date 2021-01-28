
//https://programmers.co.kr/learn/courses/30/lessons/67256
// 상하좌우로만 이동할 수 있다는 조건이 있으므로, 두 지점의 거리를 구할때 벡터연산과는 방법이 다르다.


class Hand {
    int y;
    int x;

    public Hand(int y, int x) {
        this.y = y;
        this.x = x;
    }

    int getDist(Hand other) {
        return Math.abs(y - other.y) + Math.abs(x - other.x);
    }


}

public class 키패드누르기 {

    public static void main(String[] args) {
        키패드누르기 module = new 키패드누르기();
        System.out.println(module.solution(new int[]{1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5}, "right"));
    }
    public String solution(int[] numbers, String hand) {
        String answer = "";

        int lh = '*';
        int rh = '#';
        for (int i = 0; i < numbers.length; i++) {
            char h = getHand(hand, lh, rh, numbers[i]);
            answer += h;
            if (h == 'L')
                lh = numbers[i];
            else
                rh = numbers[i];
        }


        return answer;
    }



    char getHand(String hand, int lh, int rh, int dst) {
        if (dst == 1 || dst == 4 || dst == 7)
            return 'L';
        else if (dst == 3 || dst == 6 || dst == 9)
            return 'R';

        int distL = getPos(dst).getDist(getPos(lh));
        int distR = getPos(dst).getDist(getPos(rh));

        if (distL > distR)
            return 'R';
        else if (distL == distR)
            return hand.equals("right") ? 'R' : 'L';

        return 'L';
    }


    Hand getPos(int num) {
        if (num == 0)
            return new Hand(3, 1);
        else if(num == '*')
            return new Hand(3, 0);
        else if(num == '#')
            return new Hand(3, 2);

        return new Hand((num -1) / 3, (num -1) % 3);
    }
}
