void LeftSideUpLineShapes(){
  
  
   int zizzo = int(random(lineGap)); //choose random 0 1 2 3 
  int zizzo2 = int(random(randoLength)); //choose random 0 1 2 3 
  int numLines = int(random(13));
  
for(int i=0;i<numLines;i++){
    LM.step(zizzo, BACKWARD, INTERLEAVE); 
    L+=zizzo;
    //testBoundaries();
    RM.step(zizzo2,FORWARD,INTERLEAVE);
    R+=zizzo2;
    //testBoundaries();
    LM.step(zizzo,BACKWARD, INTERLEAVE);
    L-=zizzo;
    //testBoundaries();
    RM.step(zizzo2,BACKWARD,INTERLEAVE);
    R+=zizzo2;
   // testBoundaries();
}




}
