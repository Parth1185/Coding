/*
 * Exception handling-->error in java runtime environment
 try-->code which we want to monitor for exceptions
 catch-->code to handle the exception
 throw-->throw an exception manually
 throws-->propagates exception from one class to another class
 finally-->when we have to run code always even if it gives an exception
 */

// try{

// }
// catch(exceptionType1 ex){

// }
// catch(exceptionTypen ex){

// }
// finally{

// }

/*
                                Throwable
                    Error                           Exception
                                            Unchecked          Checked


unchecked-->it is not compulsory to handle the exception
checked-->it is compulsory to handle if not then the program will not be compiled if there is an exception

                                          Exception-->parent class
                                / 
                Unchecked category              \             \
                               /                 \             \
                    Run time exc.                IO exc        ClassNotFound exc
                    |->Arithmetic exc
                    |->ArrayIndexOutOfBound
                    |->NullPointer exc
                
 */

import java.util.InputMismatchException;
import java.util.Scanner;

class Except {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);

        try {
            a = sc.nextInt();
            b = sc.nextInt();
            c = a / b;
            System.out.println("this will not execute");
        } 
        catch (InputMismatchException ex) {
            a = b = c = -3;
            System.out.println(a + " " + b + " " + c);

        } 
        catch (ArithmeticException ex) {
            a = b = c = -2;
            System.out.println(a + " " + b + " " + c);
        }
         catch (Exception ex) {
            a = b = c = -1;
            System.out.println(a + " " + b + " " + c);
        }
        // if we move this catch block just after the try block it will give compile time error
        // Always make catch block by hierachial order
        // child will be on top
        finally {
            sc.close();
            System.out.println("this will always execute");
        }
    }
}

// 1.

// import java.util.Scanner;

// public class BasicExceptionHandling {
// public static void main(String[] args) {
// Scanner scanner = new Scanner(System.in);

// try {
// System.out.print("Enter the first integer: ");
// int num1 = scanner.nextInt();

// System.out.print("Enter the second integer: ");
// int num2 = scanner.nextInt();

// int result = num1 / num2; // This may throw ArithmeticException

// System.out.println("Result: " + result);
// } catch (ArithmeticException e) {
// System.out.println("Error: Division by zero is not allowed.");
// } catch (InputMismatchException e) {
// System.out.println("Error: Please enter valid integers.");
// } finally {
// scanner.close();
// }
// }
// }

// 2.
/*
 * import java.util.Scanner;
 * 
 *  class MultipleExceptionsHandling {
 * public static void main(String[] args) {
 * Scanner scanner = new Scanner(System.in);
 * int[] numbers = {10, 20, 30};
 * 
 * try {
 * System.out.print("Enter a number as a string: ");
 * String input = scanner.next();
 * 
 * int num = Integer.parseInt(input); // May throw NumberFormatException
 * System.out.println("Converted number: " + num);
 * 
 * System.out.print("Enter an index to access: ");
 * int index = scanner.nextInt();
 * 
 * System.out.println("Element at index " + index + ": " + numbers[index]); //
 * May throw ArrayIndexOutOfBoundsException
 * 
 * } catch (NumberFormatException e) {
 * System.out.println("Error: Invalid number format.");
 * } catch (ArrayIndexOutOfBoundsException e) {
 * System.out.println("Error: Index out of bounds.");
 * } finally {
 * scanner.close();
 * }
 * }
 * }
 */

// 3.
/*
 * import java.util.Scanner;
 * 
 *  class ExceptionHandlingWithFinally {
 * public static void main(String[] args) {
 * Scanner scanner = new Scanner(System.in);
 * 
 * try {
 * System.out.print("Enter the first integer: ");
 * int num1 = scanner.nextInt();
 * 
 * System.out.print("Enter the second integer: ");
 * int num2 = scanner.nextInt();
 * 
 * int result = num1 / num2; // May throw ArithmeticException
 * 
 * System.out.println("Result: " + result);
 * } catch (ArithmeticException e) {
 * System.out.println("Error: Division by zero is not allowed.");
 * } catch (java.util.InputMismatchException e) {
 * System.out.println("Error: Please enter valid integers.");
 * } finally {
 * System.out.println("Execution completed.");
 * scanner.close();
 * }
 * }
 * }
 */