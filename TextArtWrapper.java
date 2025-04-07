import java.util.*; 
import java.io.*;

public class TextArtWrapper{
  public static void main(String[] args) thros FileNotFoundException{
    File target = new File("textArt.txt");
    Scanner fileScan = new Scanner(target);
    while(fileScan.hasNextLine()){
      System.out.println("DigiKeyboard.println(\"" + fileScan.NextLine() + "\");");
    }
  }
}
