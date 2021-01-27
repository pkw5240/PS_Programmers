import static org.junit.jupiter.api.Assertions.*;

public class Diskcontroller {

    //getMinimumCostJob 으로 가장 작은 job을 선택하는 기준이
    //getCost를 이용해 구한 값이 아니라, 그냥 가장 짧은 job을 구하면 되는 거였음.

    public static void main(String[] args) {
        Diskcontroller module = new Diskcontroller();
        assertEquals(2, module.solution(new int[][]{{0, 2}, {1, 2}}));
    }

    //현재 작업이 끝나는 시간
    int currentTaskEnd = 0;
    //현재 시간
    int currentTime = 0;

    public int solution(int[][] jobs) {
        int answer = 0;

        while (!isJobsEnd(jobs)) {
            if (canStart()) {
                JobResult job = getMinimumCostJob(jobs);
                if (job != null) {
                    answer += getCost(job.job);
                    currentTaskEnd = currentTime + job.job[1];
                    jobs[job.index][1] = 0; //작업 제외
                }
            }
            //비효율적으로 보이지만, 이 구조에서는 어쩔 수 없음.
            //이 구조를 개선하려면 getNextJob 같은게 있어야함.
            currentTime++;
        }
        return answer / jobs.length;
    }

    boolean isJobsEnd(int[][] jobs) {
        for (int i = 0; i < jobs.length; i++) {
            if (jobs[i][1] != 0) return false;
        }
        return true;
    }

    boolean canStart() {
        return currentTime >= currentTaskEnd;
    }

    int getCost(int[] job) {
        return currentTime + job[1] - job[0];
    }

    class JobResult {
        public void setJob(int[] job) {
            this.job = job;
        }

        public void setIndex(int index) {
            this.index = index;
        }

        int[] job;
        //jobs에서의 인덱스
        int index;

        public JobResult(int[] job, int index) {
            this.job = job;
            this.index = index;
        }
    }

    JobResult getMinimumCostJob(int[][] job) {
        int minCost = Integer.MAX_VALUE;
        JobResult result = new JobResult(job[0], 0);
        for (int i = 0; i < job.length; i++) {
            //요청이 들어온 시점이 현재 시간보다 크거나, 이미 끝난 작업이면 무시
            if (job[i][0] > currentTime || job[i][1] == 0) continue;

            int currCost = job[i][1];
            if (minCost > currCost) {
                minCost = currCost;
                result.index = i;
                result.job = job[i];
            }

        }

        return minCost == Integer.MAX_VALUE ? null : result;
    }
}
