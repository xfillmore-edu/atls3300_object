// import x and y coordinates from numgen txt files
// import an image from file
// use an array to move the image around
// change the size and color of the image
// load multiple shapes, images, or backgrounds

PImage bkd;
String [] xcoords;
String [] ycoords;
int xc, yc;
int counter = 0;

void setup()
{
  // use loadImage("filename.ext") to import images
  bkd = loadImage("lego_pumpkin.jpg");
  
  // load data from files
  xcoords = loadStrings("xcoords.txt");
  ycoords = loadStrings("ycoords.txt");
  
  size(663, 633);
  
}

void draw()
{
  //image(bkd, 0, 0, width, height); // stretches image ratio to match sketch window
  background(bkd); // sets named PImage as the background
  
  xc = int(xcoords[counter]);
  yc = int(ycoords[counter]);
    
  fill(#123456); // dark blue
  triangle(xc, yc, xc-10, yc-10, xc+10, yc-10);
    
  delay(1000); // wait 1 second before moving triangle again
  counter++;
  if (counter == 100) {exit();}

}

void keyPressed()
{
  if (key == 113) // on q press
  {
    exit();
  }
}
