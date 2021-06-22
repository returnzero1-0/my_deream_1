public class DataTypes
{
  public static void main(String args[])
  {
    boolean b=true; // 1-bit

    byte by=10; // -128 to 127 | 1-byte
    short sh=100; // -32,768 to 32,767 | 2-byte
    int in=10000; // (-2^31) to (2^31 -1) | 4-byte
    long lo=100000; // (-2^63) to (2^63 -1) | 8-byte

    float flo=2.5f; // floating point single precision 32 bit | 4-byte
    double dou=324.543; // double precision 64 bit | 8-byte

    char letter='A'; // 2-byte

    System.out.println(b);
    System.out.println(by);
    System.out.println(sh);
    System.out.println(in);
    System.out.println(lo);
    System.out.println(flo);
    System.out.println(dou);

  }
}
