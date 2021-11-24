import processing.serial.*;  
Serial myPort;   

PImage imgBG1;
PImage imgBG2;

void setup()
{
  size(1075,450);
  background(0);
  imgBG1=loadImage("1.png");
  imgBG2=loadImage("2.png");
  
  myPort =new Serial(this,"COM9",9600); 
}

void draw()
{
  while(myPort.available()>0)          
  {
    char inByte =myPort.readChar();            
    switch(inByte)
    {
      case 'a':     
          image(imgBG2,0,0);
            break;
      case 'b':
      image(imgBG1,0,0);
      default:break;
    }
  }
}
