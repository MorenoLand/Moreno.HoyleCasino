// FUN_00446990  00446990

void __thiscall FUN_00446990(undefined4 param_1,int param_2,int param_3,char param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_4 == '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_LETITRIDE_STRATEGY_DEFAULT",param_1);
    strcpy(param_5,pcVar2);
  }
  else {
    iVar1 = FUN_0044ce00(param_2);
    if (iVar1 == 3) {
      if ((param_3 == 4) ||
         ((param_3 == 2 && (iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_2 * 10,0,3), 9 < iVar1)
          ))) {
        pcVar2 = (char *)FUN_00630f40("SID_LETITRIDE_STRATEGY_PAIROFTENSORHIGHER",param_1);
        strcpy(param_5,pcVar2);
      }
      else {
        pcVar2 = (char *)FUN_00630f40("SID_LETITRIDE_STRATEGY_STRAIGHFLUSH_ROYALFLUSH",param_1);
        strcpy(param_5,pcVar2);
      }
    }
    else if ((((param_3 == 8) || (param_3 == 4)) || (param_3 == 3)) ||
            ((param_3 == 2 &&
             (iVar1 = FUN_004630c0(DAT_00790710 + 0x98 + param_2 * 10,0,4), 9 < iVar1)))) {
      pcVar2 = (char *)FUN_00630f40("SID_LETITRIDE_STRATEGY_PAIROFTENSORHIGHER",param_1);
      strcpy(param_5,pcVar2);
    }
    else {
      pcVar2 = (char *)FUN_00630f40("SID_LETITRIDE_STRATEGY_STRAIGHT_FLUSH_STRAIGHTFLUSH",param_1);
      strcpy(param_5,pcVar2);
    }
  }
  return;
}

