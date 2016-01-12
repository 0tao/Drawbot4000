void LeftSideUpLineShapes(){


  lineGapRand = int(random(lineGap)); //choose random 0 1 2 3 
  lateralLengthRand = int(random(lateralLength)); //choose random 0 1 2 3 
  int numLines = int(random(13));

  for(int i=0;i<numLines;i++){
    LM.step(lineGapRand, BACKWARD, INTERLEAVE); 
    L-=lineGapRand;
///////////////////////////////////////////////
    RM.step(lateralLengthRand,BACKWARD,INTERLEAVE);
    R+=lateralLengthRand;
///////////////////////////////////////////////
    LM.step(lineGapRand,BACKWARD, INTERLEAVE);
    L-=lineGapRand;
///////////////////////////////////////////////
    RM.step(lateralLengthRand,FORWARD,INTERLEAVE);
    R-=lateralLengthRand;
///////////////////////////////////////////////

  }

}
