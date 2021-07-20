public class StringEqualParts
{
  public static void main(String args[])
  {
    String name="DhavalshreeK";


    int leng=name.length();

    int num=4, chart=leng/num;
    int le=0;


    if(leng%num!=0)
    {
      System.out.println("Sorry bhia maaf karo ");
    }
    else
    {
      char [] prts=name.toCharArray();


      for(int i=0;i< leng;i++)
      {
        if(i%chart==0 && i!=0)
        {
          System.out.println();
        }


          System.out.print(name.charAt(i));


        }
        System.out.println();


  }
}
}
