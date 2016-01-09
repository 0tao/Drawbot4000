void RightSideDownLineShapes(){
     
  int zizzo = int(random(lineGap)); //choose random 0 1 2 3 
  int zizzo2 = int(random(randoLength)); //choose random 0 1 2 3 
  int numLines = int(random(13));
  
for(int i=0;i<numLines;i++){
    RM.step(zizzo, BACKWARD, INTERLEAVE); 
    R+=zizzo;
    //testBoundaries();
    LM.step(zizzo2,FORWARD,INTERLEAVE);
    L+=zizzo2;
    //testBoundaries();
    RM.step(zizzo,BACKWARD, INTERLEAVE);
    R-=zizzo;
    //testBoundaries();
    LM.step(zizzo2,BACKWARD,INTERLEAVE);
    L+=zizzo2;
    //testBoundaries();
}


}
