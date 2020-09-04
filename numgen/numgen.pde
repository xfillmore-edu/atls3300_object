// generate and store random values within window range
// assumes window size 800 x 400

int val;
PrintWriter exportDocx;
PrintWriter exportDocy;

void setup()
{
  // open x and y coordinate text files to write into
  exportDocx = createWriter("xcoords.txt");
  exportDocy = createWriter("ycoords.txt");
}

void draw()
{
  for (int i = 0; i < 100; i++)
  {
    // generate random x coordinate between 5 and 795
    val = floor(random(790)) + 5;
    exportDocx.println(val);
    
    // generate random y coordinate between 5 and 395
    val = floor(random(390)) + 5;
    exportDocy.println(val);
  }
  //delay(1000);
  //exit();
}
