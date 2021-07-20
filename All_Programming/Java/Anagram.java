import java.util.Arrays;

public class Anagram
{
  public static void main(String args[])
  {
    String str1="race", str2="care";

    if(str1.length()==str2.length())
    {
      char[] ana1=str1.toCharArray();
      char[] ana2=str2.toCharArray();

      Arrays.sort(ana1);
      Arrays.sort(ana2);

      if(Arrays.equals(ana1,ana2)==true)
      {
        System.out.println("Anagram hai");
      }
      else
      {
        System.out.println("Anagram nahi hai");

      }
  

    }
    else
    {
      System.out.println("Not Anagram at all");
    }

  }
}
