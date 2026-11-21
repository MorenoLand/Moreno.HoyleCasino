// FUN_005fd9b0  005fd9b0

void __thiscall FUN_005fd9b0(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_34 [4];
  undefined1 local_30;
  int local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa6a6;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(char *)(param_2 + 4) != '\0') {
    return;
  }
  ExceptionList = &local_10;
  iVar3 = FUN_005fb2b0(0);
  if (iVar3 == 0) {
LAB_005fda1e:
    iVar3 = FUN_005fb2b0(1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005fb2b0(1);
      cVar1 = (**(code **)(*piVar4 + 0x84))(param_2);
      if (cVar1 != '\0') goto LAB_005fda54;
    }
    FUN_006101f0();
    local_8 = 0;
    piVar4 = (int *)FUN_005f1df0(param_1[0x71]);
    FUN_005ff2a0(param_2);
    local_2c = local_2c + param_1[0x42];
    local_28 = local_28 + param_1[0x41];
    if ((param_1[0x6f] != 0) && (cVar1 = (**(code **)(*param_1 + 0x10))(local_34), cVar1 == '\0')) {
      local_2c = local_2c - *(int *)(param_1[0x6f] + 0x108);
      local_28 = local_28 - *(int *)(param_1[0x6f] + 0x104);
      (**(code **)(*(int *)param_1[0x6f] + 4))(local_34);
    }
    *(undefined1 *)(param_2 + 4) = local_30;
    FUN_005f7e80(param_2);
    if (param_1[0x6d] == 0) {
      if ((*(char *)(param_2 + 4) == '\0') || (*(int *)(param_2 + 0x18) == 3)) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*DAT_015e55e4 + 0x40))(local_34);
          *(undefined1 *)(param_2 + 4) = local_30;
          if (*(char *)(param_2 + 4) == '\0') {
            if (*(int *)(param_2 + 0x18) == 1) {
              FUN_005f2870();
            }
            else {
              (**(code **)(*piVar4 + 0xd8))(3);
            }
          }
        }
      }
      else if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xd8))(3);
      }
    }
    if ((*(char *)(param_2 + 4) == '\0') && (*(int *)(param_2 + 0x18) == 1)) {
      FUN_005fef90();
    }
    local_8 = 0xffffffff;
    FUN_00610250();
  }
  else {
    piVar4 = (int *)FUN_005fb2b0(0);
    cVar1 = (**(code **)(*piVar4 + 0x84))(param_2,uVar2);
    if (cVar1 == '\0') goto LAB_005fda1e;
LAB_005fda54:
    *(undefined1 *)(param_2 + 4) = 1;
  }
  ExceptionList = local_10;
  return;
}

