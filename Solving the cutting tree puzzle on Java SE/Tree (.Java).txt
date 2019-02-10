
package tree;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class cuttingTree {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int k=0; // Tree amount
        
        System.out.print("Type the amount of tree(s): ");
        k = scan.nextInt(); //getting the tree amount
        System.out.print("\n");
        
        int a[] = new int[k]; //Tree array
       
        for (int i = 0; i < k; i++) {
            System.out.print("Type the height of the "+(i+1)+"th: ");
            a[i] = scan.nextInt();
            System.out.print("\n");
        }
        List list = new ArrayList();
        for (int i = 0; i < k; i++) {
            boolean verify = true;
            if (i != k - 1) {
                for (int j = 0; j < k - 1; j++) {
                    if (j + 1 == i) {
                        if (a[j] > a[j + 2]) {
                            verify = false;
                            break;
                        }
                    } else if (j > i || j < i) {
                        if (a[j] > a[j + 1]) {
                            verify = false;
                            break;
                        }
                    }
                }
            } else {
                for (int j = 0; j < k - 1; j++) {
                    if (j + 1 < i) {
                        if (a[j] > a[j + 1]) {
                            verify = false;
                            break;
                        }
                    }
                }
            }
            if (verify) {
                list.add(i + 1);
            }
        }
        System.out.print("Exists " + list.size() + " way(s) to cut, making non-decreasing");
        if (!list.isEmpty()) {
            System.out.print("Cut the tree on the position: ");
            for (int i = 0; i < list.size(); i++) {
                if (i == 0) {
                    System.out.print(list.get(i));
                } else {
                    System.out.print(" or " + list.get(i));
                }
            }
        }
        System.out.print("\n");
    }
}
