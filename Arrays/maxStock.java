import java.io.*;
import java.util.*;
import java.util.stream.Stream;

class Solution {

    // You may change this function parameters
    static int findMaxProfit(int numOfPredictedDays, int[] predictedSharePrices) {

		int minPrice=Integer.MAX_VALUE;
		int maxProfit=0;
		for(int i=0;i<numOfPredictedDays;i++){
			minPrice=Math.min(minPrice, predictedSharePrices[i]);
			maxProfit=Math.max(maxProfit,predictedSharePrices[i]-minPrice);
		}

        return maxProfit;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        String[] firstLine = scanner.nextLine().split(" ");
        int[] firstLineArr = Stream.of(firstLine).mapToInt(Integer::parseInt).toArray();
        int numOfPredictedDays = firstLineArr[0];
        int[] predictedSharePrices = Arrays.copyOfRange(firstLineArr, 1, firstLineArr.length);
        scanner.close();

        int result = findMaxProfit(numOfPredictedDays, predictedSharePrices);

        // Do not remove this line
        System.out.println(result);
        // Do not print anything after this line
    }
}