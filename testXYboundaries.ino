void testXYboundaries(){
  x0 = int((pow(w,2)-pow(R,2)+pow(L,2))/(2*w)); //calculate the left hand side x cartesicoordinate
  y = sqrt(pow(R,2)-pow(x0,2)); // this calculates the y cartesian coordinate
  
  if(y>=lowerYlimit){   // pen is below the bottom boundary move back up
    RM.step(lateralLengthRand, FORWARD, INTERLEAVE);     
    R-=lateralLengthRand;
    LM.step(lateralLengthRand, BACKWARD, INTERLEAVE);
    L-=lateralLengthRand;
  }
    if(y<=upperYlimit){ // if pen is above the upper border move back down
    RM.step(lateralLengthRand, BACKWARD, INTERLEAVE); 
    R+=lateralLengthRand;
    LM.step(lateralLengthRand, FORWARD, INTERLEAVE);
    L+=lateralLengthRand;
  }
   if(x0<=leftLimit){ //if pen is left of the border move to the right
    RM.step(lateralLengthRand, FORWARD , INTERLEAVE); 
    R-=lateralLengthRand;
  }
  if(x0>=rightLimit){ // if pen is right of the limit move to the left
    LM.step(lateralLengthRand,BACKWARD, INTERLEAVE);
    L-=lateralLengthRand;
  }
}

 
