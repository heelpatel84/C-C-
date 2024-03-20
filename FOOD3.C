#include<stdio.h>
#include<conio.h>
int a,b,c=0,d,e,f,ex,m;
FILE *fp;
void main()
{       main:
	clrscr();
	fp=fopen("PATELHOTEL.txt","a");
	d=0;
	printf("################################# PATEL HOTEL #################################\n");
	printf("1. Gujarati\n2. Panjabi\n3. South Indian\n4. Drinks\n5. exit\n");
	printf("Enter your choice = ");
	scanf("%d",&f);
	if(f==1|f==2|f==3|f==4|f==5)
	{
	   a=f;

		switch(a)
   {
    case 1:
			 {
			  main2:
			  printf("################################# GUJARATI FOOD #################################\n");
			  printf("1. Breakfast\n2. Lunch\n3. Dinnar\n4. Return to Main Menu \n");
			  scanf("%d",&b);
			  switch(b)
			  {
				case 1:
				{
				 printf("################################ GUJARATI BREAKFAST ############################\n");
				 printf("1. Fafda,Jalebi & Tea or Coffee = 120/-\n");
				 printf("2. Methi Gota (served with Curry & Mirch) & Tea or Coffee = 100/-\n");
				 printf("3. Batata Poha,Thepla(served with curd & achar) & Tea or Coffee = 80/-\n");
				 printf("4. Back\n");
				 scanf("%d",&e);
				  switch(e)
				{
				  case 1:
				  {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*120;
				  fprintf(fp,"%d Fafda,Jalebi & Tea or Coffee = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				  }
				  case 2:
				  {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*100;
				  fprintf(fp,"%d Methi Gota (served with Curry & Mirch) & Tea or Coffee = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				  }
				  case 3:
				  {printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*80;
				  fprintf(fp,"%d Batata Poha,Thepla(served with curd & achar) & Tea or Coffee = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				  }
				  case 4:
				  goto main2;


				}clrscr();
				 c=c+d;
			       }clrscr();
			       break;
			  case 2:
				 {
				   printf("############################### GUJARATI LUNCH ################################\n");
				   printf("1. Mini Tiffin = 130/-\n   *2 Chapati\n   *2 Sabji\n   *Dal\n   *Rice\n   *Papad,Salad & Aachar\n");
				   printf("2. Half Family Pack(For 3 person) = 600/-\n   *2 Sweet\n   *16 Chapati\n   *3 Bajara Roti\n   *4 Sabji\n   *Dal\n   *Rice\n   *3 Papad,Salad,Aachar & 2 Chuttney\n");
				   printf("3. Full Family Pack = 1100/-\n   *2 Sweets\n   *24 Chapati\n   *6 Bajara Roti\n   *4 Sabji\n   *Dal\n   *Rice\n   *5 Papad,Salad,Aachar & 2 Chuttney\n");
				   printf("4. Back\n");
				   scanf("%d",&e);
				   switch(e)
				   {
					case 1:
				   {
					    printf("Enter Quantity = ");
					    scanf("%d",&m);
					    d=m*130;
					    fprintf(fp,"%d Mini Tiffin = ",m);
					    fprintf(fp,"%d",d);
					    fprintf(fp,"\n");
					    break;

				   }
					 case 2:
				   {
					    printf("Enter Quantity = ");
					    scanf("%d",&m);
					    d=m*600;
					    fprintf(fp,"%d Half Family Pack(For 3 person) = ",m);
					    fprintf(fp,"%d",d);
					    fprintf(fp,"\n");
					    break;
				   }
					 case 3:
				   {
					    printf("Enter Quantity = ");
					    scanf("%d",&m);
					    d=m*1100;
					    fprintf(fp,"%d Full Family Pack = ",m);
					    fprintf(fp,"%d",d);
					    fprintf(fp,"\n");
					    break;
				    }
					 case 4:

					    goto main2;

				   }
				   clrscr();
				   c=c+d;
				 }
				    break;

				case 3:
			 {
			   printf("################################ GUJARATI DINNER ###############################\n");
			   printf("1. Tiffin Silver = 250/-\n   *8 Chapati\n   *3 Sabji\n   *Rice\n   *2 Papad,Salad, & Aachar\n");
			   printf("2. Half Family Pack(For 3 person) = 550/-\n   *2 Sweets\n   *3 Thepla\n   *4 Sabji\n   *Kadhi\n   *Rice\n   *Khichadi or Masala Rice(as per availability)\n   *3 Papad,Salad,Aachar & 2 Chuttney\n");
			   printf("3. Full Family Pack = 1000/-\n   *2 Sweet\n   *24 Chapati\n   *6 Thepla\n   *4 Sabji\n   *Kadhi\n   *Rice\n   *Khichadi or Masala Rice(as per availability)\n   *5 Papad,Salad,Aachar & 2 Chuttney\n");
			   printf("4. Back\n");
			   scanf("%d",&e);
			   switch(e)
			  {
				   case 1:
				{
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*250;
				  fprintf(fp,"%d Tiffin Silver = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");

				break;
				}
				case 2:
				{
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*550;
				  fprintf(fp,"%d Half Family Pack(For 3 person) = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;

				}
				case 3:
			       {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*1000;
				  fprintf(fp,"%d Full Family Pack = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				}
				case 4:
				goto main2;

			  }clrscr();
			  c=c+d;
			 } break;

			   case 4:
				   goto main;
				   break;
		    }clrscr();
		    break;
   case 2:
		 {      main3:
			printf("################################# PANJABI FOOD #################################\n");
			printf("1. BreakFast\n2. Lunch\n3. dinner\n4. Return to Main Menu\n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
			       {
				printf("############################### PANJABI BREAKFAST ##############################\n");
				printf("1. Poori Bhaji = 150/-\n2. Chana Poori = 160/-\n");
				printf("3. Aloo Parantha = 50/-\n4. Veg Pakora = 130/-\n5. Chana Aloo Chat = 140/-\n");
				printf("6. Back\n");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
				     {
				      printf("Enter Quantity = ");
				      scanf("%d",&m);
				      d=m*150;
				      fprintf(fp,"%d Poori Bhaji = ",m);
				      fprintf(fp,"%d",d);
				      fprintf(fp,"\n");
				      break;
				     }
					case 2:
				     {
				      printf("Enter Quantity = ");
				      scanf("%d",&m);
				      d=m*160;
				      fprintf(fp,"%d Chana Poori = ",m);
				      fprintf(fp,"%d",d);
				      fprintf(fp,"\n");
				      break;
				     }

					case 3:
				     {
				       printf("Enter Quantity = ");
				       scanf("%d",&m);
				       d=m*50;
				       fprintf(fp,"%d Aloo Parantha = ",m);
				       fprintf(fp,"%d",d);
				       fprintf(fp,"\n");
				       break;
				      }
					case 4:
				      {
					printf("Enter Quantity = ");
					scanf("%d",&m);
					d=m*130;
					fprintf(fp,"%d Veg Pakora = ",m);
					fprintf(fp,"%d",d);
					fprintf(fp,"\n");
					break;
				      }
					case 5:
				      {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*140;
					 fprintf(fp,"%d Chana Aloo Chat = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;

				      }
					case 6:
					goto main3;

				}
				clrscr();
				c=c+d;

			       } break;
				  case 2:
			       {
				 printf("################################# PANJABI LUNCH ################################\n");
				 printf("************* veg *************\n");
				 printf("1. Paneer Butter Masala = 190/-\n2. Shahi Paneer = 180/-\n3. Mutter Paneer = 170/-\n4. Kadai Paner = 190/-\n5. Tandoori Roti = 10/-\n");
				 printf("************* non veg *************\n");
				 printf("6. Tandoori Chicken = 150/-\n7. Chicken Panjabi Tikka = 180/-\n8. Chicken Seekh Kabab = 150/-\n");
				 printf("9. Back\n");
				 scanf("%d",&e);
				 switch(e)
				 {
				     case 1:
					 {
					  printf("Enter Quantity = ");
					  scanf("%d",&m);
					  d=m*190;
					  fprintf(fp,"%d Paneer Butter Masala = ",m);
					  fprintf(fp,"%d",d);
					  fprintf(fp,"\n");
					  break;
					 }
				     case 2:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*180;
					 fprintf(fp,"%d Shahi Paneer = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 3:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*170;
					 fprintf(fp,"%d Mutter Paneer = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 4:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*190;
					 fprintf(fp,"%d Kadai Paner = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 5:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*10;
					 fprintf(fp,"%d Tandoori Roti = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					}

					case 6:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*150;
					 fprintf(fp,"%d Tandoori Chicken = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					}

					case 7:
					{
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*180;
					 fprintf(fp,"%d Chicken Panjabi Tikka = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					}

					case 8:
					{
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*150;
					 fprintf(fp,"%d Chicken Seekh Kabab = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					}

					case 9:
					goto main3;
				 }
				 clrscr();
				 c=c+d;
			       }
			       break;

			       case 3:
			      {
			       printf("############################### PANJABI DINNER #################################\n");
			       printf("1. Full dish = 400/-\n   *Fresh Salad\n   *Carrot Seviyan Halwa\n   *Matar Paneer Masala\n   *Dal Fry\n   *Jeera Rice\n   *Kasuri Methi Parantha\n");
			       printf("2. Chilli paneer = 190/-\n3. Paneer Tikka = 120/-\n");
			       printf("4. Shahi Paneer = 140/-\n5. Naan = 25/-\n6. Aloo Parantha = 35/-\n");
			       printf("7. Back\n");
			       scanf("%d",&e);
			       switch(e)
			       {
					case 1:
					 {
					  printf("Enter Quantity = ");
					  scanf("%d",&m);
					  d=m*400;
					  fprintf(fp,"%d Full dish = ",m);
					  fprintf(fp,"%d",d);
					  fprintf(fp,"\n");
					  break;
					 }
					case 2:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*190;
					 fprintf(fp,"%d Chilli paneer = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 3:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*120;
					 fprintf(fp,"%d Paneer Tikka = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 4:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*140;
					 fprintf(fp,"%d Shahi Paneer = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 5:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*25;
					 fprintf(fp,"%d Naan = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 6:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*35;
					 fprintf(fp,"%d Aloo Parantha = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 7:
					goto main3;

			       }
				 clrscr();
				 c=c+d;
			       }
				 break;

			      case 4:
			      goto main;
			      break;
			} break;
  case 3:
		      { main4:
			printf("############################## SOUTH INDIAN FOOD ###############################\n");
			printf("1. BreakFast\n2. Lunch\n3. Dinner\n4. Return to Main Menu\n");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
				{
				printf("############################ SOUTH INDIAN BREAKFAST ############################\n");
				printf("1. Idly = 30/-\n2. Pongal = 45/-\n3. Rasa Vada = 34/-\n");
				printf("4. Rava onion Dosai = 60/-\n5. Tomato oothappam = 60/-\n");
				printf("6. Back\n");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*30;
					 fprintf(fp,"%d Idly = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 2:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*45;
					 fprintf(fp,"%d Pongal = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 3:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*34;
					 fprintf(fp,"%d Rasa Vada = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 4:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*60;
					 fprintf(fp,"%d Rava onion Dosai = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 5:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*60;
					 fprintf(fp,"%d Tomato oothappam = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 6:
					goto main4;
				}  c=c+d;

				}
				break;

				case 2:
			      {
				printf("############################## SOUTH INDIAN LUNCH ##############################\n");
				printf("1. Full Dish = 500/-\n   *Curd\n   *Ghee\n   *Appalam\n   *Rice\n   *Rasam\n   *Sambar\n   *Carrot Poriyal\n");
				printf("2. Dahi Idli = 50/-\n3. Special Butter Masala Dosa = 100/-\n");
				printf("4. Mix veg Vada = 70/-\n5. Back\n");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*500;
					 fprintf(fp,"%d Full Dish = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 2:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*50;
					 fprintf(fp,"%d Dahi Idli = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 3:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*100;
					 fprintf(fp,"%d Special Butter Masala Dosa = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 4:
					 {
					 printf("Enter Quantity = ");
					 scanf("%d",&m);
					 d=m*70;
					 fprintf(fp,"%d Mix veg Vada = ",m);
					 fprintf(fp,"%d",d);
					 fprintf(fp,"\n");
					 break;
					 }

					case 5:
					goto main4;
				}
				 clrscr();
				   c=c+d;
				}
				 break;

			 case 3:
			 {
			 printf("############################# SOUTH INDIAN DINNER ##############################\n");
			 printf("1. Full Dish = 500/-\n   *Curd\n   *Pickle\n   *Rava Payasam\n   *Vazhakai Varuval\n   *Vadai\n   *Rasam\n   *Sambar\n   *Idali");
			 printf("2. Ghee Rost Masala Dosa = 80/-\n3. Kajukishmish Uttappam = 100/-\n");
			 printf("4. Coconut Uttappam = 90/-\n5. Veg Rava Masala Dosa = 80/-\n");
			 printf("6. Back\n");
			 scanf("%d",&e);
			 switch(e)
			     {
				case 1:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*500;
				  fprintf(fp,"%d Full Dish = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 2:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*80;
				  fprintf(fp,"%d Ghee Rost Masala Dosa = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 3:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*100;
				  fprintf(fp,"%d Kajukishmish Uttappam = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 4:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*90;
				  fprintf(fp,"%d Coconut Uttappam = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 5:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*80;
				  fprintf(fp,"%d Veg Rava Masala Dosa = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 6:
				goto main4;
			     }
			     clrscr();
			     c=c+d;
			 }
			 break;

		      case 4:
		      goto main;
			}
			break;
  case 4:
		     {
			printf("#################################### DRINKS ####################################\n");
			printf("1. Coca Cola = 35/-\n2. sprite = 30/-\n3. Fanta = 25/-\n4. Pepsi = 25/-\n5. Butter Milk = 20/-\n6. Return to Main Menu\n");
			scanf("%d",&e);
			switch(e)
			{
				case 1:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*35;
				  fprintf(fp,"%d Coca Cola = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 2:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*30;
				  fprintf(fp,"%d sprite = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 3:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*25;
				  fprintf(fp,"%d Fanta = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 4:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*25;
				  fprintf(fp,"%d Pepsi = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 5:
				 {
				  printf("Enter Quantity = ");
				  scanf("%d",&m);
				  d=m*20;
				  fprintf(fp,"%d Butter Milk = ",m);
				  fprintf(fp,"%d",d);
				  fprintf(fp,"\n");
				  break;
				 }

				case 6:
				goto main;
			}
			clrscr();
			c=c+d;
		     }
		     break;
   case 5:
   {
   printf("Thank You\nEnter Any Key for Exit\n");
   } break;

			}


	      }
      }
	}
	}
	if(f!=1&&f!=2&&f!=3&&f!=4&&f!=5)
	{
	 printf("Enter valid choise \n");}
	 printf("For exit Enter any key\nFor order again Enter '1'\n");
	 scanf("%d",&ex);

	 if(ex==1)
	 goto main;
	else
	{
	printf("Thank you for Your Purchase Form PATEL HOTEL. We're so lucky to have customers  like you.\n");
	}
	     printf("Your Total Bill Is = %d\n",c);
	     fprintf(fp,"_______________________________________________________________");
	     fprintf(fp,"\n");
	     fprintf(fp,"Your Total Bill Is = %d/-",c);
	     fprintf(fp,"\n\n\n\n\n\n");
   getch();

}
