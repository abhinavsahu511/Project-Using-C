#include<stdio.h>
int main(){
printf("                                            --------------------------\n");
printf("                                            |WELCOME TO UNIT CONVERTER|\n");
printf("                                            --------------------------\n");
printf(">>TO START THE UNIT CONVERTER PRESS [S]:");
char start,ch;
scanf("%c",&start);
if(start=='S'){
    printf("                                             ----------------------\n");
    printf("                                             |UNIT CONVERTER STARTS|\n");
    printf("                                             ----------------------\n");
    printf("                    PRESS 1-LENGTH CONVERTER                  PRESS 2-WIEGHT AND MASS CONVERTER\n");
    printf("                    PRESS 3-AREA CONVERTER                    PRESS 4-VOLUME CONVERTER\n");
    printf("                    PRESS 5-PRESSURE CONVERTER                PRESS 6-CURRENECY CONVERTER\n");
    char ch;
    printf("PRESS BUTTON WHAT YOU WANT TO CONVERT:");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        printf("                                           ------------------------------\n");
        printf("                                           |LENGTH CONVERTER IS ACTIVATED|\n");
        printf("                                           --- --------------------------\n");
        printf("                      PRESS 1-CM TO INCHES                  PRESS 2-INCHES TO CM\n");
        printf("                      PRESS 3-MM TO INCHES                  PRESS 4-INCHES TO MM\n");
        printf("                      PRESS 5-METERS TO FEET                PRESS 6-FEET TO METERS\n");
        printf("                      PRESS 7-KM TO MILES                   PRESS 8-MILES TO KM\n");
        printf("                      PRESS 9-CM TO FEET                    PRESS 10-FEET TO CM\n");
        printf("                      PRESS 11-METERS TO YARDS              PRESS 12-YARDS TO METERS\n");
        printf("                      PRESS 13-METERS TO MILES              PRESS 14-MILES TO METERS\n");
        printf("                      PRESS 15-MM TO M                      PRESS 16-M TO MM\n");
        printf("                      PRESS 17-KM TO M                      PRESS 18-M TO KM\n");
        char ch1;
        printf("WANT YOU WANT TO CONVERT>>PRESS BUTTON:");
        scanf("%d",&ch1);
        switch(ch1){
        case 1:
            printf("                                     [YOU CHOOSE TO CONVERT CM TO INCHES]\n");
            float ans,cm,inche,mtr,mm,feet,km,miles,yard;
            printf(">>ENTER THE CM:");
            scanf("%f",&cm);
            ans=(cm*0.394);
            printf("[%f CM=%f INCHES]\n",cm,ans);
            break;
        case 2:
            printf("                                     [YOU CHOOSE TO CONVERT INCHES TO CM]\n");
            printf(">>ENTER THE INCHES:");
            scanf("%f",&inche);
            ans=(inche*2.54);
            printf("[%f INCHES=%f CM]\n",inche,ans);
            break;
        case 3:
            printf("                                     [YOU CHOOSE TO CONVERT MM TO INCHES]\n");
            printf(">>ENTER THE MM:");
            scanf("%f",&mm);
            ans=(mm*0.0394);
            printf("[%f MM=%f INCHES]\n",mm,ans);
            break;
        case 4:
            printf("                                     [YOU CHOOSE TO CONVERT INCHES TO MM]\n");
            printf(">>ENTER THE INCHES:");
            scanf("%f",&inche);
            ans=(inche*25.4);
            printf("[%f INCHES=%f MM]\n",mm,ans);
            break;
         case 5:
            printf("                                     [YOU CHOOSE TO CONVERT METERS TO FEET]\n");
            printf(">>ENTER THE SQAURE METERS:");
            scanf("%f",&mtr);
            ans=(mtr*3.28084);
            printf("[%f METERS=%f FEET]\n",mtr,ans);
            break;
        case 6:
            printf("                                     [YOU CHOOSE TO CONVERT FEET TO METERS]\n");
            printf(">>ENTER THE FEET:");
            scanf("%f",&feet);
            ans=(feet*0.305);
            printf("[%f FEET=%f METERS]\n",feet,ans);
            break;
        case 7:
            printf("                                     [YOU CHOOSE TO CONVERT KM TO MILES]\n");
            printf(">>ENTER THE KM:");
            scanf("%f",&km);
            ans=(km*0.621);
            printf("[%f KM=%f MILES]\n",km,ans);
            break;
        case 8:
            printf("                                     [YOU CHOOSE TO CONVERT MILES TO KM]\n");
            printf(">>ENTER THE MILES:");
            scanf("%f",&miles);
            ans=(miles*0.621);
            printf("[%f MILES=%f KM]\n",miles,ans);
            break;
         case 9:
            printf("                                     [YOU CHOOSE TO CONVERT CM TO FEET]\n");
            printf(">>ENTER THE CM:");
            scanf("%f",&cm);
            ans=(cm*0.032804);
            printf("[%f CM=%f FEET]\n",cm,ans);
            break;
         case 10:
            printf("                                     [YOU CHOOSE TO CONVERT FEET TO CM]\n");
            printf(">>ENTER THE FEET:");
            scanf("%f",&feet);
            ans=(feet*30.48);
            printf("[%f FEET=%f CM]\n",feet,ans);
            break;
        case 11:
            printf("                                     [YOU CHOOSE TO CONVERT METERS TO YARDS]\n");
            printf(">>ENTER THE METERS:");
            scanf("%f",&mtr);
            ans=(mtr*1.094);
            printf("[%f METERS=%f YARDS]\n",mtr,ans);
            break;
        case 12:
            printf("                                     [YOU CHOOSE TO CONVERT YARDS TO METERS]\n");
            printf(">>ENTER THE YARDS:");
            scanf("%f",&yard);
            ans=(yard*0.9144);
            printf("[%f YARDS=%f METERS]\n",yard,ans);
            break;
        case 13:
            printf("                                     [YOU CHOOSE TO CONVERT METERS TO MILES]\n");
            printf(">>ENTER THE MILES:");
            scanf("%f",&mtr);
            ans=(mtr*0.000621);
            printf("[%f METERS=%f MILES]\n",mtr,ans);
            break;
        case 14:
            printf("                                     [YOU CHOOSE TO CONVERT MILES TO METERS]\n");
            printf(">>ENTER THE MILES:");
            scanf("%f",&miles);
            ans=(miles*1609.34);
            printf("[%f MILES=%f METERS]\n",miles,ans);
            break;
        case 15:
            printf("                                     [YOU CHOOSE TO CONVERT MM TO M]\n");
            printf(">>ENTER THE MM:");
            scanf("%f",&mm);
            ans=(mm*0.001);
            printf("[%f MM=%f M]\n",mm,ans);
            break;
        case 16:
            printf("                                     [YOU CHOOSE TO CONVERT M TO MM]\n");
            printf(">>ENTER THE M:");
            scanf("%f",&mtr);
            ans=(mtr*1000);
            printf("[%f M=%f MM]\n",mtr,ans);
            break;
        case 17:
            printf("                                     [YOU CHOOSE TO CONVERT KM TO M]\n");
            printf(">>ENTER THE KM:");
            scanf("%f",&km);
            ans=(km*1000);
            printf("[%f KM=%f M]\n",km,ans);
            break;
        case 18:
            printf("                                     [YOU CHOOSE TO CONVERT M TO KM]\n");
            printf(">>ENTER THE M:");
            scanf("%f",&mtr);
            ans=(mtr*0.001);
            printf("[%f M=%f KM]\n",mtr,ans);
            break;
         default:
            printf("                                  [!!PLEASE ENTER A VALID CONVERSION!!]\n");
        }
        break;
    case 2:
        printf("                                 ---------------------------------------\n");
        printf("                                 |WIEGHT AND MASS CONVERTER IS ACTIVATED|\n");
        printf("                                 ---------------------------------------\n");
        printf("                      PRESS 1-GRAMS TO KGs                  PRESS 2-KGs TO GRAMS\n");
        printf("                      PRESS 3-GRAMS TO OUNCES               PRESS 4-OUNCES TO GRAMS\n");
        printf("                      PRESS 5-GRAMS TO MILIGRAMS            PRESS 6-MILIGRAMS TO GRAMS\n");
        printf("                      PRESS 7-GRAMS TO POUNDS               PRESS 8-POUNDS TO GRAMS\n");
        printf("                      PRESS 9-KGS TO MILIGRAMS              PRESS 10-MILIGRAMS TO KGS\n");
        printf("                      PRESS 11-KGS TO POUNDS                PRESS 12-POUNDS TO KGS\n");
        printf("                      PRESS 13-KGS TO TONS                  PRESS 14-TONS TO KGS\n");
        char ch2;
        printf("WANT YOU WANT TO CONVERT>>PRESS BUTTON:");
        scanf("%d",&ch2);
        switch(ch2){
        case 1:
            printf("                                     [YOU CHOOSE TO CONVERT GRAMS TO KGs]\n");
            float ans,gram,kg,ounces,ml,pound,ton;
            printf(">>ENTER THE GRAMS:");
            scanf("%f",&gram);
            ans=(gram*0.001);
            printf("[%f GRAM=%f KGS]\n",gram,ans);
            break;
        case 2:
            printf("                                     [YOU CHOOSE TO CONVERT KGS TO GRAMS]\n");
            printf(">>ENTER THE KGS:");
            scanf("%f",&kg);
            ans=(kg*1000);
            printf("[%f KGS=%f GRAMS]\n",kg,ans);
            break;
        case 3:
            printf("                                     [YOU CHOOSE TO CONVERT GRAMS TO OUNCES]\n");
            printf(">>ENTER THE GRAM:");
            scanf("%f",&gram);
            ans=(gram*0.0353);
            printf("[%f GRAM=%f OUNCES]\n",gram,ans);
            break;
        case 4:
            printf("                                     [YOU CHOOSE TO CONVERT OUNCES TO GRAMS]\n");
            printf(">>ENTER THE OUNCES:");
            scanf("%f",&ounces);
            ans=(ounces*28.3495);
            printf("[%f OUNCES=%f GRAMS]\n",ounces,ans);
            break;
         case 5:
            printf("                                     [YOU CHOOSE TO CONVERT GRAMS TO MILIGRAMS]\n");
            printf(">>ENTER THE GRAMS:");
            scanf("%f",&gram);
            ans=(gram*1000);
            printf("[%f GRAM=%f MILIGRAMS]\n",gram,ans);
            break;
        case 6:
            printf("                                     [YOU CHOOSE TO CONVERT MILIGRAMS TO GRAMS]\n");
            printf(">>ENTER THE MILIGRAMS:");
            scanf("%f",&ml);
            ans=(ml*0.001);
            printf("[%f MILIGRAMS=%f GRAMS]\n",ml,ans);
            break;
        case 7:
            printf("                                     [YOU CHOOSE TO CONVERT GRAMS TO POUNDS]\n");
            printf(">>ENTER THE GRAMS:");
            scanf("%f",&gram);
            ans=(gram*0.0022);
            printf("[%f GRAMS=%f POUNDS]\n",gram,ans);
            break;
        case 8:
            printf("                                     [YOU CHOOSE TO CONVERT POUND TO GRAMS]\n");
            printf(">>ENTER THE POUNDS:");
            scanf("%f",&pound);
            ans=(pound*453.592);
            printf("[%f POUND=%f GRAMS]\n",pound,ans);
            break;
         case 9:
            printf("                                     [YOU CHOOSE TO CONVERT KGS TO MILIGRAMS]\n");
            printf(">>ENTER THE KGS:");
            scanf("%f",&kg);
            ans=(kg*1000000);
            printf("[%f KGS=%f MILIGRAMS]\n",kg,ans);
            break;
         case 10:
            printf("                                     [YOU CHOOSE TO CONVERT MILIGRAMS TO KGS]\n");
            printf(">>ENTER THE MILIGRAMS:");
            scanf("%f",&ml);
            ans=(ml*0.0000006);
            printf("[%f MILIGRAMS=%f KGS]\n",ml,ans);
            break;
        case 11:
            printf("                                     [YOU CHOOSE TO CONVERT KGS TO POUNDS]\n");
            printf(">>ENTER THE KGS:");
            scanf("%f",&kg);
            ans=(kg*2.205);
            printf("[%f KGS=%f POUNDS]\n",kg,ans);
            break;
        case 12:
            printf("                                     [YOU CHOOSE TO CONVERT POUNDS TO KGS]\n");
            printf(">>ENTER THE POUNDS:");
            scanf("%f",&pound);
            ans=(pound*0.453592);
            printf("[%f POUNDS=%f KGS]\n",pound,ans);
            break;
        case 13:
            printf("                                     [YOU CHOOSE TO CONVERT KGS TO TONS]\n");
            printf(">>ENTER THE KGS:");
            scanf("%f",&kg);
            ans=(kg*0.0011);
            printf("[%f KGS=%f TONS]\n",kg,ans);
            break;
        case 14:
            printf("                                     [YOU CHOOSE TO CONVERT TONS TO KGS]\n");
            printf(">>ENTER THE TONS:");
            scanf("%f",&ton);
            ans=(ton*907.185);
            printf("[%f TONS=%f KGS]\n",ton,ans);
            break;

         default:
            printf("                                  [!!PLEASE ENTER A VALID CONVERSION!!]\n");
        }
        break;
    case 3:
        printf("                                        ----------------------------\n");
        printf("                                        |AREA CONVERTER IS ACTIVATED|\n");
        printf("                                        ----------------------------\n");
        printf("                      PRESS 1-ACRES TO SQUARE FEET                  PRESS 2-SQUARE FEET TO ACRES\n");
        printf("                      PRESS 3-HECTARE TO ACRES                      PRESS 4-ACRES TO HECTARE\n");
        printf("                      PRESS 5-SQUARE FEET TO SQUARE METER           PRESS 6-SQAURE METER TO SQUARE FEET\n");
        printf("                      PRESS 7-ACRES TO SQUARE MILES                 PRESS 8-SQUARE MILES TO ACRES\n");
        printf("                      PRESS 9-SQAURE FEET TO SQUARE YARDS           PRESS 10-SQUARE YARDS TO SQAURES FEET\n");
        printf("WANT YOU WANT TO CONVERT>>PRESS BUTTON:");
        scanf("%d",&ch2);
        switch(ch2){
        case 1:
            printf("                                     [YOU CHOOSE TO CONVERT ACRES TO SQUARE FEET]\n");
            float acres,sqfeet,hect,sqmeter,sqmiles,sqyard,ans;
            printf(">>ENTER THE ACRES:");
            scanf("%f",&acres);
            ans=(acres*43560);
            printf("[%f ACRES=%f SQUARE FEET]\n",acres,ans);
            break;
        case 2:
            printf("                                     [YOU CHOOSE TO CONVERT SQUARE FEET TO ACRES]\n");
            printf(">>ENTER THE SQUARE FEET:");
            scanf("%f",&sqfeet);
            ans=(sqfeet*0.000002296);
            printf("[%f SQAURE FEET=%f ACRES]\n",sqfeet,ans);
            break;
        case 3:
            printf("                                     [YOU CHOOSE TO CONVERT HECTARE TO ACRES]\n");
            printf(">>ENTER THE HECTARE:");
            scanf("%f",&hect);
            ans=(hect*2.471);
            printf("[%f HECTARE=%f ACRES]\n",hect,ans);
            break;
        case 4:
            printf("                                     [YOU CHOOSE TO CONVERT ACRES TO HECTARE]\n");
            printf(">>ENTER THE ACRES:");
            scanf("%f",&acres);
            ans=(acres*0.405);
            printf("[%f ACRES=%f HECTARE]\n",acres,ans);
            break;
         case 5:
            printf("                                     [YOU CHOOSE TO CONVERT SQAURE FEET TO SQUARE METER]\n");
            printf(">>ENTER THE SQAURE FEET:");
            scanf("%f",&sqfeet);
            ans=(sqfeet*0.0929);
            printf("[%f SQAURE FEET=%f SQUARE METER]\n",sqfeet,ans);
            break;
        case 6:
            printf("                                     [YOU CHOOSE TO CONVERT SQUARE METER TO SQAURE FEET]\n");
            printf(">>ENTER THE SQUARE METER:");
            scanf("%f",&sqmeter);
            ans=(sqmeter*10.764);
            printf("[%f SQAURE METER=%f SQAURE FEET]\n",sqmeter,ans);
            break;
        case 7:
            printf("                                     [YOU CHOOSE TO CONVERT ACRES TO SQUARE MILES]\n");
            printf(">>ENTER THE ACRES:");
            scanf("%f",&acres);
            ans=(acres*0.00156);
            printf("[%f ACRES=%f SQUARE MILES]\n",acres,ans);
            break;
        case 8:
            printf("                                     [YOU CHOOSE TO CONVERT SQUARE MILES TO ACRES]\n");
            printf(">>ENTER THE SQUARE MILES:");
            scanf("%f",&sqmiles);
            ans=(sqmiles*640);
            printf("[%f SQUARE MILES=%f ACRES]\n",sqmiles,ans);
            break;
         case 9:
            printf("                                     [YOU CHOOSE TO CONVERT SQUARE FEET TO SQUARE YARDS]\n");
            printf(">>ENTER THE SQUARE FEET:");
            scanf("%f",&sqfeet);
            ans=(sqfeet*0.111);
            printf("[%f SQUARE FEET=%f SQUARE YARDS]\n",sqfeet,ans);
            break;
         case 10:
            printf("                                     [YOU CHOOSE TO CONVERT SQUARE YARDS TO SQUARE FEET]\n");
            printf(">>ENTER THE SQUARE YARDS:");
            scanf("%f",&sqyard);
            ans=(sqyard*9);
            printf("[%f SQUARE YARDS=%f SQUARE FEET]\n",sqyard,ans);
            break;
         default:
            printf("                                  [!!PLEASE ENTER A VALID CONVERSION!!]\n");
        }
        break;
        break;
    case 4:
        printf("                                         ------------------------------\n");
        printf("                                         |VOLUME CONVERTER IS ACTIVATED|\n");
        printf("                                         ------------------------------\n");
        printf("                      PRESS 1-LTR TO GALLONS                  PRESS 2-GALLONS TO LTR\n");
        printf("                      PRESS 3-ML TO LTR                       PRESS 4-LTR TO ML\n");
        printf("                      PRESS 5-ML TO CC                        PRESS 6-CC TO ML\n");
        printf("                      PRESS 7-CUBICFEET TO GALLONS            PRESS 8-GALLONS TO CUBIC FEET\n");
        printf("                      PRESS 9-PINT TO LTR                     PRESS 10-LTR TO PINT\n");
        printf("WANT YOU WANT TO CONVERT>>PRESS BUTTON:");
        scanf("%d",&ch2);
        switch(ch2){
        case 1:
            printf("                                     [YOU CHOOSE TO CONVERT LTR TO GALLONS]\n");
            float ans,ltr,gallons,ml,cc,cubicfeet,pint;
            printf(">>ENTER THE LTR:");
            scanf("%f",&ltr);
            ans=(ltr*0.264172);
            printf("[%f LTR=%f GALLONS]\n",ltr,ans);
            break;
        case 2:
            printf("                                     [YOU CHOOSE TO CONVERT GALLONS TO LTR]\n");
            printf(">>ENTER THE GALLONS:");
            scanf("%f",&gallons);
            ans=(gallons*3.785);
            printf("[%f GALLONS=%f LTR]\n",gallons,ans);
            break;
        case 3:
            printf("                                     [YOU CHOOSE TO CONVERT ML TO LTR]\n");
            printf(">>ENTER THE ML:");
            scanf("%f",&ml);
            ans=(ml*0.001);
            printf("[%f ML=%f LTR]\n",ml,ans);
            break;
        case 4:
            printf("                                     [YOU CHOOSE TO CONVERT LTR TO ML]\n");
            printf(">>ENTER THE LTR:");
            scanf("%f",&ltr);
            ans=(ltr*1000);
            printf("[%f LTR=%f ML]\n",ltr,ans);
            break;
         case 5:
            printf("                                     [YOU CHOOSE TO CONVERT ML TO CC]\n");
            printf(">>ENTER THE ML:");
            scanf("%f",&ml);
            ans=(ml*1);
            printf("[%f ML=%f CC]\n",ml,ans);
            break;
        case 6:
            printf("                                     [YOU CHOOSE TO CONVERT CC TO ML]\n");
            printf(">>ENTER THE CC:");
            scanf("%f",&cc);
            ans=(cc*0.1);
            printf("[%f CC=%f ML]\n",cc,ans);
            break;
        case 7:
            printf("                                     [YOU CHOOSE TO CONVERT CUBICFEET TO GALLONS]\n");
            printf(">>ENTER THE CUBICFEET:");
            scanf("%f",&cubicfeet);
            ans=(cubicfeet*7.481);
            printf("[%f CUBICFEET=%f GALLONS]\n",cubicfeet,ans);
            break;
        case 8:
            printf("                                     [YOU CHOOSE TO CONVERT GALLONS TO CUBICFEET]\n");
            printf(">>ENTER THE GALLONS:");
            scanf("%f",&gallons);
            ans=(gallons*0.134);
            printf("[%f GALLONS=%f CUBICFEET]\n",gallons,ans);
            break;
         case 9:
            printf("                                     [YOU CHOOSE TO CONVERT PINT TO LTR]\n");
            printf(">>ENTER THE PINT:");
            scanf("%f",&pint);
            ans=(pint*0.473);
            printf("[%f PINT=%f LTR]\n",pint,ans);
            break;
         case 10:
            printf("                                     [YOU CHOOSE TO CONVERT LTR TO PINT]\n");
            printf(">>ENTER THE LTR:");
            scanf("%f",&ltr);
            ans=(ltr*2.11333);
            printf("[%f LTR=%f PINT]\n",ltr,ans);
            break;
         default:
            printf("                                  [!!PLEASE ENTER A VALID CONVERSION!!]\n");
        }
        break;
    case 5:
        printf("                                   --------------------------------\n");
        printf("                                   |PRESSURE CONVERTER IS ACTIVATED|\n");
        printf("                                   --------------------------------\n");
        printf("                      PRESS 1-BAR TO PSI                  PRESS 2-PSI TO BAR\n");
        printf("                      PRESS 3-KPA TO PSI                  PRESS 4-PSI TO KPA\n");
        printf("WANT YOU WANT TO CONVERT>>PRESS BUTTON:");
        scanf("%d",&ch2);
        switch(ch2){
        case 1:
            printf("                                     [YOU CHOOSE TO CONVERT BAR TO PSI]\n");
            float bar,ans;
            printf(">>ENTER THE BAR:");
            scanf("%f",&bar);
            ans=(bar*14.504);
            printf("[%f BAR=%f PSI]\n",bar,ans);
            break;
        case 2:
            printf("                                     [YOU CHOOSE TO CONVERT PSI TO BAR]\n");
            float psi;
            printf(">>ENTER THE PSI:");
            scanf("%f",&psi);
            ans=(psi*0.0689);
            printf("[%f PSI=%f BAR]\n",psi,ans);
            break;
        case 3:
            printf("                                     [YOU CHOOSE TO CONVERT KPA TO PSI]\n");
            float kpa;
            printf(">>ENTER THE BAR:");
            scanf("%f",&kpa);
            ans=(kpa*0.145038);
            printf("[%f KPA=%f PSI]\n",kpa,ans);
            break;
        case 4:
            printf("                                     [YOU CHOOSE TO CONVERT PSI TO KPA]\n");
            printf(">>ENTER THE BAR:");
            scanf("%f",&psi);
            ans=(psi*6.895);
            printf("[%f PSI=%f KPA]\n",psi,ans);
            break;
        default:
            printf("                                  [!!PLEASE ENTER A VALID CONVERSION!!]\n");
        }
        break;
    case 6:
        printf("                                      --------------------------------\n");
        printf("                                      |CURRENCY CONVERTER IS ACTIVATED|\n");
        printf("                                      --------------------------------\n");
        printf("                      PRESS 1-INR TO USD                  PRESS 2-USD TO INR\n");
        printf("                      PRESS 3-INR TO GBP                  PRESS 4-GBP TO INR\n");
        printf("                      PRESS 5-INR TO EUR                  PRESS 6-EUR TO INR\n");
        printf("                      PRESS 7-INR TO AUD                  PRESS 8-AUD TO INR\n");
        printf("                      PRESS 9-INR TO CAD                  PRESS 10-CAD TO INR\n");
        printf("                      PRESS 11-INR TO JPY                 PRESS 12-JPY TO INR\n");
        printf("                      PRESS 13-INR TO NZ                  PRESS 14-NZD TO INR\n");
        printf("WANT YOU WANT TO CONVERT>>PRESS BUTTON:");
        scanf("%d",&ch2);
        switch(ch2){
        case 1:
            printf("                                     [YOU CHOOSE TO CONVERT INR TO USD]\n");
            float inr,usd,gbp,eur,aud,cad,jpy,nz,ans;
            printf(">>ENTER THE INR:");
            scanf("%f",&inr);
            ans=(inr*0.012);
            printf("[%f INR=%f USD]\n",inr,ans);
            break;
        case 2:
            printf("                                     [YOU CHOOSE TO CONVERT USD TO INR]\n");
            printf(">>ENTER THE USD:");
            scanf("%f",&usd);
            ans=(usd*81.83);
            printf("[%f USD=%f INR]\n",usd,ans);
            break;
        case 3:
            printf("                                     [YOU CHOOSE TO CONVERT INR TO GBP]\n");
            printf(">>ENTER THE INR:");
            scanf("%f",&inr);
            ans=(inr*0.0098);
            printf("[%f INR=%f GBP]\n",inr,ans);
            break;
        case 4:
            printf("                                     [YOU CHOOSE TO CONVERT GBP TO INR]\n");
            printf(">>ENTER THE GBP:");
            scanf("%f",&gbp);
            ans=(gbp*102.34);
            printf("[%f GBP=%f INR]\n",gbp,ans);
            break;
         case 5:
            printf("                                     [YOU CHOOSE TO CONVERT INR TO EUR]\n");
            printf(">>ENTER THE INR:");
            scanf("%f",&inr);
            ans=(inr*0.011);
            printf("[%f INR=%f EUR]\n",inr,ans);
            break;
        case 6:
            printf("                                     [YOU CHOOSE TO CONVERT EUR TO INR]\n");
            printf(">>ENTER THE EUR:");
            scanf("%f",&eur);
            ans=(eur*90.15);
            printf("[%f EUR=%f INR]\n",eur,ans);
            break;
        case 7:
            printf("                                     [YOU CHOOSE TO CONVERT INR TO AUD]\n");
            printf(">>ENTER THE INR:");
            scanf("%f",&inr);
            ans=(inr*0.018);
            printf("[%f INR=%f AUD]\n",inr,ans);
            break;
        case 8:
            printf("                                     [YOU CHOOSE TO CONVERT AUD TO INR]\n");
            printf(">>ENTER THE AUD:");
            scanf("%f",&aud);
            ans=(aud*55.11);
            printf("[%f AUD=%f INR]\n",aud,ans);
            break;
         case 9:
            printf("                                     [YOU CHOOSE TO CONVERT INR TO CAD]\n");
            printf(">>ENTER THE INR:");
            scanf("%f",&inr);
            ans=(inr*0.016);
            printf("[%f INR=%f CAD]\n",inr,ans);
            break;
         case 10:
            printf("                                     [YOU CHOOSE TO CONVERT CAD TO INR]\n");
            printf(">>ENTER THE CAD:");
            scanf("%f",&cad);
            ans=(cad*61.11);
            printf("[%f CAD=%f INR]\n",cad,ans);
            break;
         default:
            printf("                                  [!!PLEASE ENTER A VALID CONVERSION!!]\n");
        }
        break;
    default:
        printf("                                      !!!!!!!!PLEASE ENTER VALID KEY!!!!!!!!");
     }
}else{
printf("                                       [UNIT CONVERTER IS NOT STARTED]\n");
printf("                                       >>TO START THE UNIT CONVERTER PRESS [S]");
}

}
