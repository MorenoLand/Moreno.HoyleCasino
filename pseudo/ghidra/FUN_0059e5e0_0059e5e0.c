// FUN_0059e5e0  0059e5e0

void __fastcall FUN_0059e5e0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte local_4a;
  byte local_49;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_8;
  
  local_8 = FUN_005a2020();
  iVar3 = FUN_005fc360();
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 4))(1);
    local_28 = -1;
    if (local_8 != -1) {
      FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_2c = local_8;
        local_24 = 0xffffffff;
        local_1c = 0;
        local_14 = 0x3ff0000000000000;
        if (param_1[8] == 0) {
          local_28 = 0x82e;
        }
        else if (param_1[8] == 2) {
          local_28 = 0x7fd;
        }
      }
    }
    if (local_28 == -1) {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_00639390(&local_2c,param_1,0,0);
    }
  }
  else if (iVar3 == 1) {
    if ((param_1[8] == 1) || (param_1[8] == 2)) {
      local_49 = 1;
    }
    else {
      local_49 = 0;
    }
    if ((param_1[8] == 0) || (param_1[8] == 2)) {
      local_4a = 1;
    }
    else {
      local_4a = 0;
    }
    uVar7 = (uint)local_49;
    uVar5 = (uint)local_4a;
    uVar6 = FUN_005a2020(uVar5,uVar7);
    cVar2 = FUN_005a1ea0(uVar6,uVar5,uVar7);
    if (cVar2 != '\0') {
      FUN_005fc420(0);
      (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
    }
  }
  return;
}

