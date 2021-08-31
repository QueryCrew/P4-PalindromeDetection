
import java.util.*;

class GFG {
	public static void main (String[] args) {
		int num=12321;
		
		//we'll reverse the given number and compare it with original number
		//if both are equal then it is a palindrome, else not
		int reverse_num=0;
		int n=num;
		while(n!=0){
		    //taking numbers from last
		    int last=n%10;
		    //adding last numbers to reverse number
		    reverse_num=reverse_num*10+last;
		    //removing last element so that next element can be retrieved 
		    n/=10;
		}
		if(num==reverse_num){
		    System.out.println("True");
		}
		else{
		    System.out.println("False");
		}
	}
}
