// import java.util.*;
// import java.lang.annotation.*;

// @Retention(RetentionPolicy.RUNTIME)         //meta, as used by user defined
// @Target(ElementType.TYPE)       //for TYPE now we can apply   //only on class, interface or enum  //not applied on method     
// // @Target(ElementType.METHOD)  // for method, applied on variables and methods

// @interface  MyAnnotation{
//     int val1();
//     String val2();
// }
// //3 types: marker (it has no parameter), single value, multi-value
// @MyAnnotation(val1=100,val2="hello")
// class annotation {
//     public static void main(String[] args) {
//         Class<annotation> obj=annotation.class;
//         if(obj.isAnnotationPresent(MyAnnotation.class)){
//             MyAnnotation myAnnotation=obj.getAnnotation(MyAnnotation.class);
//             System.out.println(myAnnotation.val1());
//             System.out.println(myAnnotation.val2());
//         }
//         else{
//             System.out.println("Annotation not present");
//         }
//     }
// }






// import java.util.*;
// import java.lang.annotation.*;
// import java.lang.reflect.Method;

// @Retention(RetentionPolicy.RUNTIME)  
// @Target(ElementType.METHOD)    

// @interface  MyAnnotation{
//     int val1();
//     String val2();
// }

// class annotation {
//     @MyAnnotation(val1=100,val2="hello")

//     public void test(){

//     }

//     public static void main(String[] args) throws Exception{
//         Method m1 = annotation.class.getDeclaredMethod("test");

//         if(m1.isAnnotationPresent(MyAnnotation.class)){
//             MyAnnotation myAnnotation = m1.getAnnotation(MyAnnotation.class);
//             System.out.println(myAnnotation.val1());
//             System.out.println(myAnnotation.val2());
//         }
//         else{
//             System.out.println("Annotation not present");
//         }
//     }
// }


import java.util.*;
import java.lang.annotation.*;
import java.lang.reflect.Method;

@Retention(RetentionPolicy.RUNTIME)  
@Target(ElementType.TYPE)    
@Inherited  //annotations can not be inherited directly by default, they can be inherited by @Inherited keyword

@interface  MyAnnotation{
    int val1();
    String val2();
}

@MyAnnotation(val1=100,val2="hello")
class Parent{

}


class annotation {

    public void test(){

    }

    public static void main(String[] args) throws Exception{
        Method m1 = annotation.class.getDeclaredMethod("test");

        if(m1.isAnnotationPresent(MyAnnotation.class)){
            MyAnnotation myAnnotation = m1.getAnnotation(MyAnnotation.class);
            System.out.println(myAnnotation.val1());
            System.out.println(myAnnotation.val2());
        }
        else{
            System.out.println("Annotation not present");
        }
    }
}


