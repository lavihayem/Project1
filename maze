#include <cstdio>

2.#include <chrono>

3.#include <thread>

4. 

5.const int MazeHeight = 9;

6.const int MazeWidth = 9;

7. 

8.char Maze[MazeHeight][MazeWidth + 1] =

9.{

10.    "####### #",

11.	"#       #",

12.	"# #######",

13.	"# ##### #",

14.	"#       #",

15.	"####### #",

16.	"  ##### #",

17.	"#       #",

18.	"#########",

19.};

20. 

21.const char Wall = '#';

22.const char Free = ' ';

23.const char SomeDude = '*';

24. 

25.class COORD

26.{

27.public:

28.    int X;

29.    int Y;

30.    COORD(int x = 0, int y = 0) { X = x, Y = y; }

31.    COORD(const COORD &coord) { X = coord.X; Y = coord.Y; }

32.};

33. 

34.COORD StartingPoint(0,7);

35.COORD EndingPoint(6,0);

36. 

37.void PrintMaze()

38.{

39.    for (int Y = 0; Y < MazeHeight; Y++)

40.    {

41.        printf("%s\n", Maze[Y]);

42.    }

43.    printf("\n");

44.}

45. 

46.bool Solve(int X, int Y)

47.{

48.    // Make the move (if it's wrong, we will backtrack later.

49.    Maze[Y][X] = SomeDude;

50. 

51.    PrintMaze();

52.    std::this_thread::sleep_for(std::chrono::milliseconds(50));

53. 

54.    // Check if we have reached our goal.

55.    if (X == EndingPoint.X && Y == EndingPoint.Y)

56.    {

57.        return true;

58.    }

59. 

60.    // Recursively search for our goal.

61.    if (X > 0 && Maze[Y][X - 1] == Free && Solve(X - 1, Y))

62.    {

63.        return true;

64.    }

65.    if (X < MazeWidth && Maze[Y][X + 1] == Free && Solve(X + 1, Y))

66.    {

67.        return true;

68.    }

69.    if (Y > 0 && Maze[Y - 1][X] == Free && Solve(X, Y - 1))

70.    {

71.        return true;

72.    }

73.    if (Y < MazeHeight && Maze[Y + 1][X] == Free && Solve(X, Y + 1))

74.    {

75.        return true;

76.    }

77. 

78.    // Otherwise we need to backtrack and find another solution.

79.    Maze[Y][X] = Free;

80. 

81.    PrintMaze();

82.    std::this_thread::sleep_for(std::chrono::milliseconds(50));

83.    return false;

84.}

85. 

86.int main()

87.{

88.    if (Solve(StartingPoint.X, StartingPoint.Y))

89.    {

90.        PrintMaze();

91.    }

92.    else

93.    {

94.        printf("Something is wrong\n");

95.    }

96. 

97.    return 0;

98.}

