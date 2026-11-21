// FUN_0040cdc0  0040cdc0

void __thiscall FUN_0040cdc0(int param_1,int param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar7;
  int local_30;
  int local_24;
  int local_1c [5];
  int *local_8;
  
  local_1c[0] = -1;
  local_1c[1] = 1;
  local_1c[2] = 2;
  local_1c[3] = 3;
  local_1c[4] = 0;
  local_8 = *(int **)(*(int *)(param_1 + 4 + param_2 * 4) + 0x28 + param_3 * 0x58 + param_4 * 4);
  uVar2 = FUN_004193d0(param_2,param_3,param_4);
  uVar3 = FUN_0040d040(param_2,param_3,param_4);
  FUN_005eaf00(uVar3);
  uVar3 = FUN_0040d330(param_2,param_3,param_4);
  uVar4 = FUN_0040d0f0(param_2,param_3,param_4);
  (**(code **)(*local_8 + 0x44))(uVar4,uVar3);
  iVar5 = FUN_00641290(CONCAT22(extraout_var,uVar2));
  iVar5 = local_1c[iVar5];
  iVar6 = FUN_00641280(CONCAT22(extraout_var_00,uVar2));
  uVar7 = extraout_var_01;
  if (0x33 < iVar5 * 0xd + -1 + iVar6) {
    FUN_005e9f20("(suitConversion[GetSuit(card)] * 13) + GetRank(card) - 1 < 52",
                 "..\\Casino\\blackjackdisplay.cpp",0xa5);
    uVar7 = extraout_var_02;
  }
  iVar5 = FUN_00641290(CONCAT22(uVar7,uVar2));
  iVar5 = local_1c[iVar5];
  iVar6 = FUN_00641280(uVar2);
  (**(code **)(*local_8 + 0xb0))(iVar5 * 0xd + -1 + iVar6);
  (**(code **)(*local_8 + 0x6c))(param_4 + 5 + param_3 * 7);
  (**(code **)(*local_8 + 0x74))();
  cVar1 = FUN_0040d530(param_2,param_3,param_4);
  if ((cVar1 == '\0') || (param_5 != '\0')) {
    cVar1 = FUN_00419470(param_2,param_3,param_4);
    if (cVar1 == '\0') {
      FUN_00419ad0(param_2,param_3,param_4);
    }
  }
  else {
    (**(code **)(*local_8 + 0xb0))(0x35);
  }
  if (param_2 < 4) {
    if (param_2 == -1) {
      local_24 = -1;
    }
    else {
      if (param_2 == 4) {
        local_30 = 0;
      }
      else {
        local_30 = (int)*(char *)(DAT_00790324 + 0x119 + param_2 * 0x118);
      }
      local_24 = local_30;
    }
    if (local_24 != param_3) {
      if (param_2 == -1) {
        cVar1 = -1;
      }
      else if (param_2 == 4) {
        cVar1 = '\0';
      }
      else {
        cVar1 = *(char *)(DAT_00790324 + 0x119 + param_2 * 0x118);
      }
      if (cVar1 != -1) {
        FUN_005eb5d0(100);
        return;
      }
    }
  }
  FUN_005eb5d0(0xff);
  return;
}

