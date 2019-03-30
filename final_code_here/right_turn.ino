/*
* Function Name:right_turn
* Input: Initial state 
* Output: None
* Logic: implementation for right turn at node.
* Example call : right_turn( state )
/*
/*###############################################################################################
 #################################################################################################
 ------------------       program for taking right turn           ---------------------*/


int  right_turn(int state )
{
  fwd_go = 11;
  turn_go = 00;
  flag_rgt = 0;
  while (flag_rgt !=3 )
  {
    sensor_data();
      if ( (state == 00)  && flag_rgt ==0 )
      { 
        if ((left >= 1 && center >= 1 && right >= 1) || (left >= 1 && center >= 1 && right >= 0) || (left >= 0 && center >= 1 && right >= 1) )
        {
          flag_rgt++;
          turn=00;
          state =01;//left motor
          cases(state);
          
        }
      }
      else if (state ==01 || flag_rgt == 0)
      {
          if (left >= 0 && center >= 1 && right >= 0)
          {
            flag_rgt = 3;
            state =00;//left motor
            cases(state);
          }
          else if  ((left >= 1 && center >= 3 && right >= 1) ||(left >= 1 && center >= 3 && right >= 0) )
          {
            state =01;//right motor
            cases(state);
          }
        
          else if((left >= 0 && center >= 3 && right >= 1) || (left >= 0 && center >= 0 && right >= 1) || (left >= 0 && center >= 0 && right >= 0) || (left >= 1 && center >= 0 && right >= 0)   || (left >= 1 && center >= 3 && right >= 0))
          {
            state = 01;//left motor
            cases(state);
          } 

      }
    }   
  
return state;  
}
/*-------------------- right turn function of the end here --------------------------------------*/





