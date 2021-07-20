public class CountStringLength
{
  public static void main(String args[])
  {
    String str="Dhavalshree weds Khushboo";

    int count=0;

    int len_str=str.length();


    for(int i=0;i<len_str;i++)
    {
      if(str.charAt(i)==' ')
      {
        count=count;

      }
      else
      {
        count++;
      }

    }

    System.out.println(count);

  }
}
