// FUN_0045ec80  0045ec80

undefined4 __thiscall FUN_0045ec80(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 1) {
      pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER1");
      strcpy(param_2,pcVar2);
    }
    else {
      pcVar2 = (char *)FUN_00630f40("SID_PAIGOWPOKER");
      strcpy(param_2,pcVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

