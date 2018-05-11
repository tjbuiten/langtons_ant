// Start of the functional code
int main()
{
	// Variables
	const int cells = 10;
	int grid[cells][cells];
	int direction = 0;
	int antX = cells / 2;
	int antY = cells / 2;

	// Initialize the grid
	for (int x = 0; x < cells; x++)
		for (int y = 0; y < cells; y++)
			grid[x][y] = 0;

	// Let the ant move while he stays within the boundaries of our screen;
	while (antX > 0 && antX < cells && antY > 0 && antY < cells) {
		// Check if the current cell is white or black and move accordingly
		if (grid[antX][antY] == 1) {
			grid[antX][antY] = 0;
			switch (direction) {
			case 0:
				antY--;
				direction = 1;
				break;
			case 1:
				antX++;
				direction = 3;
				break;
			case 2:
				antX--;
				direction = 0;
				break;
			case 3:
				antY++;
				direction = 2;
				break;
			}
		}
		else {
			grid[antX][antY] = 1;
			switch (direction) {
			case 0:
				antY++;
				direction = 2;
				break;
			case 1:
				antX--;
				direction = 0;
				break;
			case 2:
				antX++;
				direction = 3;
				break;
			case 3:
				antY--;
				direction = 1;
				break;
			}
		}
	}

	// End of the program
	return 0;
}