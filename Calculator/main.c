#include "STD_TYPES.h"
#include "PORT_interface.h"
#include "CLCD_interface.h"
#include "KEYPAD_interface.h"


void main(){
	PORT_voidInit();
	CLCD_voidInit();
	s8 Local_u8PressedVal=0,Local_u8Col=0,Local_u8CharCounter=0,Local_u8NumCounter1=1,Local_u8NumCounter2=1;
	s8 Local_u8Result=0,Local_u8Num1=0,Local_u8Num2=0;
	u8 Local_u8NumFlag=0;
	u8 Local_u8Characters[4]={'+','-','/','*'};
	while(1){
		do{
			Local_u8PressedVal=KPD_u8GetPressedKey();
		}while(Local_u8PressedVal==0xff);
		switch(Local_u8PressedVal){
		case KPD_CLR:
			CLCD_voidInit();
			Local_u8NumFlag=0;
			Local_u8Num1=0;
			Local_u8Num2=0;
			//CLCD_voidSendData('C');
			//			if(Local_u8Col==0 ){
			//				Local_u8NumCounter1++;
			//				if(Local_u8NumCounter1>9){
			//					Local_u8NumCounter1=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter1);
			//			}
			//			else if(Local_u8Col==2){
			//				Local_u8NumCounter2++;
			//				if(Local_u8NumCounter2>9){
			//					Local_u8NumCounter2=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter2);
			//			}
			//			else if(Local_u8Col==1){
			//				Local_u8CharCounter++;
			//				if(Local_u8CharCounter>3){
			//					Local_u8CharCounter=0;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidSendData(Local_u8Characters[Local_u8CharCounter]);
			//			}
			break;
		case KPD_PLUS:
			if(Local_u8NumFlag==0){
			CLCD_voidSendData('+');
			Local_u8NumFlag=1;
			Local_u8CharCounter=0;}
			//			if(Local_u8Col==0 ){
			//				Local_u8NumCounter1--;
			//				if(Local_u8NumCounter1<=0){
			//					Local_u8NumCounter1=0;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter1);
			//			}
			//			else if(Local_u8Col==2){
			//				Local_u8NumCounter2--;
			//				if(Local_u8NumCounter2<=0){
			//					Local_u8NumCounter2=0;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter2);
			//			}
			//			else if(Local_u8Col==1){
			//				Local_u8CharCounter--;
			//				if(Local_u8CharCounter<0){
			//					Local_u8CharCounter=3;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidSendData(Local_u8Characters[Local_u8CharCounter]);
			//			}
			break;
		case KPD_MINUS:
			if(Local_u8NumFlag==0){
			CLCD_voidSendData('-');
			Local_u8NumFlag=1;
			Local_u8CharCounter=1;}
			//			switch(Local_u8Col){
			//			case 0:
			//				Local_u8Num1=Local_u8NumCounter1;
			//				Local_u8Col++;
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				break;
			//			case 1:
			//				Local_u8Col++;
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				break;
			//			case 2:
			//				Local_u8Num2=Local_u8NumCounter2;
			//				Local_u8Col++;
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidSendData('=');
			//				Local_u8Col++;
			//				switch(Local_u8Characters[Local_u8CharCounter]){
			//				case '+':
			//					CLCD_voidWriteNumber(Local_u8Num1+Local_u8Num2);
			//					break;
			//				case '-':
			//					Local_u8Result=Local_u8Num1-Local_u8Num2;
			//					if (Local_u8Result<0){
			//						CLCD_voidSendData('-');
			//						Local_u8Result=-Local_u8Result;
			//					}
			//					CLCD_voidWriteNumber(Local_u8Result);
			//					break;
			//				case '/':
			//					if(Local_u8Num2==0){
			//						CLCD_voidSendString("Invalid!");
			//						break;
			//					}
			//					f32 Local_f32Res=(float)Local_u8Num1/Local_u8Num2;
			//					CLCD_voidWriteFloatNum(Local_f32Res);
			//					break;
			//				case '*':
			//					CLCD_voidWriteNumber(Local_u8Num1*Local_u8Num2);
			//					break;
			//				}
			//				break;
			//				case 4:
			//					CLCD_voidInit();
			//					Local_u8Col=0;
			//					Local_u8NumCounter1=1;
			//					Local_u8NumCounter2=1;
			//					Local_u8CharCounter=0;
			//					Local_u8Num1=1;
			//					Local_u8Num2=1;
			//					CLCD_voidWriteNumber(Local_u8NumCounter1);
			//					CLCD_voidSendData(Local_u8Characters[Local_u8CharCounter]);
			//					CLCD_voidWriteNumber(Local_u8NumCounter2);
			//					CLCD_voidGoToXY(0,Local_u8Col);
			//					break;
			//			}
			break;
		case KPD_MUL:
			if(Local_u8NumFlag==0){
			CLCD_voidSendData('*');
			Local_u8NumFlag=1;
			Local_u8CharCounter=3;}
			//			if(Local_u8Col==0 ){
			//				Local_u8NumCounter1++;
			//				if(Local_u8NumCounter1>9){
			//					Local_u8NumCounter1=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter1);
			//			}
			//			else if(Local_u8Col==2){
			//				Local_u8NumCounter2++;
			//				if(Local_u8NumCounter2>9){
			//					Local_u8NumCounter2=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter2);
			//			}
			//			else if(Local_u8Col==1){
			//				Local_u8CharCounter++;
			//				if(Local_u8CharCounter>3){
			//					Local_u8CharCounter=0;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidSendData(Local_u8Characters[Local_u8CharCounter]);
			//			}
			break;
		case KPD_DIV:
			if(Local_u8NumFlag==0){
			CLCD_voidSendData('/');
			Local_u8NumFlag=1;
			Local_u8CharCounter=2;}
			//			if(Local_u8Col==0 ){
			//				Local_u8NumCounter1++;
			//				if(Local_u8NumCounter1>9){
			//					Local_u8NumCounter1=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter1);
			//			}
			//			else if(Local_u8Col==2){
			//				Local_u8NumCounter2++;
			//				if(Local_u8NumCounter2>9){
			//					Local_u8NumCounter2=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter2);
			//			}
			//			else if(Local_u8Col==1){
			//				Local_u8CharCounter++;
			//				if(Local_u8CharCounter>3){
			//					Local_u8CharCounter=0;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidSendData(Local_u8Characters[Local_u8CharCounter]);
			//			}
			break;
		case KPD_EQUAL:
			CLCD_voidSendData('=');
			switch(Local_u8Characters[Local_u8CharCounter]){
			case '+':
				CLCD_voidWriteNumber(Local_u8Num1+Local_u8Num2);
				break;
			case '-':
				Local_u8Result=Local_u8Num1-Local_u8Num2;
				if (Local_u8Result<0){
					CLCD_voidSendData('-');
					Local_u8Result=-Local_u8Result;
				}
				CLCD_voidWriteNumber(Local_u8Result);
				break;
			case '/':
				if(Local_u8Num2==0){
					CLCD_voidSendString("Invalid!");
					break;
				}
				f32 Local_f32Res=(float)Local_u8Num1/Local_u8Num2;
				CLCD_voidWriteFloatNum(Local_f32Res);
				break;
			case '*':
				CLCD_voidWriteNumber(Local_u8Num1*Local_u8Num2);
				break;
			}
			//			if(Local_u8Col==0 ){
			//				Local_u8NumCounter1++;
			//				if(Local_u8NumCounter1>9){
			//					Local_u8NumCounter1=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter1);
			//			}
			//			else if(Local_u8Col==2){
			//				Local_u8NumCounter2++;
			//				if(Local_u8NumCounter2>9){
			//					Local_u8NumCounter2=9;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidWriteNumber(Local_u8NumCounter2);
			//			}
			//			else if(Local_u8Col==1){
			//				Local_u8CharCounter++;
			//				if(Local_u8CharCounter>3){
			//					Local_u8CharCounter=0;
			//				}
			//				CLCD_voidGoToXY(0,Local_u8Col);
			//				CLCD_voidSendData(Local_u8Characters[Local_u8CharCounter]);
			//			}
			break;
			case 0 ... 9:
			CLCD_voidWriteNumber(Local_u8PressedVal);
			if(Local_u8NumFlag==0){
				Local_u8Num1=(Local_u8Num1*10)+Local_u8PressedVal;
			}
			else if(Local_u8NumFlag==1){
				Local_u8Num2=(Local_u8Num2*10)+Local_u8PressedVal;
			}
			break;
			//		default:
			//			CLCD_voidWriteNumber(Local_u8PressedVal);
			//			break;
		}
	}
}
