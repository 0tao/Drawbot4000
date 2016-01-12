void testXYboundaries(){
  if(y>=lowerYlimit){
    RM.step(lateralLengthRand, FORWARD, INTERLEAVE); 
    R-=lateralLengthRand;
    LM.step(lateralLengthRand, BACKWARD, INTERLEAVE);
    L-=lateralLengthRand;
  }
    if(y<=upperYlimit){
    RM.step(lateralLengthRand, BACKWARD, INTERLEAVE); 
    R+=lateralLengthRand;
    LM.step(lateralLengthRand, FORWARD, INTERLEAVE);
    L+=lateralLengthRand;
  }
   if(x0<=leftLimit){
    RM.step(lateralLengthRand, FORWARD , INTERLEAVE); 
    R-=lateralLengthRand;
  }
  if(x0>=rightLimit){
    LM.step(lateralLengthRand,BACKWARD, INTERLEAVE);
    L-=lateralLengthRand;
  }
}

 
