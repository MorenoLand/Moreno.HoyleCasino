// FUN_00462f40  00462f40

void FUN_00462f40(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  
  switch(param_1) {
  case 2:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_PAIR");
    strcpy(param_2,pcVar1);
    break;
  case 3:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_TWOPAIR");
    strcpy(param_2,pcVar1);
    break;
  case 4:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_HAND_THREEOFAKIND");
    strcpy(param_2,pcVar1);
    break;
  case 5:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_STRAIGHT");
    strcpy(param_2,pcVar1);
    break;
  case 6:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_FLUSH");
    strcpy(param_2,pcVar1);
    break;
  case 7:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_FULLHOUSE");
    strcpy(param_2,pcVar1);
    break;
  case 8:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_HAND_FOUROFAKIND");
    strcpy(param_2,pcVar1);
    break;
  case 9:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_STRAIGHTFLUSH");
    strcpy(param_2,pcVar1);
    break;
  case 10:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_ROYALFLUSH");
    strcpy(param_2,pcVar1);
    break;
  default:
    pcVar1 = (char *)FUN_00630f40("SID_POKER_HIGHCARD");
    strcpy(param_2,pcVar1);
  }
  return;
}

