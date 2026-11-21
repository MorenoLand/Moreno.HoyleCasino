// FUN_0054c000  0054c000

void __thiscall FUN_0054c000(int param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar1 = FUN_00549e80(*(undefined4 *)(param_1 + 0x20),1);
  iVar2 = FUN_00549fa0(*(undefined4 *)(param_1 + 0x20));
  bVar5 = iVar2 == iVar1;
  uVar3 = FUN_00542a00(*(undefined4 *)(param_1 + 0x20));
  switch(uVar3) {
  case 1:
    pcVar4 = (char *)FUN_00630f40("SID_VIDEOBLACKJACK_HIT");
    strcpy(param_2,pcVar4);
    if (bVar5) {
      *param_3 = 0x13b4;
    }
    else {
      *param_3 = 0x13b5;
    }
    break;
  case 2:
    pcVar4 = (char *)FUN_00630f40("SID_VIDEOBLACKJACK_STAND");
    strcpy(param_2,pcVar4);
    if (bVar5) {
      *param_3 = 0x13b4;
    }
    else {
      *param_3 = 0x13b5;
    }
    break;
  case 3:
    pcVar4 = (char *)FUN_00630f40("SID_VIDEOBLACKJACK_DOUBLEDOWN");
    strcpy(param_2,pcVar4);
    if (bVar5) {
      *param_3 = 0x13b8;
    }
    else {
      *param_3 = 0x13b3;
    }
    break;
  case 4:
    pcVar4 = (char *)FUN_00630f40("SID_VIDEOBLACKJACK_SPLIT");
    strcpy(param_2,pcVar4);
    *param_3 = 0x13b6;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\videoblackjackstate.cpp",0x671);
  }
  return;
}

