void LeftSideDownLineShapes(){
     
  int zizzo = int(random(2000)); //choose random 0 1 2 3 
  int zizzo2 = int(random(20)); //choose random 0 1 2 3 
  int numLines = int(random(13));
  
for(int i=0;i<numLines;i++){
    LM.step(zizzo, FORWARD, INTERLEAVE); 
    L+=zizzo;
    RM.step(zizzo2,BACKWARD,INTERLEAVE);
    R+=zizzo2;
    LM.step(zizzo,BACKWARD, INTERLEAVE);
    L-=zizzo;
    RM.step(zizzo2,BACKWARD,INTERLEAVE);
    R+=zizzo2;
}


}
