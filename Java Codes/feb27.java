import java.util.regex.Pattern;
import java.util.regex.Matcher;

// class feb27 {

//     public static boolean isValidEmail(String email) {
//         String emailRegex = "\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}\\b";
//         Pattern pattern = Pattern.compile(emailRegex);
//         Matcher matcher = pattern.matcher(email);
//         return matcher.matches();
//     }

//     public static void main(String[] args) {
//         String[] testEmails = {
//             "test@example.com", 
//             "my.email123@domain.co.in", 
//             "@example.com", 
//             "test@domain", 
//             "user@.com", 
//             "valid.email@domain.com"
//         };

//         for (String email : testEmails) {
//             if (isValidEmail(email)) {
//                 System.out.println(email + " is a valid email.");
//             } else {
//                 System.out.println(email + " is an invalid email.");
//             }
//         }
//     }
// }



// class feb27 {

//     public static void extractNumbers(String input) {
//         String numberRegex = "\\d+"; 
//         Pattern pattern = Pattern.compile(numberRegex);
//         Matcher matcher = pattern.matcher(input);

//         while (matcher.find()) {
//             System.out.println(matcher.group());
//         }
//     }

//     public static void main(String[] args) {
//         String input = "My phone number is 9876543210 and my PIN is 110092";
//         extractNumbers(input);
//     }
// }



// class feb27 {

//     public static boolean isValidMobileNumber(String number) {
//         String numberRegex = "\\b\\d{10}\\b";
//         Pattern pattern = Pattern.compile(numberRegex);
//         Matcher matcher = pattern.matcher(number);
//         return matcher.matches();
//     }

//     public static void main(String[] args) {
//         String[] testNumbers = {
//             "9876543210",
//             "9998887776",
//             "98765",
//             "98765432109",
//             "abcd123456"
//         };

//         for (String number : testNumbers) {
//             if (isValidMobileNumber(number)) {
//                 System.out.println(number + " is a valid mobile number.");
//             } else {
//                 System.out.println(number + " is an invalid mobile number.");
//             }
//         }
//     }
// }


// class feb27 {

//     public static boolean containsOnlyAlphabets(String input) {
//         String regex = "^[A-Za-z]+$";
//         Pattern pattern = Pattern.compile(regex);
//         Matcher matcher = pattern.matcher(input);
//         return matcher.matches();
//     }

//     public static void main(String[] args) {
//         String[] testStrings = {
//             "HelloWorld",
//             "Hello123",
//             "Java_Regex"
//         };

//         for (String str : testStrings) {
//             if (containsOnlyAlphabets(str)) {
//                 System.out.println(str + " Valid");
//             } else {
//                 System.out.println(str + " Invalid");
//             }
//         }
//     }
// }


// class feb27 {

//     public static void findCapitalWords(String input) {
//         String regex = "\\b[A-Z][a-z]*\\b";
//         Pattern pattern = Pattern.compile(regex);
//         Matcher matcher = pattern.matcher(input);

//         while (matcher.find()) {
//             System.out.println(matcher.group());
//         }
//     }

//     public static void main(String[] args) {
//         String sentence = "Rohit and Akash are learning Java in Chitkara University.";
//         findCapitalWords(sentence);
//     }
// }



class feb27 {
    public static String replaceMultipleSpaces(String input) {
        String regex = "\\s+";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(input);
        return matcher.replaceAll(" ");
    }

    public static boolean validatePassword(String password) {
        String regex = "^(?=.*[A-Z])(?=.*[a-z])(?=.*\\d)(?=.*[@#$%^&+=]).{8,}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(password);
        return matcher.matches();
    }

    public static boolean validateVehicleNumber(String vehicleNumber) {
        String regex = "^[A-Z]{2}\\d{2}[A-Z]{1,2}\\d{4}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(vehicleNumber);
        return matcher.matches();
    }

    public static boolean validateDateFormat(String date) {
        String regex = "^(0[1-9]|[12][0-9]|3[01])[-/](0[1-9]|1[0-2])[-/](\\d{4})$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(date);
        return matcher.matches();
    }
    public static void main(String[] args) {
        String input1 = "Java    is    fun   to    learn!";
        System.out.println("Replaced spaces: " + replaceMultipleSpaces(input1));

        String password1 = "Rohit@123";
        String password2 = "password";
        System.out.println("Password 'Rohit@123' valid: " + validatePassword(password1));
        System.out.println("Password 'password' valid: " + validatePassword(password2));

        String vehicle1 = "PB10AK1234";
        String vehicle2 = "P10AK1234";
        System.out.println("Vehicle 'PB10AK1234' valid: " + validateVehicleNumber(vehicle1));
        System.out.println("Vehicle 'P10AK1234' valid: " + validateVehicleNumber(vehicle2));

        String date1 = "12/02/2024";
        String date2 = "2023/12/01";
        System.out.println("Date '12/02/2024' valid: " + validateDateFormat(date1));
        System.out.println("Date '2023/12/01' valid: " + validateDateFormat(date2));
    }
}
