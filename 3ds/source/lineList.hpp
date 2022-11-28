class line {
	public:
		float startX, endX, startY, endY;
	  
		line (float x1, float y1, float x2, float y2) {
			startX = x1;
			endX = x2;
			startY = y1;
			endY = y2;
		}
};

const line* linelist[] = {
	new line(0, 200, 160, 180),
	new line(160, 180, 250, 80),
	new line(0, 80, 100, 200),
	new line(250, 100, 100, 200),
	new line(250, 52, 340, 50),
	new line(0, 200, 0, 0),
	new line(340, 50, 350, 0),
	new line(350, 0, 0, 0)
};

const int levelEnd[] = {
	8,
	8
};

const int levelStart[] = {
	0,
	1
};

const float bounds[][4] = {
	{
		0,
		0,
		4000,
		3000
	},
	{
		0,
		0,
		350,
		200
	}
};

const float startPos[][2] = {
	{
		50,
		124.3
	},
	{
		50,
		124.3
	}
};

const float endPoint[][2] = {
	{
		315,
		25
	},
	{
		315,
		25
	}
};