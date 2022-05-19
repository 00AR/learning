public class MultipleCatch {
	
	public static void main (String[] args) {
		try{
			int n=1000, x=0;
			int arr[] = new int[n];
			for(int i=0; i<=n; i++){
				arr[i]=i/x;
			}
		}
		catch(ArrayIndexOutOfBoundsException exception){
				System.out.println("1st block = ArrayIndexOutOfBoundsException");
		}
		catch(ArithmeticException exception){
				System.out.println("2nd block = ArithmeticException");
		}
		catch(Exception exception){
				System.out.println("3rd block = Exception");
		}
	}
}
/*
 second catch block executed division by 0. If x > 0 than first catch
 * would have executed because for runs till i=n and array index are 
 * till n-1.
 */
