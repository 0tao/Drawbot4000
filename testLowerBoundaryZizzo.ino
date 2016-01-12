void testLowerBoundaryZizzo(){
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

*/
}
 
