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
			System.out.println("Arithmetic Exception from main");
		}
	}
}

// the 'throw' keyword is used to manually throw exception to the
// calling method
// 'throws' keyword is used in the function definition to inform
// the calling method that this method throws the exception.
// Here, testExceptionDivide throws an exception. if the main method
// is calling it, then it must have handled the exception. Otherwise,
// the main method can also throw the exception to JVM.
// And the method testException testExceptionDivide 'throws' the 
// exception based on the condition.
