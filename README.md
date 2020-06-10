# girlsintech
Approach used below is as follows −

    Input the coordinates as x1, x2, y1 and y2
    Apply the formula to compute the difference between two points
    Print the distance

Algorithm

Start
Step 1-> declare function to calculate distance between two point
   void three_dis(float x1, float y1, float x2, float y2)
      set float dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0)
      print dis
step 2-> In main()
   Set float x1 = 4
   Set float y1 = 5
   Set float x2 = 4
   Set float y2 = 10
   Call two_dis(x1, y1, x2, y2)
Stop
