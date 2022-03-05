class esercizio {

  public static boolean checkPrimo(int n){
    int app=0;
    
    for(int i=2;i<n;i++){
     	app=n%i;
     	if(app==0){
     		return false;
      }
    } 
      
      return true;
  }


  public static void main(String[] args){

    System.out.println(checkPrimo(10));
  }
}