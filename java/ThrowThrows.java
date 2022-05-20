public class ThrowThrows {
	
	public static int testExceptionDivide(int a, int b) throws ArithmeticException{
		if(a == 0 || b == 0)
			throw new ArithmeticException();
		return a/b;
	}
	
	public static void main (String[] args) {
		try{
			testExceptionDivide(10, 0);
		}
		catch(ArithmeticException e){
			System.out.println("Arithmetic Exception");
		}
	}
}

