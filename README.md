# Project-in-C-Littlehelp-Health Project- Bloodbank- health Predictor- project on C- pointers ,files In depth topics
Note: See this preview in "code" Format. in github
                 *********group Project :- Year 2023************
Team Members:
 1. Thota Sravya Vardhani
 2. Mohammad Mussarat nazia
---> Language - C -100%
---> Topics in C used : Pointers ,Files and other basics of c
---> 2473 lines of code 
This Project is my 2nd year prepared one Named as "Little help"
and this Project consists of
Excluding "Login Page / Register Page" - Login and Register details will be in Files named "Web_reg.txt"-________ -------- sravya5() - Login page -----------__________
Note:_________________________ only give new username or passwd while Register dont give already their content in file "Web_reg.txt" ____________________

                *********
6 modules for :
1. Blood banks details -  sravya() and sravya2() 
2. Health Risk Assessment  - sravya7() - Files topic used - data stored in file-"  user_data.txt  ".
3. Eligibility for blood transmiision - sravya3()
4. Baby bloodgroup Predictor - sravya4()
5. Eligibility to donate blood - sravya6()
6. Exit
----------------------------------------------------------------------------------------------------------------------------------------------
1.Blood banks details: This was in code in ******* sravya() and sravya2() ******* using these 2 we done below
          In this "ANDHRAPRADESH" - All Districts Blood caenters details are their (In the Year - 2023 Before Districts count Increased by govt)
          1. Anantapur
          2. Chittor
          3. East Godavari
          4. Guntur
          5. Krishna
		      6. Kurnool
          7. Prakasam
          8. Srikakulam
          9. Sri Potti Sriramulu Nellore
          10. Visakhapatnam
          11. Vizianagaram
          12. West Godavari
          13. Y.S.R
        -> Based on users need we will take Needed Blood Type-A+,A-....
        -> Then based on that we ask user to select district, next
        -> we will show the blood center Details entire in that district 
         ----------------Note:  They are
                    1. Blood Bank name
                    2. All blood types no of units is their in that blood center
                    3. And the blood type we mentioned units inthat bank
                    4. ADDRESS of that Blood bank
                    5. EMAIL ADDRESS of that Blood bank
                    6. PHONE NUMBER of that blood bank

2. Health Risk Assessment: $$$$$$$$ Data the user enter here stored in file- user_data.txt $$$$$$$$$$$
          In this Assessment From user we will take some of his health details like
                            1. Name
                            2. Age
                            3. BMI (Weight)
                            4. Smoke
                            5.Exercise
                            6.Diet
                            7. Stress
                            8. Sleep
                            9. Alcohol
                            10. Family History of heart attck
                            11. Hypertension
                            12. Diabetes
                            13. Physical Activity
                            14. Gender
         -> And finally we will display his health Risk % - Risk Score
         -> based on that we will inform him to consult doctor or health checkup or he is healthy
 
   3. Eligibility for blood transmiision :
         In this we will take ----> Donar Blood Group
                              ----> recepient(receiver) Blood Group
         from user.
          -> so that we can predict AND say him whether they can exchage blood or not
          Based on this ,
          ____________________________________________
	        |   Blood   |      Gives     |    Accepts  |
	        |-----------|----------------|-------------|
	        |    O-     |      ALL       |     O-      |
	        |    O+     | AB+,A+,B+,O+   |   O-,O+     |
	        |    A-     | AB-,AB+,A+,A-  |   O-,A-     |
          |    A+     |     AB+,A+     | O-,O+,A-,A+ |
	        |    B-     | B-,B+,AB-,AB+  |   O-,B-     |
	        |    B+     |    B+,AB+      | O-,O+,B+,B- |
	        |    AB-    |    AB-,AB+     | O-,AB-,A-,B-|
	        |    AB+    |   B+,AB+       |     ALL     |
          --------------------------------------------
      
      4.  Baby bloodgroup Predictor :
                          This is based on  " Landsteiner Theory "....
                         -> We will take ------ Father Blood Group
                                         ------ Mother Blood Group
                             _________________________________________________________-
                            -----------------Mother Blood Group-----------------------
                           +________________________________________________________+
	                       F |   Blood   |     O     |     A    |     B    |     AB   |
	                       a |-----------|-----------|----------|----------|----------|
                               t |    O      |     O     |  A or O  |  B or O  |  A or B  |
                 	       h |    A      |   A or O  |  A or O  | AB, A, B | AB, A, B |
	                       e |    B      |   B or O  | AB,A,B,O |  B or O  | AB, A, B |
	                       r |    AB     |   A or B  | AB, A, B | AB, A, B | AB, A, B |
	                         +--------------------------------------------------------+
        
      5. Eligibility to Donate Blood :
             -> This takes some User Health and Personal matters
             like ... 1. Any Thyroid, Malaria, Aids
                      2. Past Tattoos..
                      3. Rescent already given blood
         ................. and so on
        
      6. Exit : To exit from Output Console or Window -------------
        
