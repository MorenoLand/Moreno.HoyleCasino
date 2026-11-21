// FUN_0045d9b0  0045d9b0

void FUN_0045d9b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_0063aac0();
  uVar2 = extraout_var;
  if (*piVar1 != 2) {
    piVar1 = (int *)FUN_0063aac0();
    if (*piVar1 != 3) {
      cVar3 = '\0';
      goto LAB_0045d9ef;
    }
  }
  cVar3 = '\x01';
LAB_0045d9ef:
  if ((cVar3 == '\0') || (*(int *)(param_2 + 4) != *(int *)(DAT_00790738 + 0x10c))) {
    FUN_005d9f70(param_1,param_2);
  }
  else {
    uVar2 = FUN_00630f40("SID_PAIGOWPOKER_PLAYERCHANGES",0,cVar3,uVar2);
    uVar2 = FUN_00630f40("SID_PAIGOWPOKER_CANTCHANGEBANKER",uVar2);
    FUN_0062ff10(uVar2);
  }
  return;
}

