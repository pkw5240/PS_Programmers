public class 콜라즈추측 {

    public static void main(String[] args) {
        콜라즈추측 module = new 콜라즈추측();
        System.out.println(module.solution(626331));
    }

    public int solution(int num) {
        return getCollatzNum2(num);
    }

    int getCollatzNum2(long num){
        for (int i = 0; i < 500; i++) {
            if(num == 1)
                return i;

            if(num % 2 == 0)
                num /= 2;
            else
                num = num * 3 + 1;
        }
        return -1;
    }

    //재귀가 더 느림
    int getCollatzNum(long num, int cnt){
        if(num == 1)
            return cnt;
        else if(cnt >= 500)
            return -1;

        if(num % 2 == 0)
            num /= 2;
        else
            num = num * 3 + 1;

        return getCollatzNum(num, cnt + 1);
    }


}
