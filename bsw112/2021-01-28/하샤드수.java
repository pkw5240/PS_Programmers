public class 하샤드수 {
    public boolean solution(int x) {
        String num = Integer.toString(x);
        int sum = 0;
        for (int i = 0; i < num.length(); i++) {
            sum += Integer.parseInt(Character.toString(num.charAt(i)));
        }
        return x % sum == 0;
    }
}
