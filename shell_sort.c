void shellsort(int *array, int first, int last)
{
	int step;
	int len = strlen(array);

	for (step = len/2; step>0; step = step/2) {
		for (j = step; j < n; j++) {
			if (array[j] < array[j-step]) {
				int k = j - step;
				int temp = array[j];

				while (k>=0 && array[j] < array[k]) {
					array[j] = array[k];
					k -= step;
				}
				array[k+step] = temp;
			}
		}
	}
}