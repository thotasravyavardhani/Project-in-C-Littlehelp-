#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int bg;
static int i=0;
struct web
{
char name[30],pass[30];
}w[1000];
int n;
void login(void);
void reg(void);
void reg(void);
sravya7()
 {
    char name[100];
    int age;
    float bmi;
    char smoker,exercise, diet[20],stress[20],sleep[20],alcohol[20],familyHistory,hypertension,diabetes,physicalActivity[20],gender[20]; 
    printf("\033[1;40m");
    printf("Health Risk Assessment:\n");
    printf("\033[0m");
    printf(" Analyze health parameters to assess an individual's risk for specific diseases or conditions.");
    printf("\n-> Enter your name: ");
    scanf("%s", name);
    printf("\n-> Enter your age: ");
    scanf("%d", &age);
    printf("\n-> Enter your Body Mass Index (BMI): ");
    scanf("%f", &bmi);
    printf("\n-> Are you a smoker? (Y/N): ");
    scanf(" %c", &smoker);
    printf("\n-> Do you exercise regularly? (Y/N): ");
    scanf(" %c", &exercise);
    printf("\n-> Do you follow a healthy diet? (Healthy/Unhealthy): ");
    scanf(" %s", diet);
    printf("\n-> Rate your stress levels (Low/Moderate/High): ");
    scanf(" %s", stress);
    printf("\n-> Rate your sleep quality (Good/Poor): ");
    scanf(" %s", sleep);
    printf("\n-> How often do you consume alcohol? (None/Light/Moderate/Heavy): ");
    scanf(" %s", alcohol);
    printf("\n-> Is there a family history of heart disease? (Y/N): ");
    scanf(" %c", &familyHistory);
    printf("\n-> Do you have hypertension? (Y/N): ");
    scanf(" %c", &hypertension);
    printf("\n-> Do you have diabetes? (Y/N): ");
    scanf(" %c", &diabetes);
    printf("\n-> Enter your gender (Male/Female): ");
    scanf(" %s", gender); // Read as string
    int riskScore = 0;
    if (age >= 45) riskScore += 2;
    if (bmi >= 30.0) riskScore += 3;
    if (smoker == 'Y' || smoker == 'y') riskScore += 4;
    if (exercise == 'N' || exercise == 'n') riskScore += 3;
    if (strcmp(diet, "Unhealthy") == 0) riskScore += 3;
    if (strcmp(stress, "High") == 0) riskScore += 3;
    if (strcmp(sleep, "Poor") == 0) riskScore += 2;
    if (strcmp(alcohol, "Heavy") == 0) riskScore += 3;
    if (familyHistory == 'Y' || familyHistory == 'y') riskScore += 2;
    if (hypertension == 'Y' || hypertension == 'y') riskScore += 2;
    if (diabetes == 'Y' || diabetes == 'y') riskScore += 2;
    if (strcmp(gender, "Female") == 0) riskScore += 1;
    FILE *userDataFile = fopen("user_data.txt", "a");
    if (userDataFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(userDataFile, "Name: %s\n", name);
    fprintf(userDataFile, "Age: %d\n", age);
    fprintf(userDataFile, "BMI: %.2f\n", bmi);
    fprintf(userDataFile, "Smoker: %c\n", smoker);
    fprintf(userDataFile, "Exercise: %c\n", exercise);
    fprintf(userDataFile, "Diet: %s\n", diet);
    fprintf(userDataFile, "Stress: %s\n", stress);
    fprintf(userDataFile, "Sleep: %s\n", sleep);
    fprintf(userDataFile, "Alcohol: %s\n", alcohol);
    fprintf(userDataFile, "Family History: %c\n", familyHistory);
    fprintf(userDataFile, "Hypertension: %c\n", hypertension);
    fprintf(userDataFile, "Diabetes: %c\n", diabetes);
    fprintf(userDataFile, "Physical Activity: %s\n", physicalActivity);
    fprintf(userDataFile, "Gender: %s\n", gender);
    fprintf(userDataFile, "Risk Score: %d\n", riskScore);
    fprintf(userDataFile, "\n");
    fclose(userDataFile);
    printf("\n\n");
    printf("\033[1;40m");
    printf("Risk Assessment:");
    printf("\033[0m");
    if (riskScore <= 3) printf("\nLow risk of health issues.");
    else if (riskScore <= 6) printf("\nModerate risk of health issues. Consult a healthcare professional.");
    else printf("\nHigh risk of health issues. Please see a doctor immediately.");
    return 0;
}
sravya6()
{
    char name[100];
    int age;
    float bmi;
    char smoker,disease, dent,stress[20],general,past,medicine,tattoo; 
    printf("\033[1;40m");
    printf("Eligibility for blood donation :\n");
    printf("\033[0m");
    printf("\n-> Enter your name: ");
    scanf("%s", name);
    printf("\n-> Enter your age: ");
    scanf("%d", &age);
    printf("\n-> Enter your Body Mass Index (BMI): ");
    scanf("%f", &bmi);
    printf("\n-> Taken cigar/alcohol in past 24hrs ? (Y/N): ");
    scanf(" %c", &smoker);
    printf("\n-> Do you suffer by any following health issues : \nRabies, Hepatitis-B, TB, Asthma, Allergic Disorders, Liverdiseases, Fits \n Heartdiseases, High B.P, Chest Pain, Blood clotting,higher weightloss (Y/N): ");
    scanf(" %c", &disease);
    printf("\n-> Had a dental work or taken Aspirin for past 72 hrs(Y/N): ");
    scanf(" %c", &dent);
    printf("\n-> Rate your Blood Pressure/ sugar (Low/Moderate/High): ");
    scanf(" %s", stress);
    printf("\n-> Suffering from cold, cough or sour throat, fever , fatigue(Y/N): ");
    scanf(" %c", &general);
    printf("\n->  Not donated blood/ suffered by malaria for past 3 Months? (Y/N): ");
    scanf(" %c", &past);
    printf("\n-> Not taken any antibiotics or any other medications or drugs for past 48 hours (Homeo, Allopathic , Ayurveda) ? (Y/N): ");
    scanf(" %c", &medicine);
    printf("\n-> Had a Tattoo ear / skin piercing/ acupuncture? (Y/N): ");
    scanf(" %c", &tattoo);
    printf("\n-> Note  :  Woman who are pregnant / feeding a baby / In Menstrual cycle are not allowed to donate blood." );
    int riskScore = 0;
    if (age < 18 && age >60) riskScore += 1;
    if (bmi < 45.0) riskScore += 1;
    if (smoker == 'Y' || smoker == 'y') riskScore += 1;
    if (disease == 'Y' || disease == 'y') riskScore += 1;
    if (dent=='Y' || dent =='y') riskScore += 1;
    if (strcmp(stress, "High") == 0) riskScore += 1;
    if (general=='Y' || general =='y') riskScore += 1;
    if (past == 'N' || past == 'n') riskScore += 1;
    if (medicine == 'N' || medicine == 'n') riskScore += 1;
    if (tattoo == 'Y' || tattoo == 'y') riskScore += 1;
    printf("\n\n");
    printf("\033[1;40m");
    printf("Risk Assessment:");
    printf("\033[0m");
    if (riskScore >= 1) printf("\nNot eligible to donate blood.");
    else printf("\nEligible to donate blood.");
system("pause");
system("cls");
printf("\n\n\n\t\t\t\t Who are Eligible to Donate Blood?:");
printf("\n\t\t\t\t==================================\n");
printf("\n\t-Any healthy adult, both male and female,can donate every three months.Good health of the donor must be fully ensured.The universally accepted ");
printf("criteria for donor selection are:");
printf("\n\n\t\t$ Age between 18 and 60 years");
printf("\n\n\t\t$ Haemoglobin - not less than 12.5 g/Dl");
printf("\n\n\t\t$ Pulse - between 50 and 100/minute with no irregularities");
printf("\n\n\t\t$ Blood Pressure -Systolic 100-180 mm Hg and Diastolic 50 - 100 mm Hg");
printf("\n\n\t\t$ Temperature - Normal (oral temperature not exceeding 37.50C");
printf("\n\n\t\t$ Body weight - not less than 45 Kg");
system("pause");
system("cls");
printf("\t\t\t\t Health Conditions:");
printf("\n\t\t\t\t==================\n");
printf("\n\t$ Past one year - not been treated for Rabies or received HepatitisB immuneglobulin.");
printf("\n\n\t$ Past six months - not had a tattoo, ear or skin piercing or acupuncture");
printf("\n\t  blood or blood products, no serious illness");
printf("\n\t  major surgery, no contact with a person with hepatitis or yellow jaundice.");
printf("\n\n\t$ Past three months - not donated blood or been treated for Malaria.");
printf("\n\n\t$ Past one month - not had any immunizations.");
printf("\n\n\t$ Past 48 hours - not taken any antibiotics or any other medications(Allopathic");
printf("\n\t  or Ayurvedada or Sidha or Homeo)");
printf("\n\n\t$ Past 24 hours - not taken alcoholic beverages");
printf("\n\n\t$ Past 72 hours - not had dental work or taken Aspirin");
printf("\n\n\t$ Present - not suffering from cough, influenza or sore throat, common cold");
printf("\n\n\t$ Women should not be pregnant or breast feeding her child");
printf("\n\n\t$ Women donor should not donate during her menstrual cycles");
printf("\n\n\t$ Free from Diabetes, not suffering from chest pain, heart disease or high BP,");
printf("\n\t  cancer,blood clotting problem or blood disease, unexplained fever, ");
printf("\n\t  weight loss, fatigue, nightsweats, enlarged lymph nodes in armpits");
printf("\n\n\t$ Ever had TB, bronchial asthma or allergic disorder, liver disease, ");
printf("\n\t  mucous membranes, received human pituitarykidney disease, fits or fainting,");
printf("\n\t - growth hormones  blue or purple spots on the skin or etc .");
system("pause");
system("cls");
}
sravya5()
{
system("cls");
XY:
printf("\n\n\t\t\t\t     WELCOME");
printf("\n\n\t\t\t1. LOGIN\t\t2. REGISTER");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
scanf("%d",&n);
switch(n)
  {
case 1: system("cls");
    login();
    break;
case 2: system("cls");
        reg();
        break;
    default: printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getch()==13)
        system("cls");
        goto XY;
  }
  return 0;
}
void reg()
  {
    FILE *fp;
    char c,checker[30]; int z=0;
    fp=fopen("Web_reg.txt","ab+");
    printf("\n\n\t\t\t\tWELCOME TO REGISTER ZONE");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");
    for(i=0;i<100;i++)
    {
      printf("\n\n\t\t\t   ENTER USERNAME: ");
      scanf("%s",checker);
        while(!feof(fp))
        {
          fread(&w[i],sizeof(w[i]),1,fp);
          if(strcmp(checker,w[i].name)==0)
            {
            printf("\n\n\t\tUSERNAME ALREDY EXISTS");
            system("cls");
            reg();
            }
          else
          {
            strcpy(w[i].name,checker);
            break;
          }
        }
      printf("\n\n\t\t\t  DESIRED PASSWORD: ");
      while((c=getch())!=13)
        {
          w[i].pass[z++]=c;
          printf("%c",'*');
        }
      fwrite(&w[i],sizeof(w[i]),1,fp);
      fclose(fp);
      printf("\n\n\tPress enter if you agree with Username and Password");
      if((c=getch())==13)
        {
        system("cls");
        printf("\n\n\t\tYou are successfully registered");
        printf("\n\n\t\tTry login your account??\n\n\t\t  ");
        printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");
        scanf("%d",&n);
        switch(n)
          {
              case 1: system("cls");
                    login();
                    break;
              case 2: system("cls");
                    printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING");
                    break;
          }
        }
        break;
      }
    getch();
  }
  void login()
    {
      FILE *fp;
      char c,name[30],pass[30]; int z=0;
      int checku,checkp;
      fp=fopen("Web_reg.txt","rb");
      printf("\n\n\t\t\t\tWELCOME TO LOG IN ZONE");
      printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^");
      for(i=0;i<1000;i++)
      {
        printf("\n\n\t\t\t  ENTER USERNAME: ");
        scanf("%s",name);
        printf("\n\n\t\t\t  ENTER PASSWORD: ");
        while((c=getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
      while(!feof(fp))
        {
        fread(&w[i],sizeof(w[i]),1,fp);
          checku=strcmp(name,w[i].name);
          checkp=strcmp(pass,w[i].pass);
          if(checku==0&&checkp==0)
          {
            system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
            break;
          }
        else if(checku==0&&checkp!=0)
          {
            printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??",name);
            printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
            if(getch()=='y'||getch()=='Y')
              login();
          }
        else if(checku!=0)
          {
            printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPress enter to register yourself");
            if(getch()==13)
            system("cls");
            reg();
          }
        }
        break;
      }
      getch();
}
sravya4()
{
	int p1,p2;
	printf("\n\n\t\t\t\tIntroduction :");
	printf("\n\t\t\t\t==============\n");
	printf("\n\n$ Blood type is inherited. Like eye color, blood type is passed genetically from your parents or Grand Parents. Whether your blood group is type A, B, AB or O is based on the blood types of your mother/grandmother and father/grand father. ");
	printf("\n\n$ Let's Check upto one generation means from our parents blood type how our blood group get's decided.");
	printf("\n\n$ --NOTE--: This was based on karl Landsteiner theory. karl Landsteiner is the person who also discovered the ABO blood groups");
    system("pause");
	system("cls");
	printf("\n\n\n\n\n\t\t\t----Blood Groups----\n\n");
	printf("\n\t\t\t1. O \n\t\t\t2. A \n\t\t\t3. B\n\t\t\t4. AB ");
	printf("\n\n\t\t\tParent-1/ Father blood group :");
	scanf("%d",&p1);
	printf("\n\n\t\t\tParent-2/ Mother blood group :");
	scanf("%d",&p2);
	if(p1==1 && p2==1)
	printf("\n\t\t\t$ Child blood group might be : O \n");
	else if((p1==1 && p2==2) || (p1==2 && p2==1))
	printf("\n\t\t\t$ Child blood group might be : O or A \n");
	else if((p1==1 && p2==3) || (p1==3 && p2==1))
	printf("\n\t\t\t$ Child blood group might be : O or B \n");
	else if((p1==1 && p2==4) || (p1==4 && p2==1))
	printf("\n\t\t\t$ Child blood group might be : A or B \n");
	else if(p1==2 && p2==2)
	printf("\n\t\t\t$ Child blood group might be : O or A \n");
	else if((p1==2 && p2==3) || (p1==3 && p2==2))
	printf("\n\t\t\t$ Child blood group might be : O or AB or A or B \n");
	else if((p1==2 && p2==4) || (p1==4 && p2==2))
	printf("\n\t\t\t$ Child blood group might be : A or B or AB \n");
	else if(p1==3 && p2==3)
	printf("\n\t\t\t$ Child blood group might be : O or B ");
	else if((p1==3 && p2==4) || (p1==4 && p2==3))
	printf("\n\t\t\t$ Child blood group might be : A or B or AB \n");
	else if(p1==4 && p2==4)
	printf("\n\t\t\t$ Child blood group might be : A or B or AB \n");
	else
	printf("\n\t\t\t$ No such record is in our data\n");
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\t\tReference :\n");
	printf("\n\t\t   -----------------Mother Blood Group-----------------------");
	printf("\n\t\t  | __________________________________________________________");
	printf("\n\t\t  F |   Blood   |     O     |     A    |     B    |     AB   |");
	printf("\n\t\t  a |-----------|-----------|----------|----------|----------|");
	printf("\n\t\t  t |    O      |     O     |  A or O  |  B or O  |  A or B  |");
	printf("\n\t\t  h |    A      |   A or O  |  A or O  | AB, A, B | AB, A, B |");
	printf("\n\t\t  e |    B      |   B or O  | AB,A,B,O |  B or O  | AB, A, B |");
	printf("\n\t\t  r |    AB     |   A or B  | AB, A, B | AB, A, B | AB, A, B |");
	printf("\n\t\t  | +--------------------------------------------------------+\n");
	system("pause");
	system("cls");
    }
sravya3()
{
	char donorBloodGroup[4],recipientBloodGroup[4];
    printf("\n\n\n\n\t\t\tCheck Whether eligible for blood transmission or not :");
    printf("\n\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\n\t\t\tDonor's blood group (e.g., A+, B-, AB+, O+....): ");
    scanf("%s", donorBloodGroup);
    printf("\n\t\t\tRecipient's blood group (e.g., A+, B-, AB+, O+...): ");
    scanf("%s", recipientBloodGroup);
    if (strcmp(donorBloodGroup, "A+") == 0 || strcmp(donorBloodGroup, "A-") == 0) {
        if (strcmp(recipientBloodGroup, "A+") == 0 || strcmp(recipientBloodGroup, "AB+") == 0 ||
            strcmp(recipientBloodGroup, "A-") == 0 || strcmp(recipientBloodGroup, "AB-") == 0) 
            printf("\n\t\t\t --- Blood transmission is possible.\n");
		else 
            printf("\n\t\t\t --- Blood transmission is not possible.\n");
       }  else if (strcmp(donorBloodGroup, "B+") == 0 || strcmp(donorBloodGroup, "B-") == 0) {
        if (strcmp(recipientBloodGroup, "B+") == 0 || strcmp(recipientBloodGroup, "AB+") == 0 ||
            strcmp(recipientBloodGroup, "B-") == 0 || strcmp(recipientBloodGroup, "AB-") == 0) 
            printf("\n\t\t\t --- Blood transmission is possible.\n");
        else 
            printf("\n\t\t\t --- Blood transmission is not possible.\n");
    } else if (strcmp(donorBloodGroup, "AB+") == 0 || strcmp(donorBloodGroup, "AB-") == 0) {
        if (strcmp(recipientBloodGroup, "AB+") == 0) 
            printf("\n\t\t\t --- Blood transmission is possible.\n");
        else 
            printf("\n\t\t\t --- Blood transmission is not possible.\n");
    } else if (strcmp(donorBloodGroup, "O+") == 0 || strcmp(donorBloodGroup, "O-") == 0) {
        if (strcmp(recipientBloodGroup, "A+") == 0 || strcmp(recipientBloodGroup, "B+") == 0 ||
            strcmp(recipientBloodGroup, "AB+") == 0 || strcmp(recipientBloodGroup, "O+") == 0 ||
            strcmp(recipientBloodGroup, "A-") == 0 || strcmp(recipientBloodGroup, "B-") == 0 ||
            strcmp(recipientBloodGroup, "AB-") == 0 || strcmp(recipientBloodGroup, "O-") == 0) {
            printf("\n\t\t\t --- Blood transmission is possible.\n");
        } else 
            printf("\n\t\t\t --- Blood transmission is not possible.\n");
        
    } else 
        printf("\n\t\t\t --- Invalid blood group entered for the donor.\n");
    system("pause");
    system("cls");
	printf("Donor - A blood donor is someone who gives some of their blood so that it can be used in operations.\n");
	printf("Recepient - A blood recepient is a person who receives or accept blood from donors for any .\n");
	printf("Types of blood groups-- A -> A+, A-");
	printf("\n\t\t\tB -> B+, B-\n\t\t\tO -> O+,O-\n\t\t\tAB -> AB+,AB-");
	printf("\n ____________________________________________");
	printf("\n |   Blood   |      Gives     |    Accepts  |");
	printf("\n |-----------|----------------|-------------|");
	printf("\n |    O-     |      ALL       |     O-      |");
	printf("\n |    O+     | AB+,A+,B+,O+   |   O-,O+     |");
	printf("\n |    A-     | AB-,AB+,A+,A-  |   O-,A-     |");
	printf("\n |    A+     |     AB+,A+     | O-,O+,A-,A+ |");
	printf("\n |    B-     | B-,B+,AB-,AB+  |   O-,B-     |");
	printf("\n |    B+     |    B+,AB+      | O-,O+,B+,B- |");
	printf("\n |    AB-    |    AB-,AB+     | O-,AB-,A-,B-|");
	printf("\n |    AB+    |   B+,AB+       |     ALL     |");
	printf("\n --------------------------------------------\n");
	system("pause");
	system("cls");
	printf("\033[1;40m");
	printf("\t\t\t\t------RECEPIENTS-----\n");
	printf("\033[0m");
	printf("\033[1;37m");
	printf("\t\t\t\t          |\n");
	printf("\033[0m");
    printf("\033[1;37m");
	printf("--------------------------------------------------------------------------------------");
	printf("\033[0m");
	printf("\n |            |            |           |           |           |           |         |");
	printf("\n |            |            |           |           |           |           |         |");
	printf("\n A+           A -          B+          B -         O+          O -         AB+      AB-");
	printf("\n ^            ^            ^           ^           ^           ^           ^         ^");
	printf("\n |            |            |           |           |           |           |         |");
	printf("\n |            |            |           |           |           |           |         |");
	printf("\n A+           A -          B+          B -         O+          O -        All       AB-");
	printf("\n A-           O -          B-          O -         O-                               A -");
	printf("\n O+                        O+                                                       B -");
	printf("\n O-                        O -                                                      O -");
	printf("\n |            |            |           |           |           |           |         |");
	printf("\n--------------------------------------------------------------------------------------");
	printf("\n\t\t\t\t          |\n");
	printf("\033[1;40m");
	printf("\t\t\t\t--------DONARS-------\n");
	printf("\033[0m");	
	printf("\n");
	system("pause");
	system("cls");
}
void sravya2(abp,ap,bp,op,abn,an,bn,on,bg)
{
	printf("\n\n\ta. AB +ve - %d units\n\tb. A +ve - %d units\n\tc. B +ve - %dunits\n\td. O +ve - %dunits\n\te. O -ve - %dunits\n\tf. AB -ve - %dunits\n\tg. A -ve - %dunits\n\th. B -ve - %dunits\n\n",abp,ap,bp,op,on,abn,an,bn);
				if(bg == 1)
				printf("\n----AB +ve--- = %d units\n",abp);
				else if(bg==2)
				printf("\n----A +ve---- = %d units\n",ap);
				else if(bg==3)
				printf("\n----B +ve---- = %d units\n",bp);
				else if(bg==4)
				printf("\n----O +ve---- = %d units\n",op);
				else if(bg==5)
				printf("\n----O -ve---- = %d units\n",on);
				else if(bg==6)
				printf("\n----AB -ve---- = %d units\n",abn);
				else if(bg==7)
				printf("\n----A -ve---- = %d units\n",an);
				else if(bg==8)
				printf("\n----B -ve---- = %d units\n",bn);
				else 
				printf("\nSuch blood type is not in our records.\n");
}
void sravya()
{
	int area,abp,ap,bp,op,on,abn,an,bn;
		while(1)
			{
			printf("\n\t\t\tChoose your area : ");
			scanf("%d",&area);
			system("cls");
			printf("\n\n");
			printf("\033[1;40m");
			printf("\n\n\n\n\n\t\t\t----Blood Groups----");
			printf("\033[0m");
			printf("\n\n\n\t\t1. AB +ve\n\n\t\t2. A +ve\n\n\t\t3. B +ve\n\n\t\t4. O +ve\n\n\t\t6. O -ve\n\n\t\t5. AB -ve\n\n\t\t7. A -ve\n\n\t\t8. B -ve\n ");
			printf("\n\t\t\t Your blood group type : ");
			scanf("%d",&bg);
			system("cls");
			printf("\n");
			switch(area)
			{
				case 1: printf("\033[1;40m");
				printf("-----------Anantapur-----------");
				printf("\033[0m");
			{
				printf("\033[1;37m");
				printf("\n\n1. Gopi Charitable Blood Center :");
				printf("\033[0m");
				sravya2(abp=44,ap=6,bp=7,op=9,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No:14/13, Samsaripeta, Revenue Wardno. 14th, Kasspuram Road - Guntakal,Anantapur, Andhra Pradesh. \n");
				printf("\nEMAIL : Gopibloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9483733333\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Government General Hospital :");
				printf("\033[0m");
				sravya2(abp=12,ap=21,bp=12,op=15,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Dist H.Q. Hospital Premises, Ground floor, Anantapur, Andhra pradesh. \n");
				printf("\nEMAIL : bloodbankgghatp@gmail.com\n");
				printf("\nTELEPHONE : 8554275024\n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Chaitanya Blood Center :");
				printf("\033[0m");
				sravya2(abp=3,ap=2,bp=14,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/s Chaitanya Blood Bank(A unit of Chaitanya Youth Association),D.No. 12-3-347, 2nd floor, Dena bank building, Sai Nagar Main road, Ananthapuramu - 515001, Anantapur, Andhra Pradesh. \n");
				printf("\nEMAIL : chaitanyabloodbankatp@gmail.com\n");
				printf("\nTELEPHONE : 7095259536\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Seva Blood Center :");
				printf("\033[0m");
				sravya2(abp=1,ap=4,bp=14,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 2/309-6, 3rd floor, thirumala towers, Yellanuru Road Circle, Tadipatri, Anantapur, Andhra Pradesh. \n");
				printf("\nEMAIL : Sevabloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 9550728292\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Area Hospital - Guntakal :");
				printf("\033[0m");
				sravya2(abp=2,ap=2,bp=18,op=15,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/S APVVP Area Hospital Blood Center, Guntakal, Anantapur, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbankahgtl@gmail.com\n");
				printf("\nTELEPHONE : 9160100310\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6. Deepu Blood center :");
				printf("\033[0m");
				sravya2(abp=4,ap=10,bp=18,op=6,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Deepu blood center, 12- 2- 946, Sainagar 2nd cross, opp to SBI main branch, Anantapur, Andhra Pradesh. \n");
				printf("\nEMAIL : Deepubloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9866924249\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
				{
				printf("\033[1;36m");
				printf("7. Indian Red Cross Soceity Blood center Anantapur:");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : District Branch, Govt. Medical College Hospital Building, near JNTU College, Anantapur, Andhra Pradesh. \n");
				printf("\nEMAIL : ircsbloodbank.anantapur@gmail.com\n");
				printf("\nTELEPHONE : 9440285749\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
				break;
				case 2: printf("\033[1;40m");
				printf("-----------Chittoor-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Pes Blood Center :");
				printf("\033[0m");
				sravya2(abp=3,ap=5,bp=9,op=11,abn=0,an=1,bn=1,on=1,bg);
				printf("\nADDRESS : PES medical college and hospital, Nalgampally, Kuppam Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbank@pesimr.pes.edu@gmail.com\n");
				printf("\nTELEPHONE : 9391833741\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Indian red Cross Soceity Blood Centre Chittoor :");
				printf("\033[0m");
				sravya2(abp=5,ap=5,bp=2,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Dist GOVT head Quarters,hospital campus,Chittoor, Andhra pradesh. \n");
				printf("\nEMAIL : ircsbbchittoor@gmail.com\n");
				printf("\nTELEPHONE : 8374908091\n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. District Head Quarter Hospital Blood centre :");
				printf("\033[0m");
				sravya2(abp=17,ap=36,bp=27,op=43,abn=4,an=3,bn=3,on=4,bg);
				printf("%d",bg);
				printf("\nADDRESS : 1st Floor, District Head Quarter Hospital Premises, Chittoor, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbankctr1@gmail.com\n");
				printf("\nTELEPHONE : x x x x x x x x x x \n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Indian red Cross Soceity Blood centre  Chittoor:");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : District Govt Head Quarters, Chittoor, Andhra Pradesh. \n");
				printf("\nEMAIL : Not Available\n");
				printf("\nTELEPHONE : NotAvailable \n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
				case 3: printf("\033[1;40m");
				printf("----------East Godavari-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Smt. Mattey Nagamani & Adinarayana Memorial Rotary Blood Center :");
				printf("\033[0m");
				sravya2(abp=1,ap=7,bp=10,op=7,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No: 1 - 8 -m32/34 - A, 1st floor, Sudha rotatory Sathabdi Bhavan,East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbank.peddapurm@gmail.com\n");
				printf("\nTELEPHONE : 9494703300\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Sanjeevani Voluntarily blood centre :");
				printf("\033[0m");
				sravya2(abp=3,ap=9,bp=9,op=2,abn=1,an=2,bn=3,on=3,bg);
				printf("\nADDRESS : D,no 46-23-16, 2nd floor, Ganuga street danavaipeta rajamahendravaram,Rajamahendravaram 9852673333,East Godavari, Andhra pradesh. \n");
				printf("\nEMAIL : sanjeevanibloodcentre.rjy@gmail.com\n");
				printf("\nTELEPHONE : 9852673333 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. APVVP blood bank,Amalapuram :");
				printf("\033[0m");
				sravya2(abp=1,ap=5,bp=5,op=45,abn=0,an=0,bn=0,on=3,bg);
				printf("\nADDRESS : APVVP bood bank, Area hospital(govt),Amalapuram, East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbankahampp@gmail.com\n");
				printf("\nTELEPHONE : 9347154115\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. dr. YSR- Jakkampudi Rammohan Rao Blood Center :");
				printf("\033[0m");
				sravya2(abp=3,ap=9,bp=9,op=2,abn=1,an=2,bn=3,on=3,bg);
				printf("\nADDRESS : D.no. 46-23-16, 2nd floor, Ganuga street danavaipeta rajamahendravaram,Rajamahendravaram,East Godavari Andhra Pradesh. \n");
				printf("\nEMAIL : Sanjeevanibloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 9852673333\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Buddala Nagaratnam Memorial Voluntary Blood bank :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=50,bg);
				printf("\nADDRESS : 46-18-10, Danavaipet, rajahmundry,East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : ysrjrmbc@gmail.com\n");
				printf("\nTELEPHONE : 9394599789\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6. Gsl Medical College And General Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=1,bp=1,op=10,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : Laxmipuram, NH. 16, Rajanagaram mandal, Rajhamundry, East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : gslbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 8836699999\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7. Dhanwantari Voluntary Blood Bank & Blood Component ( A Division of Dhanwantari Charitable Truth) :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 1, 2nd floor & part of 3rd Floor, Opp. Godavari Grameena Bank,East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : rjydvbb@gmail.com\n");
				printf("\nTELEPHONE : 08832473050\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8. VijayaSri blood centre (A unit of Vijayasri Memorial Charitable Trust) Rajhamundry :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.no : 46-14-1/A, Gandhi park back gate,oppAxis Centre & Dominos Pizza point, Dhanavaipeta, Rajamahendravaram, Rajamundry, East Godavari, Andhra Pradesh.\n");			printf("EMAIL : sanjeevanibloodcentre.rjy@gmail.com\n");
				printf("\nEmail : vijayasribloodbankrjy@gmail.com \n");
				printf("\nTELEPHONE : NOT AVAILABLE\n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("9. Swatanthra Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : C/O Gauthami Scan Centre, 46-13-31, First Flooor, Near Gandhi Park, Danavaipeta, Rajahmundry, East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : swatantrabbrjy@gmail.com\n");
				printf("\nTELEPHONE : 9492031493\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10. Government General Hospital Blood Center, Rajamundry :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.no. 46-23-16, 2nd floor, Ganuga street danavaipeta rajamahendravaram,Rajamahendravaram,East Godavari Andhra Pradesh. \n");
				printf("\nEMAIL : Sanjeevanibloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 9852673333\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("11. Satya surya Voluntary Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No 46-1-3, Nandam Ganiraju Junction, TTD Road, Danavaipeta, Rajamahendravaram, East Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : satyasuryabloodbankrjy@gmail.com\n");
				printf("\nTELEPHONE : 9849552096\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
				break;
				case 4: printf("\033[1;40m");
				printf("-----------Guntur-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Government General Hospital Blood Center :");
				printf("\033[0m");
				sravya2(abp=8,ap=20,bp=34,op=52,abn=0,an=1,bn=4,on=0,bg);
				printf("\nADDRESS : First Floor,OP Block,Station Road,Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbank.peddapurm@gmail.com\n");
				printf("\nTELEPHONE : 0863 - 2220035\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. St. Joseph'S General Hospital Blood centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=3,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Sankar vilas Bridge, Kanna vari Thota, guntur, Andhra pradesh. \n");
				printf("\nEMAIL : NOT AVAILABLE\n");
				printf("\nTELEPHONE : 8610193743 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Aapadbandhu Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=1,op=1,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : D.No.. 12-12-22&23, 1st & 3rd floor, above kasturi surgicals, old club road,kothapeta, Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : aapadhbandhu@gmail.com\n");
				printf("\nTELEPHONE : 9502698123\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. NRI Academy of Sciences, NRI Medical College And General Hospital Blood centre :");
				printf("\033[0m");
				sravya2(abp=2,ap=3,bp=13,op=14,abn=0,an=7,bn=0,on=0,bg);
				printf("\nADDRESS : E Block, First Floor, Medical College & GH Premises, Chinaka, Mangalagiri (M), Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : cao@nrias.ac.in\n");
				printf("\nTELEPHONE : 18645 - 230101\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Rainboww blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=4,bp=5,op=10,abn=0,an=1,bn=1,on=0,bg);
				printf("\nADDRESS : M/s. rainboww Blood Bank,(A unit of Kanneganti Foundation), D.No, 12-25-99 & 100,1st floor, Beside Ganeshmahal Road, Kothapet, Guntur District, Andhra Pradesh. \n");
				printf("\nEMAIL : rainbowwbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9492452345\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6.Ramesh Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=10,bp=11,op=3,on=2,an=6,bn=0,abn=0,bg);
				printf("\nADDRESS : Dno: 26-14-1, Collectorate road,Nagaram palem, Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : neelima.cherukuri@gmail.com\n");
				printf("\nTELEPHONE : 8897529761\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7. Katuri Medical College & Hospital Blood Center :");
				printf("\033[0m");
				sravya2(abp=2,ap=1,bp=6,op=6,abn=0,an=0,bn=1,on=0,bg);
				printf("\nADDRESS : Katuri nagar, Kanna Vari Thota, Chinakondrupadu, Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : katuribloodbank@gmail.com\n");
				printf("\nTELEPHONE : 08632288555\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8. Sree Welfare Soceity Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=5,bp=2,op=6,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 12-12-84, Old Club Road, Kothapeta,Guntur, Andhra pradesh. \n");
				printf("\nEMAIL : sreewelfaresoceitybloodbank@gmail.com\n");
				printf("\nTELEPHONE : 8632217117 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("9. Lions Vision Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=7,bp=3,op=3,abn=0,an=0,bn=1,on=0,bg);
				printf("\nADDRESS : D.No 12-17-31, 1st floor, Somuvari Street, Near Bose statue, Kothapeta, Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : lionvisionbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 08632336198\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10. Needs blood Centre (A unit of needs soceity)");
				printf("\033[0m");
				sravya2(abp=0,ap=4,bp=6,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.no . 12-28-56, 1st Floor (part),Main road, Kothapeta,Guntur, Andhrapradesh");
				printf("\nEMAIL : needsbloodbankguntur@gmail.com");
				printf("\nTELEPHONE : 9246448899\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("11. Indian Red Cross Soceity Blood centre:");
				printf("\033[0m");
				sravya2(abp=2,ap=1,bp=9,op=6,abn=0,an=0,bn=0,on=2,bg);
				printf("\nADDRESS : BLOOC Bank IRCS, Zillaparishad compound,Guntur, Andhra Pradesh.\n");
				printf("\nEMAIL : redcrossguntur@yahoo.co.in\n");
				printf("\nTELEPHONE : 9491820513\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("12. NVK Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=2,op=4,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS :M/S. NVK Blood Bank( A Unit Of Needs Soceity), D.No. 30-1045, Beside Chinnappa Reddy Hospital, Near Madhavarao Hospital, Palanadu road, Vinukonda- 522647,Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : nvkbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9246448899\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("13. APVVP District Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=20,op=8,on=0,an=0,bn=0,abn=1,bg);
				printf("\nADDRESS : Groud Floor, Hospital Premises. Chenchupeta, Tenali,  Andhra Pradesh. \n");
				printf("\nEMAIL : tenalibloodbank@gmail.com\n");
				printf("\nTELEPHONE : 08644228850\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("14. Needs Tenali Blood Bank :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No : 7-5-2, 1st floor, opp. kims hospital, Prakasam road, Near Health Hospital, Gangamma Peta, Tenali, Guntur, Andhra Pradesh.\n");
				printf("\nEMAIL : needstenalibloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9000319001\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("15. All india Institute Of Medical Sciences Blood Centre MAngalagiri :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : OPD Block, Ground floor, AIIMS Mangalagiri, Guntur, Andhra Pradesh. \n");
				printf("\nEMAIL : chaitanya.ihbt@aiimsmangalagiri.edu.in@gmail.com\n");
				printf("\nTELEPHONE : 9440106689\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("16. Manipal Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : NH-5, Soumya Nagar, Tadepalli, Guntur,  Andhra Pradesh. \n");
				printf("\nEMAIL : NOT AVAILABLE\n");
				printf("\nTELEPHONE : 08662498400 or 186698200\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
				break;
					case 5: printf("\033[1;40m");
				printf("-----------Krishna-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Rainbow Blood Center :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No 33-53-33/2, 2nd Floor, Near SunRise Hospital, Pushpa hotel Road, Seetarampuram, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : rainbowbloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 9885153110\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. District Co-Ordinator Of Hospital services Blood Bank Machilipatnam :");
				printf("\033[0m");
				sravya2(abp=6,ap=22,bp=13,op=12,abn=0,an=4,bn=0,on=4,bg);
				printf("\nADDRESS : Machilipatnam, Krishna, Andhra pradesh. \n");
				printf("\nEMAIL : dhmtmbb@gmail.com\n");
				printf("\nTELEPHONE : 9010438592 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Doctors Blood Bank :");
				printf("\033[0m");
				sravya2(abp=1,ap=1,bp=21,op=12,abn=0,an=2,bn=0,on=0,bg);
				printf("\nADDRESS : 29-4-54k, CSIcomplex, Nakkala road, Suryaraopeta, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : doctorsbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9121716479\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. St. Anns hospital blood Bank :");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=2,op=4,abn=0,an=0,bn=1,on=0,bg);
				printf("\nADDRESS : Indira Towers, American Hospital rd, Punnamathota, Labbipet, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : Not available\n");
				printf("\nTELEPHONE : 9849668937\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Ramesh Hospital blood Centre :");
				printf("\033[0m");
				sravya2(abp=3,ap=6,bp=4,op=7,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Ward 33D, Ground floor, Ring Road, ITI Bus Stop, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nWEBSITE : bloodcenter.vja@rameshhospitals.com\n");
				printf("\nTELEPHONE : 9640123234\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6.Kamineni Health Care Pvt. Ltd. Blood Centre :");
				printf("\033[0m");
				sravya2(abp=2,ap=3,bp=7,op=5,on=1,an=0,bn=3,abn=0,bg);
				printf("\nADDRESS : 100 Feet Road, New Auto Nagar, Poranki, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : Bloodbank.vja@kaminenihospitals.com\n");
				printf("\nTELEPHONE : 8333993002\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7. Smt. Chigurupati Mannjuvani Varaprasad Lions District Blood Center :");
				printf("\033[0m");
				sravya2(abp=2,ap=0,bp=7,op=17,abn=0,an=2,bn=1,on=0,bg);
				printf("\nADDRESS : D.No 29-4-54 K, Canon Dhanvada Ananatham Complex, Prakasam Road, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : lionsbloodbank@yahoo.com\n");
				printf("\nTELEPHONE : 9849118077\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8. Government Area Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=4,on=0,bg);
				printf("\nADDRESS : Area Hospital premises, 1st floor, Opp. Head Post office, Gudivada, Krishna, Andhra pradesh. \n");
				printf("\nEMAIL :areahospital.gudivada@gmail.com\n");
				printf("\nTELEPHONE : 9885254371 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("9. dr. Pattabhi Red Cross Soceity Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=5,bp=22,op=7,abn=0,an=0,bn=0,on=2,bg);
				printf("\nADDRESS : S.P.Banglow Centre, Kennedy Road, Mavhilipatnam, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : drprcbloodbankmtm@gmail.com\n");
				printf("\nTELEPHONE : 9440484875\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10. Aruna Blood Bank : ");
				printf("\033[0m");
				sravya2(abp=0,ap=7,bp=7,op=1,abn=0,an=0,bn=0,on=5,bg);
				printf("\nADDRESS : SBI bazar branch building, 2nd floor Ramanaidupeta, Machilipatnam, Andhrapradesh.\n");
				printf("\nEMAIL : Rajkumar.rayana@gmail.com");
				printf("\nTELEPHONE : 9989715552\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("11.  BSC Kankipadu :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=2,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 00, kankipadu, krishna, Andhra Pradesh.\n");
				printf("\nEMAIL : NOT AVAILABLE\n");
				printf("\nTELEPHONE : NOT AVAILABLE\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("12. Vijaya Sree Blood Bank :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=2,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : D.No: 29-19-27 opp:: andhra bank & HDFC bank ATMS , Dornakal Road, suryaraopeta, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL :vijayasribloodbankvja@gmai.com\n");
				printf("\nTELEPHONE : 9392120187\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("13. New City Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : M/s. New City  Blood Bank (A Unit of Rural and Urban Development Society) # 29-19-10, 1st floor, Dornakal Road, Suryaraopet, Vijayawada, Krishna District,, Vijayawada, Krishna, Andhra Pradesh\n");
				printf("\nEMAIL : ncbbvijayawada@gmail.com\n");
				printf("\nTELEPHONE : 9963799994\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("14. Chaitanya Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No.40-9/1-26, Vasavya Complex, 1st floor, Vasavya Nagar, , Vijayawada, Krishna, Andhra Pradesh \n");
				printf("\nEMAIL : Notavilable\n");
				printf("\nTELEPHONE : 9246289777\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("15.  Dr. Pinnamaneni Siddartha Inst. Of Medical Sci. & Res. Foundation Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Siddhartha Nagar Chinoutpalli (V), Gannavaram Mandal, Krishna Dt, AP, Krishna, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : bb.drpsims@gmail.com\n");
				printf("\nTELEPHONE : 9441698759\n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("16. AAYUSH HOSPITALS BLOOD BANK  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.NO.48-13-3,3A,Ring Road, Sri Ramachandra Nagar,, Vijayawada, Krishna, Andhra Pradesh. \n");
				printf("\nEMAIL : padma.parvataneni@gmail.com\n");
				printf("\nTELEPHONE : 8498061186\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("17. Nagarjuna Hospital Blood Centre  : ");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Ground Floor, D.No.8-102,Kanuru,Vijayawada,Andhra Pradesh., Ground Floor, D.No.8-102,Kanuru,Vijayawada,Andhra Pradesh., Vijayawada, Krishna, Andhra Pradesh.\n");
				printf("\nEMAIL : nhbloodbank@yahoo.com");
				printf("\nTELEPHONE : 8790069797\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("18.  Life share Blood bank  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 40- Sudarshan complex above Tanishq show room m.g road vijayawada, Vijaywada, Krishna, Andhra Pradesh\n");
				printf("\nEMAIL : Lifesharedoctor66@gmail.com\n");
				printf("\nTELEPHONE :  8892156789\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 6: printf("\033[1;40m");
				printf("-----------Kurnool-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. ADP Voluntary Blood Center :");
				printf("\033[0m");
				sravya2(abp=0,ap=7,bp=2,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No 19/417-1, 2nd floor, Balajis Complex, Opp Muncipal School, M.M.Road, Adoni, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : adpbloodventre@gmail.com\n");
				printf("\nTELEPHONE : 9550939235\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Indian Red Cross Soceity Blood centre :");
				printf("\033[0m");
				sravya2(abp=8,ap=21,bp=48,op=81,abn=2,an=7,bn=7,on=4,bg);
				printf("\nADDRESS : Indian Redcross soceity Blood Bank Kurnool, DMHO Campus, Opp Ravi Theatre, Kurnool, Andhra pradesh. \n");
				printf("\nEMAIL : ircsbloodbankknl@gmail.com\n");
				printf("\nTELEPHONE : 8247456188 / 8440211777 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Viswa Bharathi General Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=5,op=1,abn=1,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : R.T.Nagar, Near Pencikalapadu (v), Kallur (M), Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : vbghbbknl@gmail.com\n");
				printf("\nTELEPHONE : 7013756772\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Viswa Bharathi Super Speciality Hospital Blood centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=5,bp=1,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 50/760-A-127-13, 1st floor, (O. P. Block), Gayathri Estates, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : Not Available\n");
				printf("\nTELEPHONE : 08518229967 or 18518229294\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. RR Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=5,bp=6,op=14,abn=0,an=1,bn=0,on=0,bg);
				printf("\nADDRESS : D.No 304-10 2nd floor RR Hospital, Bhagya Nagar Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : rrbloodbank@yahoo.in\n");
				printf("\nTELEPHONE : 9966662331\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6.Area Hospital Blood Centre Adoni:");
				printf("\033[0m");
				sravya2(abp=8,ap=17,bp=25,op=29,on=0,an=1,bn=1,abn=1,bg);
				printf("\nADDRESS : Near Gosha Hospital road, Adoni, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL ahbloodbankadoni@gmail.com\n");
				printf("\nTELEPHONE : 9701267047\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7. Kurnool Blood Center :");
				printf("\033[0m");
				sravya2(abp=0,ap=5,bp=9,op=8,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : 43/101, 4th Floor, opp muncipal office, Apoorva plza, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : kurnoolbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 7337225255\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8. Govt General Hospital blood Centre, Kurnool :");
				printf("\033[0m");
				sravya2(abp=8,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : First Floor, Govt. General Hospital, Kurnool, Andhra pradesh. \n");
				printf("\nEMAIL : knlgghbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9849131447 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("9. Gopi Charitable Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=1,op=11,abn=0,an=1,bn=0,on=0,bg);
				printf("\nADDRESS : 21/134-15, SKD colony 1st road, Revenue Ward No 21 Beside Dr. Jyothirmai Junior College Adoni, Adoni, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : gopicbc.adoni@gmail.com\n");
				printf("\nTELEPHONE : 9448068318\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10. Akshaya Blood Centre : ");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=1,op=2,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : #46/87-1 to 5, 3rd Floor, Hotel Sasya Complex, Budhawarpet, Kurnool, Andhrapradesh");
				printf("\nEMAIL : akshaybloodbank81@gmail.com");
				printf("\nTELEPHONE : 9494444180\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("11. Care Blood centre:");
				printf("\033[0m");
				sravya2(abp=13,ap=18,bp=18,op=24,abn=0,an=2,bn=1,on=1,bg);
				printf("\nADDRESS : D.No- 40-318, 2nd floor, Nalanda complex, opp RTC depot, Rajvihar center, Kurnool, Andhra Pradesh.\n");
				printf("\nEMAIL : carebloodbankcentre@gmail.com\n");
				printf("\nTELEPHONE : 9346651871\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("12. Akshaya Blood Centre : ");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=1,op=2,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : #46/87-1 to 5, 3rd Floor, Hotel Sasya Complex, Budhawarpet, Kurnool, Andhrapradesh");
				printf("\nEMAIL : akshaybloodbank81@gmail.com");
				printf("\nTELEPHONE : 9494444180\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("13. Care Blood centre:");
				printf("\033[0m");
				sravya2(abp=13,ap=18,bp=18,op=24,abn=0,an=2,bn=1,on=1,bg);
				printf("\nADDRESS : D.No- 40-318, 2nd floor, Nalanda complex, opp RTC depot, Rajvihar center, Kurnool, Andhra Pradesh.\n");
				printf("\nEMAIL : carebloodbankcentre@gmail.com\n");
				printf("\nTELEPHONE : 9346651871\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("14. New Life Blood Centre  : ");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :104&105, 3rd floor,KLR Buildings,Gayathri Estate, Kurnool, Andhra Pradesh.\n");
				printf("\nEMAIL : newlifebloodbankkurnool@gmail.com ");
				printf("\nTELEPHONE : 8096079580\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("15. Govt General Hospital Blood Centre, Kurnool :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :First Floor, Govt. General Hospital, Kurnool.\n");
				printf("\nEMAIL : NOT MENTIONED\n");
				printf("\nTELEPHONE : NOT MENTIONED\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 7: printf("\033[1;40m");
				printf("-----------Prakasam-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. ADP Voluntary Blood Center :");
				printf("\033[0m");
				sravya2(abp=0,ap=7,bp=2,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No 19/417-1, 2nd floor, Balajis Complex, Opp Muncipal School, M.M.Road, Adoni, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : adpbloodventre@gmail.com\n");
				printf("\nTELEPHONE : 9550939235\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Indian Red Cross Soceity Blood centre :");
				printf("\033[0m");
				sravya2(abp=8,ap=21,bp=48,op=81,abn=2,an=7,bn=7,on=4,bg);
				printf("\nADDRESS : Indian Redcross soceity Blood Bank Kurnool, DMHO Campus, Opp Ravi Theatre, Kurnool, Andhra pradesh. \n");
				printf("\nEMAIL : ircsbloodbankknl@gmail.com\n");
				printf("\nTELEPHONE : 8247456188 / 8440211777 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Viswa Bharathi General Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=5,op=1,abn=1,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : R.T.Nagar, Near Pencikalapadu (v), Kallur (M), Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : vbghbbknl@gmail.com\n");
				printf("\nTELEPHONE : 7013756772\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Viswa Bharathi Super Speciality Hospital Blood centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=5,bp=1,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 50/760-A-127-13, 1st floor, (O. P. Block), Gayathri Estates, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : Not Available\n");
				printf("\nTELEPHONE : 08518229967 or 18518229294\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. RR Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=5,bp=6,op=14,abn=0,an=1,bn=0,on=0,bg);
				printf("\nADDRESS : D.No 304-10 2nd floor RR Hospital, Bhagya Nagar Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : rrbloodbank@yahoo.in\n");
				printf("\nTELEPHONE : 9966662331\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6.area Hospital Blood Centre Adoni:");
				printf("\033[0m");
				sravya2(abp=8,ap=17,bp=25,op=29,on=0,an=1,bn=1,abn=1,bg);
				printf("\nADDRESS : Near Gosha Hospital road, Adoni, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL ahbloodbankadoni@gmail.com\n");
				printf("\nTELEPHONE : 9701267047\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7. Kurnool Blood Center :");
				printf("\033[0m");
				sravya2(abp=0,ap=5,bp=9,op=8,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : 43/101, 4th Floor, opp muncipal office, Apoorva plza, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : kurnoolbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 7337225255\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8. Govt General Hospital blood Centre, Kurnool :");
				printf("\033[0m");
				sravya2(abp=8,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : First Floor, Govt. General Hospital, Kurnool, Andhra pradesh. \n");
				printf("\nEMAIL : knlgghbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9849131447 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("9. Gopi Charitable Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=1,op=11,abn=0,an=1,bn=0,on=0,bg);
				printf("\nADDRESS : 21/134-15, SKD colony 1st road, Revenue Ward No 21 Beside Dr. Jyothirmai Junior College Adoni, Adoni, Kurnool, Andhra Pradesh. \n");
				printf("\nEMAIL : gopicbc.adoni@gmail.com\n");
				printf("\nTELEPHONE : 9448068318\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10. New vision blood centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 37-1-385 canara upstair 1 St floor opposite Nellore bustand,trunk road. ongole, Ongole, Prakasam, Andhra Pradesh. \n");
				printf("\nEMAIL : newvisionbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9989206806\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("11.  Navya blood centre   :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : .4-369(1) venkataraman complex opposite RTC bustand kurnool road Ongole, Prakasam, Andhra Pradesh. \n");
				printf("\nEMAIL : navyabloodbank.2016@gmail.com\n");
				printf("\nTELEPHONE : 9502432334 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("12.  Vijaya Sri Blood Centre, Ongole  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No: 5-302, 1st and 2nd floor, Opp.Sri Madhavi Hospital, Venkateswara Nagar, Ongole, Ongole, Prakasam, Andhra Pradesh. \n");
				printf("\nEMAIL : vijayasribloodbankong@gmail.com\n");
				printf("\nTELEPHONE : 9701233199\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 8: printf("\033[1;40m");
				printf("-----------Srikakulam-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. New Srikakulam Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=2,op=4,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : .No.04-01-139/1, First floor, Day and Night Junction, Palakonda Road,, Srikakulam, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : newsrikakulambloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9697961999\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Gems Hospital Blood Bank :");
				printf("\033[0m");
				sravya2(abp=8,ap=20,bp=31,op=43,abn=0,an=0,bn=5,on=4,bg);
				printf("\nADDRESS : Ragolu, Srikakulam Mandal, Srikakulam, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : Bloodbank@gems.edu.in\n");
				printf("\nTELEPHONE : 089422 78201, 08942 22654, 7337362534 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Indian Red Cross Society Srikakulam District Branch :");
				printf("\033[0m");
				sravya2(abp=1,ap=7,bp=5,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No. 8-5-2/A, Besides DM & HO Office, Bapuji Kalamandir, Srikakulam, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : chairman.redcrosssklm@gmail.com\n");
				printf("\nTELEPHONE : 9440195900\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Rajiv Gandhi Institute Of Medical Sciences General Hospital Blood Centre Srikakulam :");
				printf("\033[0m");
				sravya2(abp=6,ap=0,bp=7,op=44,abn=0,an=1,bn=0,on=1,bg);
				printf("\nADDRESS : Hudco Colony, Balaga, Srikakulam, , Srikakulam, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : bbrimssklm@gmail.com\n");
				printf("\nTELEPHONE : 7702319013\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Pranadatha Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=1,op=1,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : Pranadatha Blood Centre, D.No.13-2-169/A,1st & 2nd Floor, Upstairs Paradise Hotel, Opp LIC Building, K.T.Road, Palasa, Srikakulam District, Andhra Pradesh, Palasa, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : pranadathabloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 07207848925\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6. Gmr Varalakhsmi Care Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : GMR Nagar, Rajam, Srikakulam, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : contact@gmrcarehospitals.in\n");
				printf("\nTELEPHONE :  7032823181\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7.  Lions Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/s. Lions Blood Bank , D.No. 2-1-15/2 1st  Floor,  RIMS Hospital Junction, Palakonda Road, Blaga, Srikakulam,, Srikakulam, Srikakulam, Andhra Pradesh. \n");
				printf("\nEMAIL : lionsbloodbank.srikakulam@gmail.com\n");
				printf("\nTELEPHONE : 9100315777, 7995636077\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 9: printf("\033[1;40m");
				printf("-----------Sri Potti Sriramulu Nellore-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. APVVP Blood Centre Gudur :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=31,op=0,abn=1,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : Hospital Road, Gudur, Gudur, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : ahgudur@yahoo.co.in\n");
				printf("\nTELEPHONE : 8985750552\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Indian Red Cross Society Blood Centre Kavalii :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=7,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : S. N0. 1083/3, RDO office Compound, Trunk Road, Kavali, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : kavaliredcross@gmail.com\n");
				printf("\nTELEPHONE : 9494755449 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Dsr District Government Head Quarter Hospital Blood Centre Nellore :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=5,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Government Head Quarter Hospital Premises, Ist Floor, Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : acsrgmcnlr@gmail.com\n");
				printf("\nTELEPHONE : 9177402121\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Apvvp Area Hospital Blood Centre Kavali :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=3,op=6,abn=0,an=0,bn=1,on=1,bg);
				printf("\nADDRESS :Kavali, S.P.S.R, Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : areahospitalbloodcentrekavali@gmail.com\n");
				printf("\nTELEPHONE : 9885453278, 08626 240167\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. New Life Blood Centre Nellore  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : DN 24-2-698, second floor, Rajagopalapuram, Darghamitta, Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : newlifebloodcentrenellore@gmail.com\n");
				printf("\nTELEPHONE : 9490684106\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6. Narayana Medical College And Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : 1st Floor, A1 Wing, Chintareddypalem, Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbankngh@gmail.com\n");
				printf("\nTELEPHONE :  086 12317963, 0861 2317964, 0861 2317968\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7.  Nova Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/s. Nova Blood Bank,( A Unit of Rural and Urban Development Society) D.No.16/2/232, 2nd floor, Iska Towers,Gandhi Nagar, Pogathota, Nellore-524001., Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : novabloodbank@gmail.com\n");
				printf("\nTELEPHONE : 8790484848\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8.  Apollo Speciality Hospitals Nellore :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :16/111/1133, Muthukur Road, Pinakini Nagar, Nellore, Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : rajasekhar_m@apollohospitals.com\n");
				printf("\nTELEPHONE : 7989523405\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 10: printf("\033[1;40m");
				printf("-----------Visakhapatnam-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Lions Club Of Visakhapatnam Blood Centre Trust  :");
				printf("\033[0m");
				sravya2(abp=1,ap=2,bp=3,op=2,abn=0,an=2,bn=1,on=0,bg);
				printf("\nADDRESS : D.No. 10-54-7, Lions Community Hall, Ram Nagar, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : lionsbloodbankvsp@gmail.com\n");
				printf("\nTELEPHONE : 6309552515\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2.  Government Victoria Hospital For Women & Children Blood Centre, Visakhapatnam :");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=15,op=15,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 1st Floor, Victoria Hospital Premises, 1 Town, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : vghbloodbank@gmail.com\n");
				printf("\nTELEPHONE : 089125 62637, 8912508352 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. The King George Hospital Blood Centre Visakhapatnam :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=5,op=0,abn=1,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Jagadamba Junction, Visakhapatnam, , Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : kgh_vsp@ap.nic.in\n");
				printf("\nTELEPHONE : 0891-2564891\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4.  Mother Blood Centre :");
				printf("\033[0m");
				sravya2(abp=4,ap=15,bp=5,op=0,abn=0,an=5,bn=2,on=2,bg);
				printf("\nADDRESS :d.nO 12-4-34A, M.K. ENCLAVE OPP. ST.Anthony church, , Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : motherbloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 8328098871/9849993672\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Sanjeevani Voluntary Blood centre  :");
				printf("\033[0m");
				sravya2(abp=7,ap=24,bp=17,op=14,abn=1,an=1,bn=3,on=3,bg);
				printf("\nADDRESS : D.No 26-50-5/1 Kanithi Road, Chinagantyada, Gajuwaka, VSKP, Gajuwaka, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : svbc.gwk@gmail.com\n");
				printf("\nTELEPHONE : 9349349696\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6.  Seven Hills Hospitals Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=1,bp=3,op=4,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : Waltair Main Road, Rockdale Layout, Visakhapatnam, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : Venkatesh.s@sevenhillshospital.com\n");
				printf("\nTELEPHONE :  0891 667 7777,  0891 27080900\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7.  Visakha Steel General Hospital Blood Centre  :");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=1,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : First Floor, Sector 6, Ukkunagaram, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : Santhi_priya@vizagsteel.com\n");
				printf("\nTELEPHONE : 7702917979\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8.   Amma Blood Centre  :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=1,op=1,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :16/111/1133, Muthukur Road, Pinakini Nagar, Nellore, Nellore, Sri Potti Sriramulu Nellore, Andhra Pradesh. \n");
				printf("\nEMAIL : rajasekhar_m@apollohospitals.com\n");
				printf("\nTELEPHONE : 7989523405\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("9. APVVP Blood Centre Gudur :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=31,op=0,abn=1,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : d.No 11-4-11/1, Kailash Nagar, Kanithi Road,Gajuwaka,visakhapatnam., Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : gllkiran21@gmail.com\n");
				printf("\nTELEPHONE : 8328098871\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10.  Life Share Blood Bank :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/s. Life Share Blood Bank,D.No.10-1-8, 4th Floor, the Land Mark Complex, Sampath Vinayaka Temple Road, Waltair upland, Visakhapatnam-530003  , Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbanklifeshare@gmail.com\n");
				printf("\nTELEPHONE : 8978800804 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("11.  Indian Red Cross Society Blood Centre Visakhapatnam :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No.14-35-4, Red Cross Buildings, Maharanipet, Visakhapatnam , Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : secretaryvspredcross@gmail.com\n");
				printf("\nTELEPHONE : 9491880025\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("12. Visakha Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :Chamber 2 & 3 Door No 17-1-15/1, Ground, RR Towers, opp. KGH Down Road, Opp KGH OP Gate, Maharani Peta, Visakhapatnam, Andhra Pradesh, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : visakhabloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 8309988758\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("13. Icon Krishi Blood Centre  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/s Icon Krishi Blood Bank, D.No.32-11-2, Icon Krishi Hospitals, Sheela Nagar, Gajuwaka, Visakhapatanm, Gajuwaka, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : gllkiran21@gmail.com\n");
				printf("\nTELEPHONE : 7989432799\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("14. Gayatri Vidya Parishad Institute Of Health Care And  Medical  Technology  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : DNO:6-25, MARIDIVALLEY , MARIKAVALASA , MADHURAWADA, MADHURAWADA, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : gvpbloodbank@gmail.com\n");
				printf("\nTELEPHONE :  7675808026\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("15.  Homi Bhabha Cancer Hospital & Research Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Main Block, First Floor, Aganampudi, Gajuwaka Mandal, Visakhapatnam, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : dtm@hbchrcv.tmc.gov.in\n");
				printf("\nTELEPHONE : 8912871572\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("16. New life Blood centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :Flat no101&102 , First floor,Gabhasthi Hermitage HiG 82 Sector 1, Viskhapatnam, Viskhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : newlifebloodcentrevskp@gmail.com\n");
				printf("\nTELEPHONE : 9494341893\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("17.  Indian Red Cross Society Blood Centre Visakhapatnam  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=31,op=0,abn=1,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : D.No.14-35-4, Red Cross Buildings, Maharanipet. \n");
				printf("\nEMAIL : NOT MENTIONED\n");
				printf("\nTELEPHONE : NOT MENTIONED\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("18.  Rotary Blood Centre, (Visakha Portcity Charitable Trust)  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :  D.No. 13-26-2/54, 3rd Floor, Apuroopa Archede, Jagadamaba Ju, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : Rotarybloodbankvsp@gmail.com\n");
				printf("\nTELEPHONE :  0897 7191222, 0891-6534635, 0891-2506678\n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("19.  Apollo Hospital Chinagadhili :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No.18-516/2/1, 3rd Floor, Health City, Arilova, DETTO, Chinagadhili, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : kunamukundarao@gmail.com\n");
				printf("\nTELEPHONE : 9849949202\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("20. M/S. Gitam Institute Of Medical Sciences Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :  Door No. 5-168, Ward No. 6, GITAM University, Rushikonda, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : directorgims@gitam.edu\n");
				printf("\nTELEPHONE : 0891 2524777, 9985556050\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("21. Pinnacle Hospital Bloodbank  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :  PLOT NO 10,11&12,APIIC  ,HEALTHCITY,CHINAGADILI,VISAKHAPATNAM, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbank@pinnaclehospitals.com\n");
				printf("\nTELEPHONE : 08913099990\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("22.  Anil Neerukunda Hospital Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : SangiValasa, Bheemunipatnam (M), Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : anhbb2017@gmail.com\n");
				printf("\nTELEPHONE :  8008901273\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("23. As Raja Voluntary Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.No. 10-50-11/7, 1st Floor, Virasi Centre, Waltair Main Road, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : asrajavbloodbank@gmail.com\n");
				printf("\nTELEPHONE :  9849792925\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("24. Ntr Memorial Trust Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 11-4-2/1, Rockdale Layout, Waltair Main Road, Ramnagar, VISAKHAPATNAM, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : vizagbb@ntrtrust.org\n");
				printf("\nTELEPHONE : 9032005619\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("25.  CHATRAPATHI SHIVAJI VOLUNTARY BLOOD CENTRE  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :#PLOT NO .5C, 3RD FLOOR, UNIQUE HOSPITAL, HEALTH CITY, AARILOVA, , VISAKHAPATNAM, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : csvbloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 7660954833\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 11: printf("\033[1;40m");
				printf("-----------Vizianagaram-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Vijaya Blood Bank  :");
				printf("\033[0m");
				sravya2(abp=0,ap=12,bp=15,op=20,abn=0,an=0,bn=2,on=1,bg);
				printf("\nADDRESS : 3rd Floor, 18-1-18, Revenue Ward No : 18, Zidduvari Street, Vizianagaram, Vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : vijayabloodbank2019@gmail.com\n");
				printf("\nTELEPHONE : 7997752777\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2.  BSC - CHEEPURPALLI BSU   :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=6,op=6,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 1st Floor, Victoria Hospital Premises, 1 Town, Visakhapatnam, Visakhapatnam, Andhra Pradesh. \n");
				printf("\nEMAIL : chcchepurupalli@gmail.com\n");
				printf("\nTELEPHONE : 9441057916 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. District Head Quarter Hospital Blood Centre, Vizianagaram  :");
				printf("\033[0m");
				sravya2(abp=1,ap=12,bp=26,op=8,abn=0,an=0,bn=0,on=3,bg);
				printf("\nADDRESS : Govt. Dist. Hospital Premises, Ground Floor, Cantonment, Vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : bloodbankdhvzm@gmail.com\n");
				printf("\nTELEPHONE : 9440070099\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4.  Vizianagaram Rotary Parvati Devi Anchalia Voluntary Blood Centre  :");
				printf("\033[0m");
				sravya2(abp=0,ap=4,bp=5,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : D.NO.5-16-6/16,1st Floor,Rotary community hall,NCS Road,vzm, Vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : Rotarybloodbankvzm@gmail.com\n");
				printf("\nTELEPHONE : 9849010503\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5.  BSC - BHOGAPURAM BSU   :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=1,op=4,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : CHC Bhogapuram, Vizianagarm Dist., BHOGAPURAM, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : chcbhogapuram@gmail.com\n");
				printf("\nTELEPHONE : 7032543350\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6. BSC - MCH VZM BSU :");
				printf("\033[0m");
				sravya2(abp=2,ap=4,bp=10,op=11,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : MCH VZM, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : gosha.vzm@gmail.com\n");
				printf("\nTELEPHONE :  9502913787\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7.  Maharaja Institute Of Medical Sciences Blood Centre  :");
				printf("\033[0m");
				sravya2(abp=3,ap=4,bp=12,op=5,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : 31-15, MIMS General Hospital Premises, Nellimarla, vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : principalsretmims@gmail.com\n");
				printf("\nTELEPHONE :  9494421486\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8.  BSC - Rajam BSU :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=2,op=2,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Rajam, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : chcrajam@gmail.com\n");
				printf("\nTELEPHONE : 9963117007\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("9. NVN BLOOD BANK  :");
				printf("\033[0m");
				sravya2(abp=3,ap=18,bp=16,op=12,abn=0,an=2,bn=4,on=4,bg);
				printf("\nADDRESS :  19-10-8,2nd floor,Beside Vijaya diagnostic centre,Matam street, Gumchi jn, VIZIANAGARAM, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : nvnbloodbank999@gmail.com\n");
				printf("\nTELEPHONE : 9246448899\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10. BSC - GAJAPATHINAGARAM BSU   :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=1,op=6,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : GAJAPATHINAGARAM, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : pallikalaravikumar@gmail.com\n");
				printf("\nTELEPHONE : 9550294202 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("11. BSC- BOBBILI BSU  :");
				printf("\033[0m");
				sravya2(abp=0,ap=3,bp=2,op=3,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : CHC BOBBILI, Municipal Office, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : chappasudhakar@gmail.com\n");
				printf("\nTELEPHONE : 9490731462\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("12. BSU Community Health Centre Nellimarla  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=1,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : Near SBI Bank, Nellimarla, Vizianagaram, Andhra Pradesh, Vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : chcnellimarla@gmail.com\n");
				printf("\nTELEPHONE : 7569552212,9182231274\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("13. BSC- S.KOTA BSU  :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=1,op=1,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : S.KOTA, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : chcskota@gmail.com\n");
				printf("\nTELEPHONE : 9985826461\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("14. Indian Red Cross Society Blood Centre Vizianagaram  :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=30,op=43,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : Collectorate junction,Near Ganesh Temple,Cantonment,Vizianagaram - 535003, vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : secretaryredcrossvizianagaram@gmail.com\n");
				printf("\nTELEPHONE :  7032076969\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("15.  BOBBILI BLOOD CENTRE  :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=2,bg);
				printf("\nADDRESS : D.NO-11-65&66,1ST FLOOR,VYSHNAV STREET,BOBBILI,VZM , Bobbili, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : bobbilibloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 9700175677\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("16. New life Blood centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS :  4th floor, Revenue Ward, H.no 1-9/1-37 3,4 th floor sri bangarmma complex,  Vizianagaram, Vizianagaram, Andhra Pradesh. \n");
				printf("\nEMAIL : newlifebloodcentreviznrm@gmail.com\n");
				printf("\nTELEPHONE : 8096171616\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("17.  District Head Quarter Hospital Blood Centre, Vizianagaram   :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=31,op=0,abn=1,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : Govt. Dist. Hospital Premises, Ground Floor, Cantonment. \n");
				printf("\nEMAIL : NOT MENTIONED\n");
				printf("\nTELEPHONE : NOT MENTIONED\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
			case 12: printf("\033[1;40m");
				printf("-----------West Godavari-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1. Indian Red Cross Society Tanuku  :");
				printf("\033[0m");
				sravya2(abp=3,ap=10,bp=7,op=0,abn=0,an=2,bn=0,on=0,bg);
				printf("\nADDRESS : Dr Mullapudi Harischandra Prasad Red Cross Blood Bank, IRCS , Doddipatlavari Steet, Venkatarayapuram, Tanuku, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : i.r.c.s.tanuku@gmail.com\n");
				printf("\nTELEPHONE : 9810982048\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2.  Sunrise Voluntary Blood Centre :");
				printf("\033[0m");
				sravya2(abp=1,ap=8,bp=15,op=16,abn=0,an=1,bn=3,on=1,bg);
				printf("\nADDRESS : M/s.Sunrise Voluntary Blood Bank,( A Division of Mother Theresa Charitable Trust) D.No.3-183, 1st & 2nd floor, opp Nirmala Hospital, Jaggareddygudem, W.G District, Jangareddygudem, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : sunrisevoluntarybloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9000963508 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Palakol Voluntary Blood Centre, (A Division Of Palakol Charitable Trust) :");
				printf("\033[0m");
				sravya2(abp=7,ap=10,bp=23,op=37,abn=0,an=1,bn=2,on=3,bg);
				printf("\nADDRESS : Dno: 47-1-12/2c,beside new life hospital, srinivasa deluxe road ,palakol., Palakol, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : palakolvoluntarybloodbank@gmail.com\n");
				printf("\nTELEPHONE : 8500659644 , 9666771911\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. Sri Buddala Narasimhamurty Blood Centre  :");
				printf("\033[0m");
				sravya2(abp=5,ap=14,bp=13,op=24,abn=1,an=0,bn=1,on=2,bg);
				printf("\nADDRESS :  D.No. 34-4/5, Ground floor, Supriya Towers, West Godavari, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : nanibuddala@gmail.com\n");
				printf("\nTELEPHONE :  9133111131\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5.  Ircs Blood Centre Narasapuram :");
				printf("\033[0m");
				sravya2(abp=0,ap=2,bp=10,op=10,abn=0,an=0,bn=0,on=1,bg);
				printf("\nADDRESS : Community Health Center, Narsapuram, West Godavari, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : NOT MENTIONED\n");
				printf("\nTELEPHONE : 9866589956\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6.  A.S.N. Raju Charitable Trust Blood Centre :");
				printf("\033[0m");
				sravya2(abp=3,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : Door No. 24-1-1, R.K. Plaza (Sarovar Complex), J.P. Road, , West Godavari, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : asnrajucharitabletrust@gmail.com\n");
				printf("\nTELEPHONE : 9652390626,9951334446\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("7.  Dr. Narni Ratnalaya Kumari Voluntary Blood Centre :");
				printf("\033[0m");
				sravya2(abp=4,ap=16,bp=16,op=10,abn=0,an=0,bn=1,on=3,bg);
				printf("\nADDRESS : M/s. Dr. Narni Ratnalaya Kumari Voluntary Blood Bank(A unit of Buddala Narasimha Murthy Seva Sangham, Tanuku), 1st floor, D.No: 2-2-95, YSR Municipal Shopping Complex, Near Old Govt. Hospital, Tadepal, Tadepalligudem, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : drnrk.voluntarybloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9100414199\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("8. Jangareddygudem Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=1,bp=6,op=9,abn=0,an=0,bn=0,on=0,bg);
				printf("\nADDRESS : M/s. Jangareddygudem Blood Bank (A unit of Sri Yoshitha Social Organisation). Ground & First Floor, D.No. 14-64, Chinthal Road, Jangareddygudem , West Godavari District., Jangareddygudem, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : jangareddygudembloodbank299@gmail.com\n");
				printf("\nTELEPHONE : 8985653888\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("9. Uddaraju Anandaraju Foundation Blood Centre :");
				printf("\033[0m");
				sravya2(abp=2,ap=16,bp=7,op=2,abn=0,an=2,bn=0,on=0,bg);
				printf("\nADDRESS : 27-8-21/2, Juvvalapalem Rd, SIVARAO PETA, Bhimavaram, , Bhimavaram, West Godavari, Andhra Pradesh. \n");
				printf("\nEMAIL : anandabloodcenter@gmail.com\n");
				printf("\nTELEPHONE :  9948222882\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("10.  Mnm Area Hospital Blood Centre Jangareddygudem :");
				printf("\033[0m");
				sravya2(abp=2,ap=0,bp=4,op=0,abn=0,an=7,bn=0,on=0,bg);
				printf("\nADDRESS :  C/o MNM AREA HOSPITAL, Jangareddygudem, Eluru, Andhra Pradesh. \n");
				printf("\nEMAIL : Bloodbankahjrg@gmail.com\n");
				printf("\nTELEPHONE : 9849175525 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			break;
			case 13: printf("\033[1;40m");
				printf("-----------YSR - Kadapa-----------");
				printf("\033[0m");
			{
				printf("\033[1;36m");
				printf("\n\n1.  Government District Hospital Blood Centre Proddatur :");
				printf("\033[0m");
				sravya2(abp=17,ap=44,bp=84,op=63,abn=3,an=6,bn=8,on=2,bg);
				printf("\nADDRESS : APVVP Area Hospital Blood Bank Premises, Ground Floor, Proddatur, Proddutur, Y.S.R., Andhra Pradesh. \n");
				printf("\nEMAIL : mobb.pdtr@gmail.com\n");
				printf("\nTELEPHONE : 9494808205\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("2. Bruhada Blood Center :");
				printf("\033[0m");
				sravya2(abp=2,ap=8,bp=17,op=16,abn=0,an=1,bn=0,on=10,bg);
				printf("\nADDRESS : 21-648-1, 2ND FLOOR, PRASAD TOWERS, OLD MUNICIPAL OFFICE ROAD, OPP RAMESH THEATRE, KADAPA, Kadapa, Y.S.R., Andhra Pradesh. \n");
				printf("\nEMAIL : Bruhadabloodbank@gmail.com\n");
				printf("\nTELEPHONE : 9177791860 \n");
				system("pause");
				system("cls");
				printf("\n\n");	
			}
			{
				printf("\033[1;36m");
				printf("3. Sri Deepa Voluntary Blood Centre :");
				printf("\033[0m");
				sravya2(abp=10,ap=1,bp=3,op=8,abn=0,an=0,bn=2,on=0,bg);
				printf("\nADDRESS : D.No.70/43-A and B, First and Second Floor, Brahmin Street,, Rayachoty, Y.S.R., Andhra Pradesh. \n");
				printf("\nEMAIL : srideepabloodcentre@gmail.com\n");
				printf("\nTELEPHONE : 7406899988\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("4. APVVP BLOOD BANK PULIVENDULA  :");
				printf("\033[0m");
				sravya2(abp=2,ap=21,bp=29,op=13,abn=0,an=2,bn=1,on=2,bg);
				printf("\nADDRESS :  Area Hospital Premises, Muddanoor Road, Pulivendla, PULIVENDULA, Y.S.R., Andhra Pradesh. \n");
				printf("\nEMAIL : pulivendulabb2007@gmail.com\n");
				printf("\nTELEPHONE : 9966509364\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("5. Indian Red Cross Society Blood Centre Almaspet :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=8,op=0,abn=0,an=0,bn=0,on=2,bg);
				printf("\nADDRESS :10/971, Bellam mandy, Near Matti Peddapuli, Trunk Road, Kadapa, Y.S.R., Andhra Pradesh. \n");
				printf("\nEMAIL : ircskadapa@gmail.com\n");
				printf("\nTELEPHONE : 8712197873\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			{
				printf("\033[1;36m");
				printf("6. Fathima Institute Of Medical Sciences Blood Centre :");
				printf("\033[0m");
				sravya2(abp=0,ap=0,bp=0,op=0,on=0,an=0,bn=0,abn=0,bg);
				printf("\nADDRESS : Ramarajupalli, Pulivendula Road,, Kadapa, Y.S.R., Andhra Pradesh. \n");
				printf("\nEMAIL : fims.kadapa.ap@gmail.com\n");
				printf("\nTELEPHONE : 8790907287\n");
				system("pause");
				system("cls");
				printf("\n\n");
			}
			break;
				default:printf("enter correct choice\n");
				break;
}
break;
}
}
main()
{
    int ch,i,n,area,bg;
    printf("\033[1;40m");
    printf("\n\n\n\n\n\t\t\t\tWELCOME TO LITTLE HELP");
	printf("\033[0m");
    printf("\n\t\t\t\t======================");
    printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
	system("pause");
	system("cls");
	sravya5();
	printf("\n\n");
	while(1)
	{
		system("pause");
	system("cls");
	printf("\n\n\n\n\t\t\t");
	printf("\033[1;40m");
	printf("-----Main-----");
	printf("\033[0m");
	printf("\n\n\t\t\t1. Blood banks details\n\n\t\t\t2. Health Risk Assessment\n\n\t\t\t3. Eligibility for blood transmiision \n\n\t\t\t4. Baby bloodgroup Predictor \n\n\t\t\t5. Eligibility to donate blood \n\n\t\t\t6. Exit .\n");
	printf("\n\t\tYour choice: ");
	scanf("%d",&ch);
	system("cls");
	printf("\n\n");
		switch(ch)
		{
			case 1:printf("\033[1;40m");
			printf("\n\t\t\t-----Areas-----");
			printf("\033[0m");
			printf("\n\n\t\t\t1. Anantapur\n\n\t\t\t2. Chittor\n\n\t\t\t3. East Godavari\n\n\t\t\t4. Guntur\n\n\t\t\t5. Krishna\n\n\t\t\t");
			printf("6. Kurnool\n\n\t\t\t7. Prakasam\n\n\t\t\t8. Srikakulam\n\n\t\t\t9. Sri Potti Sriramulu Nellore\n\n\t\t\t10. Visakhapatnam\n\n\t\t\t");
			printf("11. Vizianagaram\n\n\t\t\t12. West Godavari\n\n\t\t\t13. Y.S.R\n\n\t\t\t");
		    sravya();
			break;
			case 2:sravya7();
			break;
			case 3:sravya3();
			break;
			case 4:sravya4();
			break;
			case 5:sravya6();
			break;
			case 6:printf("exit from main page\n");
			exit(0);
			break;
			default:printf("enter correct choice\n");
			break;
		}
	}
	getchar();
}

 
