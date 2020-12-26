public  class Testing  {  

    public int findDuplicate(int[] nums) {
      int array[]=new int [nums.length+1];
     
      for(int i=0;i<nums.length;i++){
         array[ nums[i]]++;
         if(array[nums[i]]>1){
          return nums[i];
         }

      }
      return -1;

        
    }


   public static void main(String[] args) throws IOException{  
    UltraFast uf=new UltraFast();
    Testing m =new Testing();
    int nums[]={ 1, 3, 4, 2, 2};
    System.out.println( m.findDuplicate(nums ));


    }
}