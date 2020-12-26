import java.io.*;
import java.util.*;
import java.util.stream.Stream;

class Solution {

	// You may change this function parameters
	static int findMaxProfit(int numOfPredictedTimes, int[] predictedSharePrices) {
		// Participant's code will go here
	  int minPrice=Integer.MAX_VALUE;int presProfit=0;int finalProfit=0;int prevProfit=0;
		minPrice=predictedSharePrices[0];
        for(int i=1;i<numOfPredictedTimes;i++){
            if(predictedSharePrices[i]<=minPrice){
                minPrice=predictedSharePrices[i];                
            }

            prevProfit=predictedSharePrices[i]-minPrice;
            if(prevProfit>presProfit){
                presProfit=prevProfit;
            }
            if(prevProfit<presProfit || i==numOfPredictedTimes-1){
                finalProfit+=presProfit;
                presProfit=0;
                if(predictedSharePrices[i]>minPrice){
                minPrice=predictedSharePrices[i];
                }
			}
			
		}

		return finalProfit;
	}

	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) throws IOException {
		String[] firstLine = scanner.nextLine().split(" ");
		int[] firstLineArr = Stream.of(firstLine).mapToInt(Integer::parseInt).toArray();
		int numOfPredictedTimes = firstLineArr[0];
		int[] predictedSharePrices = Arrays.copyOfRange(firstLineArr, 1, firstLineArr.length);
		scanner.close();

		int result = findMaxProfit(numOfPredictedTimes, predictedSharePrices);
		// Please do not remove the below line.
		System.out.println(result);
		// Do not print anything after this line
	}
}