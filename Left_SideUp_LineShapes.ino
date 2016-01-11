void LeftSideUpLineShapes(){


  int zizzo = int(random(lineGap)); //choose random 0 1 2 3 
  int zizzo2 = int(random(randoLength)); //choose random 0 1 2 3 
  int numLines = int(random(13));

  for(int i=0;i<numLines;i++){
    testBoundaries();
    LM.step(zizzo, BACKWARD, INTERLEAVE); 
    L-=zizzo;
    ////zizzo test for all limits//////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
  if(y>=lowerYlimit){
    RM.step(zizzo, FORWARD, INTERLEAVE); 
    R-=zizzo;
    LM.step(zizzo, BACKWARD, INTERLEAVE);
    L-=zizzo;
  }
    if(y<=upperYlimit){
    RM.step(zizzo, BACKWARD, INTERLEAVE); 
    R-=zizzo;
    LM.step(zizzo, FORWARD, INTERLEAVE);
    L-=zizzo;
  }

   if(x0<=leftLimit){
    RM.step(zizzo, FORWARD , INTERLEAVE); 
    R-=zizzo;
  }
  
  if(x0>=rightLimit){
    LM.step(zizzo,BACKWARD, INTERLEAVE);
    L-=zizzo;
  }
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    RM.step(zizzo2,FORWARD,INTERLEAVE);
    R-=zizzo2;
    ////zizzo test for all limits//////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
  if(y>=lowerYlimit){
    RM.step(zizzo2, FORWARD, INTERLEAVE); 
    R-=zizzo2;
    LM.step(zizzo2, BACKWARD, INTERLEAVE);
    L-=zizzo2;
  }
    if(y<=upperYlimit){
    RM.step(zizzo2, BACKWARD, INTERLEAVE); 
    R-=zizzo2;
    LM.step(zizzo2, FORWARD, INTERLEAVE);
    L-=zizzo2;
  }

   if(x0<=leftLimit){
    RM.step(zizzo2, FORWARD , INTERLEAVE); 
    R-=zizzo2;
  }
  
  if(x0>=rightLimit){
    LM.step(zizzo2,BACKWARD, INTERLEAVE);
    L-=zizzo2;
  }
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    LM.step(zizzo,BACKWARD, INTERLEAVE);
    L-=zizzo;
    ////zizzo test for all limits//////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
  if(y>=lowerYlimit){
    RM.step(zizzo, FORWARD, INTERLEAVE); 
    R-=zizzo;
    LM.step(zizzo, BACKWARD, INTERLEAVE);
    L-=zizzo;
  }
    if(y<=upperYlimit){
    RM.step(zizzo, BACKWARD, INTERLEAVE); 
    R-=zizzo;
    LM.step(zizzo, FORWARD, INTERLEAVE);
    L-=zizzo;
  }
   if(x0<=leftLimit){
    RM.step(zizzo, FORWARD , INTERLEAVE); 
    R-=zizzo;
  }
  
  if(x0>=rightLimit){
    LM.step(zizzo,BACKWARD, INTERLEAVE);
    L-=zizzo;
  }
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    RM.step(zizzo2,BACKWARD,INTERLEAVE);
    R+=zizzo2;
    ////zizzo test for all limits//////////////
///////////////////////////////////////////////
///////////////////////////////////////////////
  if(y>=lowerYlimit){
    RM.step(zizzo2, FORWARD, INTERLEAVE); 
    R-=zizzo2;
    LM.step(zizzo2, BACKWARD, INTERLEAVE);
    L-=zizzo2;
  }
    if(y<=upperYlimit){
    RM.step(zizzo2, BACKWARD, INTERLEAVE); 
    R-=zizzo2;
    LM.step(zizzo2, FORWARD, INTERLEAVE);
    L-=zizzo2;
  }

   if(x0<=leftLimit){
    RM.step(zizzo2, FORWARD , INTERLEAVE); 
    R-=zizzo2;
  }
  
  if(x0>=rightLimit){
    LM.step(zizzo2,BACKWARD, INTERLEAVE);
    L-=zizzo2;
  }
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  }




}

