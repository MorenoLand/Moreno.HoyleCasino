// FUN_00459130  00459130

void __thiscall FUN_00459130(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_54;
  undefined4 local_50;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f080;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 3) || (param_2 == 2)) {
    iVar3 = FUN_005eb470(uVar2);
    local_20 = FUN_00459030(param_2,0);
    local_20 = iVar3 + 10 + local_20;
    iVar3 = FUN_005eb4b0();
    local_1c = FUN_004590a0(param_2,0,0,0);
    local_1c = iVar3 + 0x1e + local_1c;
    local_18 = local_20 + 0x50;
  }
  else if (param_2 == 4) {
    iVar3 = FUN_005eb470(uVar2);
    local_20 = FUN_00459030(4,0);
    local_20 = iVar3 + 7 + local_20;
    iVar3 = FUN_005eb4b0();
    local_1c = FUN_004590a0(4,0,0,0);
    local_1c = iVar3 + 0x1f + local_1c;
    local_18 = local_20 + 0x50;
  }
  else {
    iVar3 = FUN_005eb470(uVar2);
    local_20 = FUN_00459030(param_2,0);
    local_20 = iVar3 + 8 + local_20;
    iVar3 = FUN_005eb4b0();
    local_1c = FUN_004590a0(param_2,0,0,0);
    local_1c = iVar3 + 0x23 + local_1c;
    local_18 = local_20 + 0x52;
  }
  if (((param_2 == 4) && (*(char *)(DAT_00790738 + 0x115) != '\0')) ||
     ((param_2 < 4 && (iVar3 = FUN_005dcb00(param_2), *(char *)(iVar3 + 0x4a2) != '\0')))) {
    if (*(int *)(param_1 + 0x54 + param_2 * 4) == 0) {
      pvVar4 = operator_new(0x178);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54 + param_2 * 4) = local_50;
      FUN_005eae80(0x13b2,local_20,local_1c,0x50,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x54 + param_2 * 4) + 0xb0))
                (*(char *)(DAT_00790738 + param_2 + 0xef) == '\0');
      (**(code **)(**(int **)(param_1 + 0x54 + param_2 * 4) + 0x74))();
    }
    if (*(int *)(param_1 + 0x68 + param_2 * 4) == 0) {
      pvVar4 = operator_new(0x178);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_54 = 0;
      }
      else {
        local_54 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x68 + param_2 * 4) = local_54;
      FUN_005eae80(0x13b2,local_18,local_1c + 0xf,0x50,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x68 + param_2 * 4) + 0xb0))
                (*(char *)(DAT_00790738 + param_2 + 0xea) == '\0');
      (**(code **)(**(int **)(param_1 + 0x68 + param_2 * 4) + 0x74))();
    }
  }
  else {
    if (*(int *)(param_1 + 0x54 + param_2 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x54 + param_2 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0x54 + param_2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x54 + param_2 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x68 + param_2 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x68 + param_2 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0x68 + param_2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x68 + param_2 * 4) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}

