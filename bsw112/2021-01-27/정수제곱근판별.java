public class 정수제곱근판별 {

    public static void main(String[] args) {
        정수제곱근판별 module = new 정수제곱근판별();
        System.out.println(module.solution(121));
    }
    public long solution(long n) {
        double sqrt = Math.sqrt(n);
        if(sqrt % 1 != 0){
           return -1;
        }
        return (long)Math.pow(sqrt + 1, 2);
    }
}
