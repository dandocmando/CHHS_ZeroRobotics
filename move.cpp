//Begin page main
//Declare any variables shared between functions here
float yPos, xPos, zPos;
float startPosition[3];
float currentPosition[3];
float moveposition[1];
float attitude[3];
int counter;
void init(){
	//This function is called once when your code is first loaded.
	counter = 0;
    xPos = 0.0f;
    yPos = 0.0f;
    zPos = 0.0f;
    startPosition[0] = xPos;
    startPosition[1] = yPos;
    startPosition[2] = zPos;
    currentPosition[0] = 0.5f;
    currentPosition[1] = 0.5f;
    currentPosition[2] = 0.0f;
    moveposition[0] = 5.0f;
    attitude[0] = 1.0f;
    attitude[1] = 0.0f;
    attitude[2] = 0.0f;
	//IMPORTANT: make sure to set any variables that need an initial value.
	//Do not assume variables will be set to 0 automatically!
}

void loop(){
	//This function is called once per second.  Use it to control the satellite.
    api.setPositionTarget(startPosition);
    api.setAttitudeTarget(attitude);
    if(counter>30 && counter<60 ){
        api.setPositionTarget(moveposition);
       
    }
    
    DEBUG(("counter is at %0x", counter));
    counter++;
}
//End page main
