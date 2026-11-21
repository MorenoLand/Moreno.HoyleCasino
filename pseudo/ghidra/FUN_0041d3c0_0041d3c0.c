// FUN_0041d3c0  0041d3c0

void __thiscall FUN_0041d3c0(int param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  bool bVar5;
  int local_1c;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x4d0);
  if (iVar2 == -1) {
    local_10 = -1;
  }
  else {
    if (iVar2 == 4) {
      local_1c = 0;
    }
    else {
      local_1c = (int)*(char *)(param_1 + 0x119 + iVar2 * 0x118);
    }
    local_10 = local_1c;
  }
  iVar1 = FUN_004198d0(iVar2,local_10);
  iVar2 = FUN_00419980(iVar2,local_10);
  bVar5 = iVar1 == iVar2;
  uVar3 = FUN_0040b260(*(undefined4 *)(param_1 + 0x4d0));
  switch(uVar3) {
  case 0:
    pcVar4 = (char *)FUN_00630f40("SID_BLACKJACK_STAND");
    strcpy(param_2,pcVar4);
    if (bVar5) {
      *param_3 = 0x13b4;
    }
    else {
      *param_3 = 0x13b5;
    }
    break;
  case 1:
    pcVar4 = (char *)FUN_00630f40("SID_BLACKJACK_HIT");
    strcpy(param_2,pcVar4);
    if (bVar5) {
      *param_3 = 0x13b4;
    }
    else {
      *param_3 = 0x13b5;
    }
    break;
  case 2:
    pcVar4 = (char *)FUN_00630f40("SID_BLACKJACK_DOUBLEDOWN");
    strcpy(param_2,pcVar4);
    if (bVar5) {
      *param_3 = 0x13b8;
    }
    else {
      *param_3 = 0x13b3;
    }
    break;
  case 3:
    pcVar4 = (char *)FUN_00630f40("SID_BLACKJACK_SPLIT");
    strcpy(param_2,pcVar4);
    *param_3 = 0x13b6;
    break;
  case 4:
    pcVar4 = (char *)FUN_00630f40("SID_BLACKJACK_SURRENDER");
    strcpy(param_2,pcVar4);
    *param_3 = 0x13b7;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\blackjackstate.cpp",0x73d);
  }
  return;
}

