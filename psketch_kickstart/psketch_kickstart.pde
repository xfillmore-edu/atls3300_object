import processing.pdf.*;

int pencilsize = 2;
String saveFile = "test.pdf";
String filePath = "C:/Users/xfill/Documents/Fa20_ATLS3300_Object/";
String exportFile = "sketchy.png";

void setup()
{
  size(400, 400); // define 400 x 400 px window
}

void draw(){}

void mouseDragged()
{
  beginRecord(PDF, saveFile);
  ellipse(mouseX, mouseY, pencilsize, pencilsize);
}

void mouseReleased()
{
  endRecord();
}

void keyPressed()
{
  if (key == 113)
  {
    save(filePath + exportFile);
    exit();
  }
}
