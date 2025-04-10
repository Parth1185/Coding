import java.util.Stack;

public class PostfixEvaluation {
    public static void main(String[] args) {
        Stack<Integer> num = new Stack<>();
        String s = "10 20 + 30 20 * 10 / -";
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                if (num.size() < 2) {
                    System.out.println("Invalid expression");
                    return;
                }

                int second = num.pop();
                int first = num.pop();

                switch (ch) {
                    case '+':
                        num.push(first + second);
                        break;
                    case '-':
                        num.push(first - second);
                        break;
                    case '*':
                        num.push(first * second);
                        break;
                    case '/':
                        if (second != 0) {
                            num.push(first / second);
                        } else {
                            System.out.println("Division by zero error");
                            return;
                        }
                        break;
                }
            } else if (Character.isDigit(ch)) {
                int numValue = 0;
                while (i < s.length() && Character.isDigit(s.charAt(i))) {
                    numValue = numValue * 10 + (s.charAt(i) - '0');
                    i++;
                }
                i--; 
                num.push(numValue);
            }
        }

        if (num.size() == 1) {
            System.out.println("Result: " + num.pop());
        } else {
            System.out.println("Invalid expression");
        }
    }
}
