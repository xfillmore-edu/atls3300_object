// import x and y coordinates from numgen txt files
// import an image from file
// use an array to move the image around
// change the size and color of the image
// load multiple shapes, images, or backgrounds

PImage bkd;

void setup()
{
  // use loadImage("filename.ext") to import images
  bkd = loadImage("lego_pumpkin.jpg");
  
  size(663, 633);
  
}

void draw()
{
  //image(bkd, 0, 0, width, height); // stretches image ratio to match sketch window
  background(bkd); // sets named PImage as the background
}
