public class Solution {
    
    public static int[] twoSum(int[] nums, int target) {
      Map<Integer,Integer> map =new Hashtable<>();
      for(int i=0;i<nums.length;i++){
          int complement=target-nums[i];
          if(map.containsKey(complement)){
              return new int []{i,map.get(complement)};
          }
          map.put(nums[i], i);
        }
      
      throw new IllegalArgumentException("No two sum solution");
      
    }

public static void main(String[] args){
int array[]={2,3,7,21,11};
int target=9;
System.out.println(Arrays.toString(twoSum(array,target)));


}

}