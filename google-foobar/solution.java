import java.util.*;

public class Answer {
    public static int[] answer(int[] data, int n) {

        // create countMap to keep track on ID counts
        HashMap<Integer, Integer> countMap = new HashMap<>();
        for (int i = 0; i < data.length; i++) {
            if (countMap.containsKey(data[i])) {
                countMap.put(data[i], countMap.get(data[i]) + 1);
            } else {
                countMap.put(data[i], 1);
            }
        }

        // generate an array list where each element has repeated <= n
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < data.length; i++) {
            if (countMap.containsKey(data[i]) && countMap.get(data[i]) <= n) {
                result.add(data[i]);
            }
        }

        return convertArrayListToArray(result);
    }

    private static int[] convertArrayListToArray(List<Integer> alist) {
        int[] returnValue = new int[alist.size()];
        for (int i = 0; i < alist.size(); i++) {
            returnValue[i] = alist.get(i).intValue();
        }
        return returnValue;
    }
}