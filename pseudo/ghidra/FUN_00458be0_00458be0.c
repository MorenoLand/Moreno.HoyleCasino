// FUN_00458be0  00458be0

void __thiscall FUN_00458be0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined4 local_60;
  int local_3c;
  int local_38;
  int local_30 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f04f;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = -1;
  local_38 = param_3;
  local_30[0] = 0x178;
  local_30[1] = 0x15a;
  local_30[2] = 0xcb;
  local_30[3] = 0x15a;
  local_30[4] = 0x218;
  local_30[5] = 0xa6;
  local_30[6] = 0x31;
  local_30[7] = 0xa6;
  piVar1 = *(int **)(*(int *)(param_1 + 4 + param_2 * 4) + 8 + param_3 * 4);
  if (*(char *)(DAT_00790738 + param_2 + 0xe5) != '\0') {
    local_38 = FUN_00458e90(param_2,param_3);
  }
  uVar2 = FUN_004604d0(param_2,local_38);
  *(undefined2 *)(piVar1 + 100) = uVar2;
  uVar4 = FUN_004590a0(param_2,param_3,1,(short)piVar1[100]);
  uVar5 = FUN_00459030(param_2,param_3);
  (**(code **)(*piVar1 + 0x44))(uVar5,uVar4,uVar3);
  (**(code **)(*piVar1 + 0x6c))(param_3 + 5);
  if (param_2 == 4) {
LAB_00458d61:
    (**(code **)(*piVar1 + 0x74))();
    if (param_2 == *(int *)(DAT_00790738 + 0x118)) {
      if (param_3 == *(int *)(DAT_00790738 + 0x11c)) {
        local_3c = 0;
      }
      if (param_3 == *(int *)(DAT_00790738 + 0x120)) {
        local_3c = 1;
      }
      if (local_3c != -1) {
        if (*(int *)(param_1 + 0x7c + local_3c * 4) == 0) {
          pvVar8 = operator_new(0x178);
          local_8 = 0;
          if (pvVar8 == (void *)0x0) {
            local_60 = 0;
          }
          else {
            local_60 = FUN_005eaaf0();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x7c + local_3c * 4) = local_60;
        }
        uVar5 = 0xffffffff;
        uVar4 = 0x20;
        iVar7 = (**(code **)(*piVar1 + 0x54))(0x20,0xffffffff);
        iVar7 = iVar7 + local_30[param_2 * 2 + 1];
        iVar9 = (**(code **)(*piVar1 + 0x4c))(iVar7);
        FUN_005eae80(0x18a89,iVar9 + local_30[param_2 * 2],iVar7,uVar4,uVar5);
        (**(code **)(**(int **)(param_1 + 0x7c + local_3c * 4) + 0x74))();
      }
    }
  }
  else {
    FUN_005dcb00(param_2);
    piVar6 = (int *)FUN_0063aac0();
    if (*piVar6 != 0) {
      iVar7 = FUN_005dcb00(param_2);
      if (*(char *)(iVar7 + 0x4a1) == '\0') goto LAB_00458d61;
    }
    (**(code **)(*piVar1 + 0x70))();
  }
  ExceptionList = local_10;
  return;
}

