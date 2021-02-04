import java.util.*;

public class 기능개발 {

    //https://programmers.co.kr/learn/courses/30/lessons/42586

    Queue<Job> mJobQ = new LinkedList<>();


    class Job {
        int mProgress;
        int mSpeed;

        Job(int progress, int speed) {
            mProgress = progress;
            mSpeed = speed;
        }
    }

    public static void main(String[] args) {
        기능개발 module = new 기능개발();
        int[] arr = module.solution(new int[]{93, 30, 55}, new int[]{1, 30, 5});
        Arrays.stream(arr).forEach(System.out::print);
    }

    public int[] solution(int[] progresses, int[] speeds) {

        for (int i = 0; i < progresses.length; i++) {
            mJobQ.add(new Job(progresses[i], speeds[i]));
        }

        ArrayList<Integer> deployCntList = new ArrayList<>();
        while (!mJobQ.isEmpty()) {
            //큐의 앞쪽부터 배포시도
            Iterator<Job> jobQIter = mJobQ.iterator();
            int deployJobCnt = 0;
            while (jobQIter.hasNext()) {
                Job currJob = jobQIter.next();
                //일이 끝났으면 배포
                if (currJob.mProgress >= 100) {
                    deployJobCnt++;
                    jobQIter.remove();
                }
                //전의 기능이 아직 안됬으면 배포안함.
                else {
                    break;
                }
            }
            //배포된 기능 수 저장
            if (deployJobCnt != 0)
                deployCntList.add(deployJobCnt);

            //작업진행
            for (Job job : mJobQ)
                job.mProgress += job.mSpeed;

        }

        return deployCntList.stream().mapToInt(i -> i).toArray();
    }


}
