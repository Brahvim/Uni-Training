import java.util.ArrayList;
import java.util.Arrays;

public class ArraySubsetsRecursive {

	public static ArrayList<ArrayList<Integer>> attempt2(

			final int p_start,
			final ArrayList<Integer> p_temp,
			final ArrayList<Integer> p_array,
			final ArrayList<ArrayList<Integer>> p_result

	) {
		if (p_start >= p_array.size()) {

			p_result.add(p_temp);
			return p_result;

		}

		p_temp.add(p_array.get(p_start));
		ArraySubsetsRecursive.attempt2(p_start + 1, p_temp, p_array, p_result);
		p_array.removeLast(); // p_array.remove(p_array.size() - 1);
		ArraySubsetsRecursive.attempt2(p_start + 1, p_temp, p_array, p_result);

		return p_result;
	}

	public static void main(final String... p_args) {
		final var arrTemp = new ArrayList<Integer>();
		final var arrResults = new ArrayList<ArrayList<Integer>>();
		final var arr = new ArrayList<Integer>(Arrays.asList(5, 6, 7));

		final var result = ArraySubsetsRecursive.attempt2(0, arrTemp, arr, arrResults);

		for (final ArrayList<Integer> l : result) {

			System.out.print("[ ");

			for (final int i : l) {

				System.out.printf("%d ", i);

			}

			System.out.println("]");

		}
	}

}
