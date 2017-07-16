import java.io.InputStreamReader;
import java.io.BufferedReader;

/* Example: how to read from input with the BufferedReader class */
public class BufferedReaderTest {
	public static void main(String[] argv) throws Exception {
		InputStreamReader keybord = new InputStreamReader(System.in);
		BufferedReader buffer = new BufferedReader(keybord);
		System.out.println(buffer.readLine());
	}
}
