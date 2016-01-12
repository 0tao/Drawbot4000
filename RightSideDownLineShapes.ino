void RightSideDownLineShapes(){

  
  lineGapRand = int(random(lineGap)); //choose random 0 1 2 3 
  lateralLengthRand = int(random(lateralLength)); //choose random 0 1 2 3 
  int numLines = int(random(13));

  for(int i=0;i<numLines;i++){
    RM.step(lineGapRand, BACKWARD, INTERLEAVE); 
    R+=lineGapRand;
/////////////////////////////////////////////////////////
    LM.step(lateralLengthRand,FORWARD,INTERLEAVE);
    L+=lateralLengthRand;
/////////////////////////////////////////////////////////////
    RM.step(lineGapRand,BACKWARD, INTERLEAVE);
    R+=lineGapRand;
//////////////////////////////////////////////////////////
LM.step(lateralLengthRand,BACKWARD,INTERLEAVE);
    L-=lateralLengthRand;
  }


}

