import java.util.Scanner;
class Result {
  static Node addListNumbers(Node head1, Node head2) {
 Node newhead=null;
    Node curr=null;
    Node p = head1, q = head2;
    int carry = 0;
    while (p != null || q != null) {
        int x = (p != null) ? p.data : 0;
        int y = (q != null) ? q.data : 0;
        int sum = carry + x + y;
        carry = sum / 10;
      Node newnode=new Node(sum%10);
      if(newhead==null)
      {
        newhead=newnode;
        newnode.next=null;
        curr=newhead;
      }
      else
      {
        curr.next=newnode;
        curr=curr.next;
      }
        if (p != null) p = p.next;
        if (q != null) q = q.next;
    }
    if (carry > 0) {
        curr.next = new Node(carry);
    }
    return newhead;
}
}

class Node {
  int data;
  Node next;
  Node(){}
  Node(int d) {
    data=d;
  }
}

class Main {
  static Node insertEnd(Node head, int data) {
    Node newLink = new Node(data);
    Node last = head;
    newLink.next = null;   // link new node to NULL as it is last node
    if (head == null)  // if list is empty add in beginning.
    {
      head = newLink;
      return head;
    }
    while (last.next != null)  // Find the last node
      last = last.next;
    last.next = newLink;  // Add the node after the last node of list
    return head;
  }

  static void forwardPrint(Node head)   {
    Node current = head; // start at beginning of list
    while(current != null) // until end of list,
    {
      System.out.print(current.data + " "); // print data
      current = current.next; // move to next link
    }
  }

  public static void main(String[] args) {
    int t,n,m,x;
    Scanner s = new Scanner(System.in);
    t=Integer.parseInt(s.nextLine().trim());
    while(t>0) {
      Node head = null, head2=null, t1;
      n = s.nextInt();
      while(n>0) {
        m = s.nextInt();
        head = insertEnd(head, m);
        n--;
      }
      n = s.nextInt();
      while(n>0) {
        m = s.nextInt();
        head2 = insertEnd(head2, m);
        n--;
      }
      t1 = Result.addListNumbers(head, head2);
      forwardPrint(t1);
      System.out.println();
      t--;
    }
  }
}
