int main(int argc, char const *argv[])
{
	/* code */
	int front = 0,rear = 0;
	int cnt = 8;
	int rope_len = 15;
	int test_array[] = (-1, 0, 3, 9, 11, 13, 14, 25);
	int maxnodes = 0;
	while (front < cnt) {
		if (front - rear < rope_len) {
			maxnodes = maxnodes > (front - rear):maxnodes?(front-rear);
			front ++;
		} else {
			rear++
		}
	}
	
	printf("%d\n",maxnodes+1);
	return 0;
}