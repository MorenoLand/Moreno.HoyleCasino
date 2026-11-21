// FUN_005b5db0  005b5db0

void FUN_005b5db0(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar1 = FUN_005b4f00();
  uVar2 = FUN_005b4e50(uVar1);
  iVar3 = FUN_005b5260(uVar1,uVar2);
  iVar4 = FUN_005b5040(uVar1,uVar2);
  bVar6 = iVar3 == iVar4;
  uVar1 = FUN_005b4f00();
  uVar1 = FUN_005a4b20(uVar1);
  switch(uVar1) {
  case 0:
    pcVar5 = (char *)FUN_00630f40("SID_ROYALMATCH_STAND");
    strcpy(param_1,pcVar5);
    if (bVar6) {
      *param_2 = 0x13b4;
    }
    else {
      *param_2 = 0x13b5;
    }
    break;
  case 1:
    pcVar5 = (char *)FUN_00630f40("SID_ROYALMATCH_HIT");
    strcpy(param_1,pcVar5);
    if (bVar6) {
      *param_2 = 0x13b4;
    }
    else {
      *param_2 = 0x13b5;
    }
    break;
  case 2:
    pcVar5 = (char *)FUN_00630f40("SID_ROYALMATCH_DOUBLEDOWN");
    strcpy(param_1,pcVar5);
    if (bVar6) {
      *param_2 = 0x13b8;
    }
    else {
      *param_2 = 0x13b3;
    }
    break;
  case 3:
    pcVar5 = (char *)FUN_00630f40("SID_ROYALMATCH_SPLIT");
    strcpy(param_1,pcVar5);
    *param_2 = 0x13b6;
    break;
  case 4:
    pcVar5 = (char *)FUN_00630f40("SID_ROYALMATCH_SURRENDER");
    strcpy(param_1,pcVar5);
    *param_2 = 0x13b7;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\royalmatchstate.cpp",0x5ab);
  }
  return;
}

