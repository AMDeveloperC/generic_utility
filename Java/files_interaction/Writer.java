import java.io.File;
import java.io.PrintStream;

/* Example: how to write in a file by using the PrintStream class */
public class Writer {
	public static void main(String[] argv) throws Exception {
		File usFile = new File("nome.txt");
		PrintStream usPs = new PrintStream(usFile);
		usPs.println("Stringa da scrivere nel file");
	}
}
