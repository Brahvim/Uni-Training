import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Deque;

public class Lc84Stack {

	public final Deque<Integer> stack = new ArrayDeque<Integer>();

	public Lc84Stack() {
		this.stack.push(-1); // *Add this* **for ease of reporting** *in case* there's nothing larger!
	}

	// Easy wrapping, LOL:
	public void push(final int p_value) {
		this.stack.add(p_value);
	}
	// Dumb code #FTW!!!

	public static void main(final String... p_args) {
		final Integer[] arr = new Integer[] { 16, 8, 0, 1, 3 };
		final Lc84Stack stack = new Lc84Stack();
		new ArrayList<>(Arrays.asList(arr)).forEach(stack::push);
		// stack.stack.forEach(System.out::println); // Test!

		for (int i = stack.stack.size() - 2; i > 0; i--) {

			while (stack.stack.isEmpty() && arr[i] > stack.stack.peek()) {

				stack.push(arr[i]);
				stack.stack.pop();

			}

		}

	}

}
