import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;

public class Lc84Stack extends ArrayDeque<Integer> { // Easy wrapping! Dumb code #FTW!!!

	public Lc84Stack() {
		super.push(-1); // *Add this* **for ease of reporting** *in case* there's nothing larger!
	}

	public static void main(final String... p_args) {
		final Lc84Stack st = new Lc84Stack();
		// stack.forEach(System.out::println); // Test!
		new ArrayList<>(Arrays.asList(new Integer[] { 16, 8, 0, 1, 3 })).forEach(st::push);
		final int[] arr = new int[st.size()];

		for (int i = st.size() - 2; i > 0; i--) {

			while (!st.isEmpty() && arr[i] < st.peek()) {

				st.push(arr[i]);

			}

			st.pop();

			if (st.isEmpty()) {

				arr[i] = -1;

			} else {

				arr[i] = st.peek();

			}

		}

		st.forEach(System.out::println);
	}

}
