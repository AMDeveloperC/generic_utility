import java.io.File;
import java.util.Scanner;

/* Example: how to read from a file by using the Scanner class */
public class Reader {
	public static void main(String[] argv) throws Exception {
		File usFile = new File("nome.txt");
		Scanner sf = new Scanner(usFile);
		System.out.println(sf.nextLine());
	}
}
