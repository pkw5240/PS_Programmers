import java.util.Arrays;
import java.util.stream.Collectors;

public class 스킬트리 {



    public int solution(String skill, String[] skill_trees) {

        return (int) Arrays.stream(skill_trees).map(it -> avaliable(skill, it)).filter(it -> it).count();
    }

    boolean avaliable(String skill, String skillTree) {
        String filtered =
                Arrays.stream(skillTree.split(""))
                .filter(skill::contains)
                .collect(Collectors.joining());


        return skill.startsWith(filtered);
    }


}
