void LeftSideDownLineShapes(){

  
  lineGapRand = int(random(lineGap)); //choose random 0 1 2 3 
  lateralLengthRand = int(random(lateralLength)); //choose random 0 1 2 3 
  int numLines = int(random(13));
  
  
////////////////////////////////////////////the below function move the bot around and test the boundaries
  for(int i=0;i<numLines;i++){
    LM.step(lineGapRand, FORWARD, INTERLEAVE); 
    L+=lineGapRand;
    testXYboundaries();
///////////////////////////////////////////////
    RM.step(lateralLengthRand,FORWARD,INTERLEAVE);
    R-=lateralLengthRand;
    testXYboundaries();
///////////////////////////////////////////////
    LM.step(lineGapRand,FORWARD, INTERLEAVE);
    L+=lineGapRand;
    testXYboundaries();
///////////////////////////////////////////////
    RM.step(lateralLengthRand,BACKWARD,INTERLEAVE);
    R+=lateralLengthRand;
    testXYboundaries();
///////////////////////////////////////////////
  }
}

