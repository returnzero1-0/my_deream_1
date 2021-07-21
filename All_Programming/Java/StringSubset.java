//import java.util.Math;

public class StringSubset
{
  public static void main(String args[])
  {
    String str="crow";

    int leng=str.length();

    char[] ch=str.toCharArray();
    System.out.println(leng);

    int count= power(2,leng);
    System.out.println(count);


  }
}

/*
i=0
c

i=1
r

i=2
o


i=3
w


i=4
cr


i=5


i=6


i=7



i=8



i=9

*/
