class FileHandling{
    public static void main(String[] args){
        //for creating new file
        // File file1 = new File("D:/demo1.txt");
        // try{
        //     file1.createNewFile();
        // }
        // catch(Exception exc){
        //     System.out.println(exc);
        // }

        String data = "This is my file content.";

        try{
            FileOutputStream file1OutputStream = new FileOutputStream("D:/Coding/demo.txt");
            file1OutputStream.write(data.getBytes());
            file1OutputStream.close();
            System.out.println("\t\t\t\tOperation Successful :)");

            //Reading Operation
            FileInputStream file1InputStream = new FileInputStream("D:/Coding/demo.txt");
            int i;
            while((i = file1InputStream.read()) != -1){
                System.out.print((char)i + "  ");
            }
        }

        catch(Exception exc){
            System.out.println(exc);
        }
    }
}

