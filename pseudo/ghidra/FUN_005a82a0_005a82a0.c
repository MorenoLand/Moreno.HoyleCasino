// FUN_005a82a0  005a82a0

void __thiscall FUN_005a82a0(int param_1,int param_2,int param_3,int param_4,char param_5)

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
  int local_1c [5];
  int *local_8;
  
  local_1c[0] = -1;
  local_1c[1] = 1;
  local_1c[2] = 2;
  local_1c[3] = 3;
  local_1c[4] = 0;
  local_8 = *(int **)(*(int *)(param_1 + 4 + param_2 * 4) + 0x28 + param_3 * 0x58 + param_4 * 4);
  uVar2 = FUN_005b5c60(param_2,param_3,param_4);
  uVar3 = FUN_005a71d0(param_2,param_3,param_4);
  FUN_005eaf00(uVar3);
  uVar3 = FUN_005a7460(param_2,param_3,param_4);
  uVar4 = FUN_005a7240(param_2,param_3,param_4);
  (**(code **)(*local_8 + 0x44))(uVar4,uVar3);
  iVar5 = FUN_00641290(CONCAT22(extraout_var,uVar2));
  iVar5 = local_1c[iVar5];
  iVar6 = FUN_00641280(CONCAT22(extraout_var_00,uVar2));
  uVar7 = extraout_var_01;
  if (0x33 < iVar5 * 0xd + -1 + iVar6) {
    FUN_005e9f20("13 * suitConversion[GetSuit(card)] + GetRank(card) - 1 < 52",
                 "..\\Casino\\royalmatchdisplay.cpp",0x170);
    uVar7 = extraout_var_02;
  }
  iVar5 = FUN_00641290(CONCAT22(uVar7,uVar2));
  iVar5 = local_1c[iVar5];
  iVar6 = FUN_00641280(uVar2);
  (**(code **)(*local_8 + 0xb0))(iVar5 * 0xd + -1 + iVar6);
  (**(code **)(*local_8 + 0x6c))(param_3 * 7 + 5 + param_4);
  (**(code **)(*local_8 + 0x74))();
  cVar1 = FUN_005a7d40(param_2,param_3,param_4);
  if ((cVar1 == '\0') || (param_5 != '\0')) {
    cVar1 = FUN_005b84f0(param_2,param_3,param_4);
    if (cVar1 == '\0') {
      FUN_005b3240(param_2,param_3,param_4);
    }
  }
  else {
    (**(code **)(*local_8 + 0xb0))(0x35);
  }
  if (((param_2 < 4) && (iVar5 = FUN_005b4e50(param_2), iVar5 != param_3)) &&
     (iVar5 = FUN_005b4e50(param_2), iVar5 != -1)) {
    FUN_005eb5d0(100);
    return;
  }
  FUN_005eb5d0(0xff);
  return;
}

