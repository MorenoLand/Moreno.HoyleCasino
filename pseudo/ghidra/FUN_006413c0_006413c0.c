// FUN_006413c0  006413c0

void FUN_006413c0(char *param_1,undefined4 param_2,int param_3,char param_4)

{
  if (param_4 == '\0') {
    switch(param_2) {
    case 1:
      strcpy(param_1,"A");
      break;
    default:
      sprintf(param_1,"%hd",param_2);
      break;
    case 0xb:
      strcpy(param_1,"J");
      break;
    case 0xc:
      strcpy(param_1,"Q");
      break;
    case 0xd:
      strcpy(param_1,"K");
      break;
    case 0xe:
      strcpy(param_1,"A");
      break;
    case 0xf:
      strcpy(param_1,"Jo");
    }
  }
  else if (param_3 == 5) {
    sprintf(param_1,"%hd",param_2);
  }
  else {
    switch(param_2) {
    case 0xb:
      strcpy(param_1,"V");
      break;
    case 0xc:
      strcpy(param_1,"C");
      break;
    case 0xd:
      strcpy(param_1,"D");
      break;
    case 0xe:
      strcpy(param_1,"R");
      break;
    default:
      sprintf(param_1,"%hd",param_2);
    }
  }
  switch(param_3) {
  case 1:
    strcat(param_1,"C");
    break;
  case 2:
    strcat(param_1,"D");
    break;
  case 3:
    strcat(param_1,"H");
    break;
  case 4:
    strcat(param_1,"S");
    break;
  case 5:
    strcat(param_1,"T");
    break;
  case 6:
    strcat(param_1,"E");
  }
  return;
}

