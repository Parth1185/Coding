class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

class Linked {
    Node head;

    // Insert at the beginning
    void insertAtBegin(int data) {
        Node nn = new Node(data);
        nn.next = head;
        head = nn;
    }

    // Insert at the end
    void insertAtEnd(int data) {
        Node nn = new Node(data);
        if (head == null) {
            head = nn;
            return;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = nn;
    }

    // Insert at a specific position
    void insertAtMiddle(int data, int position) {
        Node nn = new Node(data);
        if (position == 0) {
            insertAtBegin(data);
            return;
        }

        Node temp = head;
        int i = 0;
        while (i < position - 1 && temp != null) {
            temp = temp.next;
            i++;
        }

        if (temp == null) {
            System.out.println("Position out of bounds");
            return;
        }

        nn.next = temp.next;
        temp.next = nn;
    }

    // Delete from the beginning
    void deleteAtBegin() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        head = head.next;
    }

    // Delete from the end
    void deleteAtEnd() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        if (head.next == null) {
            head = null;
            return;
        }

        Node temp = head;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
    }

    // Delete from a specific position
    void deleteAtMiddle(int position) {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        if (position == 0) {
            deleteAtBegin();
            return;
        }

        Node temp = head;
        int i = 0;
        while (i < position - 1 && temp != null && temp.next != null) {
            temp = temp.next;
            i++;
        }

        if (temp == null || temp.next == null) {
            System.out.println("Position out of bounds");
            return;
        }

        temp.next = temp.next.next;
    }

    // Print the linked list
    void printList() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
}

public class Linked_List {
    public static void main(String[] args) {
        Linked list = new Linked();

        // Insertions
        list.insertAtBegin(10);
        list.insertAtBegin(20);
        list.insertAtEnd(30);
        list.insertAtEnd(40);
        list.insertAtMiddle(25, 2); // Insert 25 at position 2
        list.insertAtMiddle(5, 0);  // Insert 5 at the beginning

        System.out.println("Linked List after insertions:");
        list.printList();

        // Deletions
        list.deleteAtBegin(); // Delete from start
        list.deleteAtEnd();   // Delete from end
        list.deleteAtMiddle(2); // Delete element at position 2

        System.out.println("Linked List after deletions:");
        list.printList();
    }
}
