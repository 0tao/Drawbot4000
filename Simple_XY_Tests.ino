void simpleXY(){
  
  x0 = int((pow(w,2)-pow(R,2)+pow(L,2))/(2*w));
  y = sqrt(pow(R,2)-pow(x0,2));
  Serial.println("x0 =  ");
  Serial.println(x0);
  Serial.println("GAP GAP GAP");
  Serial.println("GAP GAP GAP");
  Serial.println("GAP GAP GAP");
  Serial.println("GAP GAP GAP");
  Serial.println("GAP GAP GAP");
  Serial.println("GAP GAP GAP");
  Serial.println("y =  ");
  Serial.println(y);
  RM.step(10, BACKWARD, INTERLEAVE);
  R+=1;
  LM.step(10, FORWARD, INTERLEAVE);
  L+=1;
  while(y>310){
      RM.step(10, FORWARD, INTERLEAVE);
      R-=1;
      LM.step(10, BACKWARD, INTERLEAVE);
      L-=1;
  }
  
  
  

 
  
  /*
  int choice = int(random(10));////////////////////////////////LEFT DOWN
  LM.step(choice, FORWARD, INTERLEAVE);
  L+=choice;
  
  Serial.println(x0);
  while(L>=200){
    LM.step(1, BACKWARD, INTERLEAVE);
    L-=1;
    
    Serial.println(x0);
  }

  int choice2 = int(random(10)); ////////////////////////////////LEFT UP
  LM.step(choice2, BACKWARD, INTERLEAVE);
  L-=choice2;
  
  Serial.println(x0);
  while(L<=0){
    LM.step(1, FORWARD, INTERLEAVE);
    L+=1;
  
    Serial.println(x0);
  }

  int choice3 = int(random(10));////////////////////////////////RIGHT DOWN
  RM.step(choice3, BACKWARD, INTERLEAVE);
  R=choice3;
  Serial.println(x0);
  while(R>=200){
    RM.step(1, BACKWARD, INTERLEAVE);
    R+=1;
    
    Serial.println(x0);
  }

  int choice4 = int(random(10));////////////////////////////////RIGHT UP
  RM.step(choice4, FORWARD, INTERLEAVE);
  R+=choice4;
 
  Serial.println(x0);
  while(R>=200){
    RM.step(1, FORWARD, INTERLEAVE);
    R-=1;
    
    Serial.println(x0);
  } 
  */
}
