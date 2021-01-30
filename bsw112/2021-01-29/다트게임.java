import java.util.ArrayList;
import java.util.Arrays;

//https://programmers.co.kr/learn/courses/30/lessons/17682


public class 다트게임 {

    class Evaluation {
        int prvScore, score;

        public Evaluation(int prvScore) {
            this.prvScore = prvScore;
        }

        public Evaluation(int prvScore, int score) {
            this.prvScore = prvScore;
            this.score = score;
        }
    }


    public static void main(String[] args) {
        다트게임 module = new 다트게임();
        System.out.println(module.solution("10S"));
    }

    public int solution(String dartResult) {
        String[] scoresStr = split(dartResult);
        int[] scores = new int[scoresStr.length];
        scores[0] = evaluateScore(0, scoresStr[0]).score;
        for (int i = 1; i < scoresStr.length; i++) {
            Evaluation result = evaluateScore(scores[i - 1], scoresStr[i]);
            scores[i - 1] = result.prvScore;
            scores[i] = result.score;
        }
        return Arrays.stream(scores).sum();
    }


    String[] split(String dartResult) {
        ArrayList<String> result = new ArrayList<>();
        String str = "";

        for (int i = 0; i < dartResult.length(); i++) {
            char c = dartResult.charAt(i);
            if (isNumber(c) && !str.equals("")) {
                String tmp = str + c;
                if(!tmp.equals("10")){
                    result.add(str);
                    str = "";
                }
            }
            str += c;
        }
        result.add(str);
        return result.toArray(String[]::new);
    }


    Evaluation evaluateScore(int prvScore, String score) {
        String number = "";
        Evaluation result = new Evaluation(prvScore);

        for (int i = 0; i < score.length(); i++) {
            char c = score.charAt(i);
            if (isNumber(c)) {
                number += c;
            } else if (isBonuse(c)) {
                result.score = processBonus(Integer.parseInt(number), c);
            } else if (isOption(c)) {
                result = processOption(prvScore, result.score, c);
            }
        }
        return result;
    }

    boolean isNumber(char c) {
        return c >= '0' && c <= '9';
    }

    Evaluation processOption(int prvScore, int score, char option) {
        Evaluation result = new Evaluation(prvScore, score);
        if (option == '*') {
            result.prvScore = prvScore * 2;
            result.score = score * 2;
        } else {
            result.prvScore = prvScore;
            result.score = score * -1;
        }
        return result;
    }

    int processBonus(int number, char bonus) {
        switch (bonus) {
            case 'D':
                number = (int) Math.pow(number, 2);
                break;
            case 'T':
                number = (int) Math.pow(number, 3);
                break;
        }
        return number;
    }

    boolean isBonuse(char c) {
        return c == 'S' || c == 'D' || c == 'T';
    }

    boolean isOption(char c) {
        return c == '*' || c == '#';
    }

}
