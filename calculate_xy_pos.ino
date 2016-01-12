void calculateXYpos(){
  x0 = int((pow(w,2)-pow(R,2)+pow(L,2))/(2*w)); //calculate the left hand side x cartesicoordinate
  y = sqrt(pow(R,2)-pow(x0,2)); // this calculates the y cartesian coordinate

}

