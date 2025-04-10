import java.io.*;
import java.util.Scanner;

// class April8 {
//     public static void main(String[] args) {
//         // Create a File object pointing to the desired path
//         File file1 = new File("D:/Coding/demo.txt");

//         try {
//             boolean isFileCreated = file1.createNewFile();

//             if (isFileCreated)
//                 System.out.println("File is created");
//             else
//                 System.out.println("File already exists");
//         } catch (IOException exception) {
//             System.out.println(" Error: " + exception);
//         }

//         // Print file information
//         System.out.println("File name       : " + file1.getName());
//         System.out.println("File path       : " + file1.getAbsolutePath());
//         System.out.println("File size       : " + file1.length() + " bytes");
//         System.out.println("Writable        : " + file1.canWrite());
//         System.out.println("Readable        : " + file1.canRead());
//         System.out.println("Is directory?   : " + file1.isDirectory());
//     }
// }

// import java.io.*;
// class April8{
//     public static void main(String[] args) {

//         File file1 = new File("D:/Coding/demo.txt");        //if no folder is there, then it shows error (java.io.IOException: The system cannot find the path specified)

//         try{
//         boolean isdeleted = file1.delete();

//         if(isdeleted) System.out.println("File is deleted");
//         else System.out.println("File not deleted");

//         }

//         catch(Exception exception){
//             System.out.println(exception);
//         }      
//     }
// }

// import java.io.*;
// class April8{
//     public static void main(String[] args) {

//         File file1 = new File("D:/Coding/Directory1");

//         try{
//         boolean isCreated = file1.mkdir();

//         if(isCreated) System.out.println("Directory Created");
//         else System.out.println("Not Created");

//         }

//         catch(Exception exception){
//             System.out.println(exception);
//         }      
//     }
// }

// import java.io.*;
// class April8{
//     public static void main(String[] args) {

//         File file1 = new File("D:/Coding/Directory1/Directory2/Directory3");

//         try{
//         boolean isCreated = file1.mkdirs();

//         if(isCreated) System.out.println("Directory Created");
//         else System.out.println("Not Created");

//         }

//         catch(Exception exception){
//             System.out.println(exception);
//         }

//         System.out.println("Is directory?   : " + file1.isDirectory());

//     }
// }

// import java.io.*;
// class April8{
//     public static void main(String[] args) {

//         File file1 = new File("D:/Web_Development");

// try{
// String names[] = file1.list();
// for(String name : names) System.out.println(name);
// }
// catch(Exception exception){
//     System.out.println(exception);
// }
//     }
// }

// import java.io.*;
// import java.util.Scanner;

// class April8 {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter Path of Directory : ");
//         String path = sc.nextLine();
//         File file1 = new File(path);

//         try {
//             File[] files = file1.listFiles(); 
//             for (File file : files) {         
//                 if (file.isFile()) {          
//                     System.out.println(file.getName());
//                 }
//             }
//         } catch (Exception exception) {
//             System.out.println(exception);
//         }
//     }
// }

// public class FileHandling {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter directory path: ");
//         String path = sc.nextLine();
//         File directory = new File(path);

//         int fileCount = 0;
//         int dirCount = 0;

//         try {
//             if (directory.exists() && directory.isDirectory()) {
//                 File[] contents = directory.listFiles();

//                 if (contents != null) {
//                     for (File f : contents) {
//                         if (f.isFile()) {
//                             fileCount++;
//                         } else if (f.isDirectory()) {
//                             dirCount++;
//                         }
//                     }

//                     System.out.println("\nDirectory: " + path);
//                     System.out.println("Number of files      : " + fileCount);
//                     System.out.println("Number of directories: " + dirCount);
//                 } else {
//                     System.out.println("Could not read contents of the directory.");
//                 }
//             } else {
//                 System.out.println("The path is not a directory or does not exist.");
//             }
//         } catch (Exception e) {
//             System.out.println("Error: " + e.getMessage());
//         }
//     }
// }

// class FileHandling{
//     public static void main(String[] args){
//         //for creating new file
//         // File file1 = new File("D:/demo1.txt");
//         // try{
//         //     file1.createNewFile();
//         // }
//         // catch(Exception exc){
//         //     System.out.println(exc);
//         // }

//         String data = "This is my file content. ";

//         try{

//             // FileOutputStream file1OutputStream = new FileOutputStream("D:/Coding/demo.txt");     //it overrided the content of file, content got overwritten
//             FileOutputStream file1OutputStream = new FileOutputStream("D:/Coding/demo.txt", true);        //here content of the file will be appended after the old content

//             file1OutputStream.write(data.getBytes());
//             file1OutputStream.close();
//             System.out.println("\n\t\t\tOperation Successful :) \n");

//             //Reading Operation
//             FileInputStream file1InputStream = new FileInputStream("D:/Coding/demo.txt");
//             int i;
//             while((i = file1InputStream.read()) != -1){
//                 System.out.print((char)i + " ");
//             }
//         }

//         catch(Exception exc){
//             System.out.println(exc);
//         }
//     }
// }

// class FileHandling{
//     public static void main(String[] args) {
//         String data = "This is my file content. ";
//         try{

//             BufferedOutputStream outputStream = new BufferedOutputStream(new FileOutputStream("D:/Coding/demo.txt"));
//             outputStream.write(data.getBytes());
//             outputStream.flush();
//             outputStream.close();

//             BufferedInputStream inputStream = new BufferedInputStream(new FileInputStream("D:/Coding/demo.txt"));
//             int i;
//             while((i = inputStream.read()) != -1){
//                 System.out.print((char) i + " ");
//             }
//             inputStream.close();
//         }

//         catch(Exception exc){
//             System.out.println(exc);
//         }
//     }
// }

// class FileHandling {
//     public static void main(String[] args) {
//         String data = "This is my file content. ";

//         // Unbuffered Write & Read
//         try {
//             long startTime = System.currentTimeMillis();

//             FileOutputStream fos = new FileOutputStream("D:/Coding/unbuffered.txt", true); // appending
//             fos.write(data.getBytes());
//             fos.close();

//             FileInputStream fis = new FileInputStream("D:/Coding/unbuffered.txt");
//             int i;
//             System.out.println("\nUnbuffered Read:");
//             while ((i = fis.read()) != -1) {
//                 System.out.print((char) i + "");
//             }
//             fis.close();

//             long endTime = System.currentTimeMillis();
//             System.out.println("\nUnbuffered Time: " + (endTime - startTime) + " ms");
//         } catch (Exception exc) {
//             System.out.println("Unbuffered Error: " + exc);
//         }

//         // Buffered Write & Read
//         try {
//             long startTime = System.currentTimeMillis();

//             BufferedOutputStream bufferedoutputstream = new BufferedOutputStream(new FileOutputStream("D:/Coding/buffered.txt", true)); // appending
//             bufferedoutputstream.write(data.getBytes());
//             bufferedoutputstream.flush();
//             bufferedoutputstream.close();

//             BufferedInputStream bufferedinputstream = new BufferedInputStream(new FileInputStream("D:/Coding/buffered.txt"));
//             int i;
//             System.out.println("\nBuffered Read:");
//             while ((i = bufferedinputstream.read()) != -1) {
//                 System.out.print((char) i + "");
//             }
//             bufferedinputstream.close();

//             long endTime = System.currentTimeMildlis();
//             System.out.println("\nBuffered Time: " + (endTime - startTime) + " ms");
//         } catch (Exception exc) {
//             System.out.println("Buffered Error: " + exc);
//         }
//     }
// }

// class FileHandling{
//     public static void main(String[] args) {
//         try{

//             String data = "This is the content of my file. ";
//             FileWriter fileWriter = new FileWriter("D:/Coding/demo1.txt");
//             fileWriter.write(data);
//             fileWriter.close();

//             FileReader fileReader = new FileReader("D:/Coding/demo1.txt");
//             int i;
//             while((i=fileReader.read()) != -1){
//                 System.out.print((char) i + " ");
//             }
//             fileReader.close();
//         }

//         catch (Exception exc){
//             System.out.println(exc);
//         }
//     }
// }

// class FileHandling{
//     public static void main(String[] args) {
//         try{

//             BufferedWriter bw = new BufferedWriter(new FileWriter("D:/Coding/demo1.txt"));
//             bw.write("This is the first line of my content. ");
//             bw.newLine();
//             bw.write("This is the second line of my content. ");
//             bw.close();

//             BufferedReader br = new BufferedReader(new FileReader("D:/Coding/Demo1.txt"));
//             String line;
//             while ((line = br.readLine()) != null){
//                 System.out.print(line + "\n");
//             }
//         }

//         catch (Exception exc){
//             System.out.println(exc);
//         }
//     }
// }

class FileHandling {
    public static void main(String[] args) {
        int vowelCount = 0;
        int lineCount = 0;

        try {
            BufferedReader br = new BufferedReader(new FileReader("D:/Coding/demo1.txt"));
            String line;

            while ((line = br.readLine()) != null) {
                lineCount++;
                for (int i = 0; i < line.length(); i++) {
                    char ch = Character.toLowerCase(line.charAt(i));
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                        vowelCount++;
                    }
                }
            }

            br.close();

            System.out.println("Total number of lines: " + lineCount);
            System.out.println("Total number of vowels: " + vowelCount);
        }

        catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
