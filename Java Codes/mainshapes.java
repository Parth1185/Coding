import shapes.Circle;
import shapes.Rectangle;

public class MainShapes {
    public static void main(String[] args) {
        Circle circle = new Circle();
        Rectangle rectangle = new Rectangle();
        double circleArea = circle.area(5);
        System.out.println("Area of Circle: " + circleArea);
        double rectangleArea = rectangle.area(10, 20);
        System.out.println("Area of Rectangle: " + rectangleArea);
    }
}
