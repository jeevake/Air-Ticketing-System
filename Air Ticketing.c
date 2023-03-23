#include<stdio.h>//use for input output
#include<stdlib.h>//use for file
#include<time.h>//use for system time
#include<windows.h>//use for system time
void booking_details(), flight_routes_continents();//functions declaration
void asia(),africa(), europe(), australia(), north_america(), south_america();//continent functions declaration
void india(), pakistan(), bangladesh(), egypt(), kenya(), south_africa(), aus(), new_zealand(), uk(), france(), germany(), us(),canada(), maxico(), brazil(), argentina(), colombia();//country functions declaration
void flight_time_and_booking_date(), dates1(), dates2(),date_cal(), daily_flight_times(), classes(), first(), business(), economy(), ticket_pay(float T, int n), yesno(), thanks(), exit1(), exit2();
float BTA; char cus_name[20], cus_lastname[20], cus_email[50]; int booking_date,booking_month,booking_year, a12, b12, c1, d1, e1, a2, b2, c2, d2, e2, T1, T2, T3;//global variable
SYSTEMTIME today_time;//system time variable for current day and time
FILE *fs;//creating a file variable

int main()
{
    system("color 2");// CHANGE FONT COLOR

    GetLocalTime(&today_time);
    printf("\n\n Today Date   : %d/%d/%d\n",today_time.wDay,today_time.wMonth,today_time.wYear);//to print current date
    if(today_time.wHour>12)//to print current time in 12 hour formate
    {
        int pm = today_time.wHour%12;
        printf(" Current Time : %d:%d PM\n\n",pm,today_time.wMinute);//after 12pm
    }
    else if(today_time.wHour<12)
    {
        printf(" Current Time : %d:%d AM\n\n",today_time.wHour,today_time.wMinute);//before 12om
    }
    else
    {
        printf(" Current Time : 12:%d PM\n\n",today_time.wMinute);//12pm
    }

    Sleep(300);// RUNNING SPEED(SLOW DOWN)
    printf("                                          WW                 WW   EEEEEEEEE   LL           CCCCCCCCC    OOOOOOOOOO        MMM       MMM       EEEEEEEEE \n");
    Sleep(300);
    printf("                                           WW      WWW      WW    EE          LL          CC           OO        OO      MM MM     MM MM      EE\n");
    Sleep(300);
    printf("                                            WW   WW  WW    WW     EEEEEEEEE   LL          CC           OO        OO     MM   MM   MM   MM     EEEEEEEEE \n");
    Sleep(300);
    printf("                                             WW WW     WW WW      EE          LL          CC           OO        OO    MM     MM MM     MM    EE\n");
    Sleep(300);
    printf("                                              WWW       WWW       EEEEEEEEE   LLLLLLLLL    CCCCCCCCC    OOOOOOOOOO    MM       MMM       MM   EEEEEEEEE \n\n");
    Sleep(300);
    printf("                                                                                    TTTTTTTTTT     OOOOOOOOOO\n");
    Sleep(300);
    printf("                                                                                        TT        OO        OO\n");
    Sleep(300);
    printf("                                                                                        TT        OO        OO\n");
    Sleep(300);
    printf("                                                                                        TT        OO        OO\n");
    Sleep(300);
    printf("                                                                                        TT         OOOOOOOOOO\n");
    Sleep(500);
    printf("\n                                                              ----------***** AIR TICKETING SYSTEM - SRI LANKAN AIRLINES *****----------\n");
    Sleep(500);

    int book_or_exit;
    printf("\n\n\t\t\t\t\t\t\t\t 1 - Continue\n\t\t\t\t\t\t\t\t 2 - Exit\n");
    printf("\n\t\t\t\t\t\t\t\t Select a number : ");
    scanf("%d",&book_or_exit);
    switch(book_or_exit)
    {
        case 1 : system("cls");//to clear the page
                booking_details();//next function
                break;
        case 2 : exit1(); break;
        default:printf("Invalid Input");
                system("cls");//to clear the page
                main();//calling main function it self
    }
}
//                      NEW FUNCTION
void booking_details()
 {
     struct customer{
                char firstname[20], lastname[20], nic[13], email[50]; int contact_no;
     }c1;
     printf("\n\n\t CUSTOMER DETAILS\n\n");
     printf("\t First Name   : ");
     scanf("%s",&c1.firstname);
     printf("\t Last Name    : ");
     scanf("%s",&c1.lastname);
     printf("\t NIC Number   : ");
     scanf("%s",&c1.nic);
     printf("\t Email address: ");
     scanf("%s",&c1.email);
     printf("\t Contact no   : ");
     scanf("%d",&c1.contact_no);
     strcpy(cus_name,c1.firstname);
     strcpy(cus_lastname,c1.lastname);
     strcpy(cus_email,c1.email);

     printf("\n\n\t ****** CUSTOMER DETAILS ENTERED SUCCESSFULLY ******");
     Sleep(3000);//stay((hold) 3s
     system("cls");
     flight_routes_continents();//next function
 }
//                      NEW FUNCTION
 void flight_routes_continents()
 {
      int continent;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - ASIA\n");
      printf("\t 2 - AFRICA\n");
      printf("\t 3 - AUSTRALIA\n");
      printf("\t 4 - EUROPE\n");
      printf("\t 5 - NORTH AMERICA\n");
      printf("\t 6 - SOUTH AMERICA\n\n");
      printf("\t 7 - GO BACK\n");
      printf("\t 8 - GO TO HOME\n");
      printf("\t 9 - EXIT\n\n\n");

      printf("\t SELECT THE CONTINENT(or an option) : ");
      scanf("%d",&continent);
      switch(continent)
      {
          case 1: system("cls"); asia(); break;
          case 2: system("cls"); africa(); break;
          case 3: system("cls"); australia(); break;
          case 4: system("cls"); europe(); break;
          case 5: system("cls"); north_america(); break;
          case 6: system("cls"); south_america(); break;
          case 7: system("cls"); booking_details(); break;
          case 8: system("cls"); main(); break;
          case 9: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); flight_routes_continents(); break;
      }
 }
//                      NEW FUNCTION
 void asia()
 {
      int asia_country;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - INDIA\n");
      printf("\t 2 - PAKISTAN\n");
      printf("\t 3 - BANGLADESH\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE COUNTRY(or an option) : ");
      scanf("%d",&asia_country);
      switch(asia_country)
      {
          case 1: system("cls"); india(); break;
          case 2: system("cls"); pakistan(); break;
          case 3: system("cls"); bangladesh(); break;
          case 4: system("cls"); flight_routes_continents(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); asia(); break;
      }
 }
//                      NEW FUNCTION
 void africa()
 {
      int africa_country;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - EGYPT\n");
      printf("\t 2 - KENYA\n");
      printf("\t 3 - SOUTH AFRICA\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE COUNTRY(or an option) : ");
      scanf("%d",&africa_country);
      switch(africa_country)
      {
          case 1: system("cls"); egypt(); break;
          case 2: system("cls"); kenya(); break;
          case 3: system("cls"); south_africa(); break;
          case 4: system("cls"); flight_routes_continents(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); africa(); break;
      }
 }
//                      NEW FUNCTION
 void australia()
 {
      int aus_country;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - AUSTRALIA\n");
      printf("\t 2 - NEW ZEALAND\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE COUNTRY(or an option) : ");
      scanf("%d",&aus_country);
      switch(aus_country)
      {
          case 1: system("cls"); aus(); break;
          case 2: system("cls"); new_zealand(); break;
          case 3: system("cls"); flight_routes_continents(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); australia(); break;
      }
 }
//                      NEW FUNCTION
 void europe()
 {
      int europe_country;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - UK\n");
      printf("\t 2 - FRANCE\n");
      printf("\t 3 - GERMANY\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE COUNTRY(or an option) : ");
      scanf("%d",&europe_country);
      switch(europe_country)
      {
          case 1: system("cls"); uk(); break;
          case 2: system("cls"); france(); break;
          case 3: system("cls"); germany(); break;
          case 4: system("cls"); flight_routes_continents(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); europe(); break;
      }
 }
//                      NEW FUNCTION
 void north_america()
 {
      int na_country;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - US\n");
      printf("\t 2 - CANADA\n");
      printf("\t 3 - MAXICO\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE COUNTRY(or an option) : ");
      scanf("%d",&na_country);
      switch(na_country)
      {
          case 1: system("cls"); us(); break;
          case 2: system("cls"); canada(); break;
          case 3: system("cls"); maxico(); break;
          case 4: system("cls"); flight_routes_continents(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); north_america(); break;
      }
 }
//                      NEW FUNCTION
 void south_america()
 {
      int sa_country;
      printf("\n\n\t FLIGHT ROUTES\n\n");
      printf("\t 1 - BRAZIL\n");
      printf("\t 2 - ARGENNTINA\n");
      printf("\t 3 - COLOMBIA\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE COUNTRY(or an option) : ");
      scanf("%d",&sa_country);
      switch(sa_country)
      {
          case 1: system("cls"); brazil(); break;
          case 2: system("cls"); argentina(); break;
          case 3: system("cls"); colombia(); break;
          case 4: system("cls"); flight_routes_continents(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); south_america(); break;
      }
 }
//                      NEW FUNCTION
 void india()
 {
      int ind;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - VIJAYAWADA AIRPORT: VIJAWADA, ANDHRA PRADESH\n");
      printf("\t 2 - INDRA GANDHI INTERNATIONAL AIRPORT: DELHI\n");
      printf("\t 3 - CHENNAI INTERNATIONAL AIRPORT: CHENNAI, TAMILNADU\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&ind);
      switch(ind)
      {
          case 1: system("cls"); BTA = 27000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 35000;flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 22000;flight_time_and_booking_date(); break;
          case 4: system("cls"); asia(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); india(); break;
      }
 }
//                      NEW FUNCTION
 void pakistan()
 {
      int pak;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - ALLAMA IQBAL INTERNATIONAL AIRPORT: LAHORE\n");
      printf("\t 2 - JINNAH INTERNATIONAL AIRPORT: KARACHI\n");
      printf("\t 3 - ISLAMABAD INTERNATIONAL AIRPORT: CHENNAI, ISLAMABAD\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&pak);
      switch(pak)
      {
          case 1: system("cls"); BTA = 37000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 45000;flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 33000;flight_time_and_booking_date(); break;
          case 4: system("cls"); asia(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); pakistan(); break;
      }
 }
//                      NEW FUNCTION
 void bangladesh()
 {
      int ban;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - HAZRAT SHAHJALAL INTERNATIONAL AIRPORT: DHAKA\n");
      printf("\t 2 - SHAH AMANAT INTERNATIONAL AIRPORT: CHATTOGRAM\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&ban);
      switch(ban)
      {
          case 1: system("cls"); BTA = 49000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 40000;flight_time_and_booking_date(); break;
          case 3: system("cls"); asia(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); bangladesh(); break;
      }
 }
//                      NEW FUNCTION
void egypt()
{
      int egy;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - HURGHADA INTERNATIONAL AIRPORT: HURGHADA\n");
      printf("\t 2 - LUXOR INTERNATIONAL AIRPORT: LUXOR\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&egy);
      switch(egy)
      {
          case 1: system("cls"); BTA = 46000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 39000;flight_time_and_booking_date(); break;
          case 3: system("cls"); africa(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); egypt(); break;
      }
}
//                      NEW FUNCTION
void kenya()
{
      int ken;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - JKIA: NAIROBI\n");
      printf("\t 2 - KISUMU INTERNATIONAL AIRPORT: KISUMU\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&ken);
      switch(ken)
      {
          case 1: system("cls"); BTA = 43000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 40000;flight_time_and_booking_date(); break;
          case 3: system("cls"); africa(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); kenya(); break;
      }
}
//                      NEW FUNCTION
void south_africa()
{
      int sa;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - ANDREW'S FIELD AIRPORT: STRUISBAAI\n");
      printf("\t 2 - ALIWAL NORTH AIRPORT: ALIWAL NORTH\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&sa);
      switch(sa)
      {
          case 1: system("cls"); BTA = 46000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 42000;flight_time_and_booking_date(); break;
          case 3: system("cls"); africa(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); south_africa(); break;
      }
}
//                      NEW FUNCTION
void aus()
{
      int a;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - CANBERRA AIRPORT: CANBERRA\n");
      printf("\t 2 - SYDNEY AIRPORT: SYDNEY\n");
      printf("\t 3 - BRISBANE AIRPORT: BRISBANE\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&a);
      switch(a)
      {
          case 1: system("cls"); BTA = 80000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 85000;flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 95000;flight_time_and_booking_date(); break;
          case 4: system("cls"); australia(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); aus(); break;
      }
}
//                      NEW FUNCTION
void new_zealand()
{
      int nz;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - AUCKLAND AIRPORT: AUCKLAND\n");
      printf("\t 2 - QUEENSTOWN AIRPORT: QUEENSTOWN\n");
      printf("\t 3 - CHRISTCHURCH AIRPORT: CHIRISTCHURCH\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&nz);
      switch(nz)
      {
          case 1: system("cls"); BTA = 87000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 82000;flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 98000;flight_time_and_booking_date(); break;
          case 4: system("cls"); australia(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); new_zealand(); break;
      }
}
//                      NEW FUNCTION
void uk()
{
      int nz;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - MANCHESTER AIRPORT: MANCHESTER\n");
      printf("\t 2 - LONDON HEATHROW AIRPORT: LONDON\n");
      printf("\t 3 - BELFIST INTERNATIONAL AIRPORT\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&nz);
      switch(nz)
      {
          case 1: system("cls"); BTA = 100000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 120000;flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 108000;flight_time_and_booking_date(); break;
          case 4: system("cls"); europe(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); uk(); break;
      }
}
//                      NEW FUNCTION
void france()
{
      int fra;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - CHARLES DE GAULLE INTERNATIONAL AIRPORT: PARIS\n");
      printf("\t 2 - NICE-COTED'AZUR AIRPORT: NICE\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&fra);
      switch(fra)
      {
          case 1: system("cls"); BTA = 128000;flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 138000;flight_time_and_booking_date(); break;
          case 3: system("cls"); europe(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); france(); break;
      }
}
//                      NEW FUNCTION
void germany()
{
      int ger;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - BERLIN TEGEL AIRPORT: BERLIN\n");
      printf("\t 2 - DUSSELDORF INTERNATIONAL AIRPORT: WESTPHALIA\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&ger);
      switch(ger)
      {
          case 1: system("cls"); BTA = 121000;flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 133000;flight_time_and_booking_date(); break;
          case 3: system("cls"); europe(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); germany(); break;
      }
}
//                      NEW FUNCTION
void us()
{
      int u;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - SAN FRANCISCO INTERNATIONAL AIRPORT: SAN FRANCISCO\n");
      printf("\t 2 - LOS ANGELES INTERNATIONAL AIRPORT: LOS ANGELES\n");
      printf("\t 3 - GEORGE BUSH INTERNATIONAL AIRPORT: HOUSTAN\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&u);
      switch(u)
      {
          case 1: system("cls"); BTA = 121000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 133000; flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 145000; flight_time_and_booking_date(); break;
          case 4: system("cls"); north_america(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); us(); break;
      }
}
//                      NEW FUNCTION
void canada()
{
      int can;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - TORONTO PEARSON INTERNATIONAL AIRPORT: TORONTO\n");
      printf("\t 2 - VICTORIA INTERNATIONAL AIRPORT: VICTORIA\n");
      printf("\t 3 - VANCOUVER INTERNATIONAL AIRPORT: VANCOUVER\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&can);
      switch(can)
      {
          case 1: system("cls"); BTA = 125000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 136000; flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 150000; flight_time_and_booking_date(); break;
          case 4: system("cls"); north_america(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); canada(); break;
      }
}
//                      NEW FUNCTION
void maxico()
{
      int maxi;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - MEXICO CITY INTERNATIONAL AIRPORT: MEXICO\n");
      printf("\t 2 - ISLA MARIA MADRE NAVAL INTERNATIONAL AIRPORT: ISLA MARIA MADRE\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&maxi);
      switch(maxi)
      {
          case 1: system("cls"); BTA = 120000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 126000; flight_time_and_booking_date(); break;
          case 3: system("cls"); north_america(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); maxico(); break;
      }
}
//                      NEW FUNCTION
void brazil()
{
      int brz;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - GRU AIRPORT: STATE OF SOA PAULO\n");
      printf("\t 2 - INTERNATIONAL AIRPORT OF BRASILIA: BRASILIA\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&brz);
      switch(brz)
      {
          case 1: system("cls"); BTA = 118000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 116000; flight_time_and_booking_date(); break;
          case 3: system("cls"); south_america(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); brazil(); break;
      }
}
//                      NEW FUNCTION
void argentina()
{
      int arg;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - ALTO RIO SENGUER AIRPORT: ALTO RIO SENGUER\n");
      printf("\t 2 - AZUL AIRPORT: AZUL\n\n");
      printf("\t 3 - GO BACK\n");
      printf("\t 4 - GO TO HOME\n");
      printf("\t 5 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&arg);
      switch(arg)
      {
          case 1: system("cls"); BTA = 130000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 126000; flight_time_and_booking_date(); break;
          case 3: system("cls"); south_america(); break;
          case 4: system("cls"); main(); break;
          case 5: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); argentina(); break;
      }
}
//                      NEW FUNCTION
void colombia()
{
    int col;
      printf("\n\n\t DEPATURE AIRPORTS\n\n");
      printf("\t 1 - JOSE MARIA CORDOVA INTERNATIONAL AIRPORT: RIONEGRO\n");
      printf("\t 2 - RAFAEL NUNEZ INTERNATIONAL AIRPORT: CARTAGENA\n\n");
      printf("\t 3 - EL DORADO LUIS CARLOS GALAN SARMIENTO INTERNATIONAL AIRPORT: BOGOTA\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT THE AIRPORT(or an option) : ");
      scanf("%d",&col);
      switch(col)
      {
          case 1: system("cls"); BTA = 130000; flight_time_and_booking_date(); break;
          case 2: system("cls"); BTA = 126000; flight_time_and_booking_date(); break;
          case 3: system("cls"); BTA = 124000; flight_time_and_booking_date(); break;
          case 4: system("cls"); south_america(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); colombia(); break;
      }
}
//                      NEW FUNCTION
void flight_time_and_booking_date()
{
    printf("\n\n\t Booking Date(dd/mm/yyyy) : ");
    scanf("%d%*c%d%*c%d",&booking_date,&booking_month,&booking_year);
    dates1();

}
//                      NEW FUNCTION
void dates1()
{
    a12 = today_time.wYear-1;
    b12=a12/4;
    d1=a12-b12;
    c1=(b12*366)+(d1*365);
    if(today_time.wMonth==1)
    {
        e1=0;
        dates2();
    }
    else if(today_time.wMonth==2)
    {
        e1=31;
        dates2();
    }
    else if(today_time.wMonth==3)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29;
        }
        else
        {
            e1=31+28;
        }
        dates2();
    }
    else if(today_time.wMonth==4)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31;
        }
        else
        {
            e1=31+28+31;
        }
        dates2();
    }
    else if(today_time.wMonth==5)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30;
        }
        else
        {
            e1=31+28+31+30;
        }
        dates2();
    }
    else if(today_time.wMonth==6)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31;
        }
        else
        {
            e1=31+28+31+30+31;
        }
        dates2();
    }
    else if(today_time.wMonth==7)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31+30;
        }
        else
        {
            e1=31+28+31+30+31+30;
        }
        dates2();
    }
    else if(today_time.wMonth==8)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31+30+31;
        }
        else
        {
            e1=31+28+31+30+31+30+31;
        }
        dates2();
    }
    else if(today_time.wMonth==9)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31+30+31+31;
        }
        else
        {
            e1=31+28+31+30+31+30+31+31;
        }
        dates2();
    }
    else if(today_time.wMonth==10)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31+30+31+31+30;
        }
        else
        {
            e1=31+28+31+30+31+30+31+31+30;
        }
        dates2();
    }
    else if(today_time.wMonth==11)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31+30+31+31+30+31;
        }
        else
        {
            e1=31+28+31+30+31+30+31+31+30+31;
        }
        dates2();
    }
    else if(today_time.wMonth==12)
    {
        if(today_time.wYear%4==0)
        {
            e1=31+29+31+30+31+30+31+31+30+31+30;
        }
        else
        {
            e1=31+28+31+30+31+30+31+31+30+31+30;
        }
        dates2();
    }

}
//                      NEW FUNCTION
void dates2()
{
    T1= today_time.wDay+e1+c1;

    a2 = booking_year-1;
    b2=a2/4;
    d2=a2-b2;
    c2=(b2*366)+(d2*365);
    if(booking_month==1)
    {
        e2=0;
        date_cal();
    }
    else if(booking_month==2)
    {
        e2=31;
        date_cal();
    }
    else if(booking_month==3)
    {
        if(booking_year%4==0)
        {
            e2=31+29;
        }
        else
        {
            e2=31+28;
        }
        date_cal();
    }
    else if(booking_month==4)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31;
        }
        else
        {
            e2=31+28+31;
        }
        date_cal();
    }
    else if(booking_month==5)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30;
        }
        else
        {
            e2=31+28+31+30;
        }
        date_cal();
    }
    else if(booking_month==6)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31;
        }
        else
        {
            e2=31+28+31+30+31;
        }
        date_cal();
    }
    else if(booking_month==7)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31+30;
        }
        else
        {
            e2=31+28+31+30+31+30;
        }
        date_cal();
    }
    else if(booking_month==8)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31+30+31;
        }
        else
        {
            e2=31+28+31+30+31+30+31;
        }
        date_cal();
    }
    else if(booking_month==9)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31+30+31+31;
        }
        else
        {
            e2=31+28+31+30+31+30+31+31;
        }
        date_cal();
    }
    else if(booking_month==10)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31+30+31+31+30;
        }
        else
        {
            e2=31+28+31+30+31+30+31+31+30;
        }
        date_cal();
    }
    else if(booking_month==11)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31+30+31+31+30+31;
        }
        else
        {
            e2=31+28+31+30+31+30+31+31+30+31;
        }
        date_cal();
    }
    else if(booking_month==12)
    {
        if(booking_year%4==0)
        {
            e2=31+29+31+30+31+30+31+31+30+31+30;
        }
        else
        {
            e2=31+28+31+30+31+30+31+31+30+31+30;
        }
        date_cal();
    }
    else
    {

        printf("\n           ------ INVALID MONTH ------\n\n");
        Sleep(3000);
        system("cls");
        flight_time_and_booking_date();
    }
}
//                      NEW FUNCTION
void date_cal()
{
    if(booking_month==1)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else  if(booking_month==2)
    {
        if(booking_year%4==0)
        {
            if(0<booking_date && booking_date<=29)
            {
                T2= c2+e2+booking_date;
            }
            else
            {
                printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
                flight_time_and_booking_date();
            }
        }
        else
        {
            if(0<booking_date && booking_date<=28)
            {
                T2= c2+e2+booking_date;
            }
            else
            {
                printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
                flight_time_and_booking_date();
            }
        }

    }
    else if(booking_month==3)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==4)
    {
        if(0<booking_date && booking_date<=30)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==5)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==6)
    {
        if(0<booking_date && booking_date<=30)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==7)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==8)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==9)
    {
        if(0<booking_date && booking_date<=30)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==10)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==11)
    {
        if(0<booking_date && booking_date<=30)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    else if(booking_month==12)
    {
        if(0<booking_date && booking_date<=31)
        {
            T2= c2+e2+booking_date;
        }
        else
        {
            printf("\n           INVALID DATE\n           BOOK ANOTHER DATE\n\n");Sleep(3000);system("cls");
            flight_time_and_booking_date();
        }
    }
    T3=T2-T1;
    if(T3<0)
    {
        printf("\n Invalid Booking Date\n -------------------------------------------------------------------------\n Book another date");
        Sleep(5000);system("cls");
        flight_time_and_booking_date();
    }
    else if(T3>=1 && T3<=30)
    {
        system("cls"); daily_flight_times();//next function
    }
    else if(T3>30)
    {
        printf("\n you can book seats only within 30 days from today\n -------------------------------------------------------------------------\n");
        Sleep(5000);system("cls");
        flight_time_and_booking_date();
    }
    else
    {
        printf("\n You can't book seats today. You must book seats 1 day before booking date\n ---------------------------------------------------------------------------\n ");
        Sleep(5000);system("cls");
        flight_time_and_booking_date();
    }
}
//                      NEW FUNCTION
void daily_flight_times()
{
      int time;
      printf("\n\n\t %d/%d/%d ",booking_date,booking_month,booking_year);
      printf("\n\n\t DAILY FLIGHT TIMES\n\n");
      printf("\t 1 - 6am\n");
      printf("\t 2 - 2pm\n");
      printf("\t 3 - 11pm\n\n");
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT A TIME(or an option) : ");
      scanf("%d",&time);
      switch(time)
      {
          case 1: system("cls"); classes(); break;
          case 2: system("cls"); classes(); break;
          case 3: system("cls"); classes(); break;
          case 4: system("cls"); flight_time_and_booking_date(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); daily_flight_times(); break;
      }
}
//                      NEW FUNCTION
void classes()
{
      int cls;
      printf("\n\n\t CLASSES \n\n");
      printf("\t 1 - FIRST CLASS    - Rs.%.2f/= \n",BTA+10000);
      printf("\t 2 - BUSINESS CLASS - Rs.%.2f/= \n",BTA+5000);
      printf("\t 3 - ECONOMY CLASS  - Rs.%.2f/= \n\n",BTA);
      printf("\t 4 - GO BACK\n");
      printf("\t 5 - GO TO HOME\n");
      printf("\t 6 - EXIT\n\n\n");

      printf("\t SELECT A CLASS(or an option) : ");
      scanf("%d",&cls);
      switch(cls)
      {
          case 1: system("cls"); first(); break;
          case 2: system("cls"); business(); break;
          case 3: system("cls"); economy(); break;
          case 4: system("cls"); daily_flight_times(); break;
          case 5: system("cls"); main(); break;
          case 6: system("cls"); exit1(); break;
          default: printf("\n\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); classes(); break;
      }
}
//                      NEW FUNCTION
void first()
{
    float f = BTA+10000; int x = 1; ticket_pay(f,x);
}
//                      NEW FUNCTION
void business()
{
    float b = BTA+5000; int x = 2; ticket_pay(b,x);
}
//                      NEW FUNCTION
void economy()
{
    float e = BTA; int x = 3; ticket_pay(e,x);
}
//                      NEW FUNCTION
void ticket_pay(float T, int n)
{
    int available_tickets;
    int num1,num2,num3;//variables for store int values from txt file
    fs = fopen("tickets.txt", "r");//open file for reading... r is for reading
    fscanf(fs, "%d%*c%d%*c%d", &num1, &num2, &num3);//scan the number from txt file
    fclose(fs);//close the connection
    int no = n;//no = n = x
    switch(no)
    {
        case 1: available_tickets = num1; break;
        case 2: available_tickets = num2; break;
        case 3: available_tickets = num3; break;
        default: break;
    }

    float ticket_amount = T;
    int tickets,p; char pessenger_nic[100][15];

    printf("\n\n\t----------*****TICKET PAYMENT*****----------\n\n");
    printf("\n\n\t HOW MANY TICKETS DO YOU WANT TO BOOK: ");
    scanf("%d",&tickets);
    if(available_tickets>=tickets)
    {
        printf("\n\n\t *** PESSENGER DETAILS ***");
        for(p=0;p<=(tickets-1);p++)
        {
            printf("\n\n\t PESSENGER %d NIC : ",p+1);
            scanf("%s",&pessenger_nic[p]);
        }
        printf("\n\n\t TOTAL TICKET AMOUNT: Rs.%.2f/= X %d = Rs.%.2f/= \n\n",ticket_amount,tickets,(float)tickets*ticket_amount);

        int balance_ticket = available_tickets - tickets;
        char bt[20], fir[20], bus[20], econ[20];
        sprintf(bt, "%d" ,balance_ticket);//convert int into string
        fs = fopen("tickets.txt", "w");//open file for write... w for write
        fprintf(fs, "");
        fclose(fs);
        fs = fopen("tickets.txt", "w");
        switch(no)
        {
            case 1: sprintf(bus, "%d" ,num2); sprintf(econ, "%d" ,num3); fprintf(fs, "%s/%s/%s" , bt, bus, econ); break;
            case 2: sprintf(fir, "%d" ,num1); sprintf(econ, "%d" ,num3); fprintf(fs, "%s/%s/%s" , fir, bt, econ); break;
            case 3: sprintf(fir, "%d" ,num1); sprintf(bus, "%d" ,num2); fprintf(fs, "%s/%s/%s" , fir, bus, bt); break;
            default: break;
        }
        fclose(fs);
        thanks();
    }
    else if(available_tickets == 0)
    {
        printf("\n\n\t ****** ALL TICKETS ARE BOOKED FOR THIS TRAVEL ******");
        Sleep(5000); system("cls"); yesno();
    }
    else
    {
        int yn;
        printf("\n\n\t ****** THERE ARE ONLY %d TICKETS ARE AVAILABALE ******",available_tickets);
        printf("\n\n\t DO YOU WANT TO BOOK THOSE %d AVAILABLE TICKETS?",available_tickets);
        printf("\n\n\t 1 - YES \n\t 2 - NO ");
        printf("\n\n\t SELECT AN OPTION : ");
        scanf("%d",&yn);
        switch(yn)
        {
            case 1:   printf("\n\n\t *** PESSENGER DETAILS ***");
                        for(p=0;p<=(available_tickets-1);p++)
                        {
                            printf("\n\n\t PESSENGER %d NIC : ",p+1);
                            scanf("%s",&pessenger_nic[p]);
                        }
                        printf("\n\n\t TOTAL TICKET AMOUNT: Rs.%.2f/= X %d = Rs.%.2f/= \n\n",ticket_amount,available_tickets,(float)available_tickets*ticket_amount);

                        char fir[20], bus[20], econ[20];
                        fs = fopen("tickets.txt", "w");//open file for write... w for write
                        fprintf(fs, "");
                        fclose(fs);
                        fs = fopen("tickets.txt", "w");
                        switch(no)
                        {
                            case 1: sprintf(bus, "%d" ,num2); sprintf(econ, "%d" ,num3); fprintf(fs, "00/%s/%s" , bus, econ); break;
                            case 2: sprintf(fir, "%d" ,num1); sprintf(econ, "%d" ,num3); fprintf(fs, "%s/00/%s" , fir, econ); break;
                            case 3: sprintf(fir, "%d" ,num1); sprintf(bus, "%d" ,num2); fprintf(fs, "%s/%s/00" , fir, bus); break;
                            default: break;
                        }
                        fclose(fs);
                        thanks();break;

            case 2: system("cls"); yesno(); break;
            default: system("cls"); exit1(); break;
        }
    }

}
//                      NEW FUNCTION
void yesno()
{
    int yn;
    printf("\n\n\t BOOK ANOTHER ONE: ");
    printf("\n\n\t 1 - YES \n\t 2 - NO ");
    printf("\n\n\t SELECT AN OPTION : ");
    scanf("%d",&yn);
    switch(yn)
    {
        case 1: system("cls"); main(); break;
        case 2: system("cls"); exit1(); break;
        default: printf("\n\t ****** INVALID INPUT ******"); Sleep(3000); system("cls"); yesno(); break;
    }
}
//                      NEW FUNCTION
void thanks()
{
    int return_exit;
    printf("\n\n\t WE WILL SEND TICKET DETAILS AND PAYMENT DETAILS TO %s WITH IN 1 HOUR",cus_email);

    printf("\n\n\t THANKS FOR USING OUR SERVICE %s %s",cus_name,cus_lastname);

    printf("\n\n\n\n\t 000 - BOOK ANOTHER TRAVEL \n\t 999 - EXIT\n\n\t SELECT AN OPTION : ");
    scanf("%d",&return_exit);
    if(return_exit==000)
    {
        system("cls"); main();
    }
    else
    {
        system("cls"); exit1();
    }
}
//                      NEW FUNCTION
void exit1()
{
    int i;

    for(i=10; i>=0; i--)
    {
        printf("\n\n\n\n\n\n \t\t\t\t    ****** EXITING ****** ");
        printf("\n\n\n\n\n\n \t\t\t\t SCREEN WILL CLOSE IN %d SEC ",i);
        Sleep(1000);
        system("cls");
    }
    exit2();
}
//                      NEW FUNCTION(an empty function to terminate the program)
void exit2(){}
