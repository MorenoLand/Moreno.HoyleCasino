// FUN_0064fba0  0064fba0

void __thiscall FUN_0064fba0(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 local_25;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac28d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005f3bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar2);
  if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 0xac))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      pvVar4 = operator_new(0x23c);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_0066f3f0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x4c) = local_24;
      FUN_0066f4f0();
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x70))();
    }
    if ((*(char *)(param_1 + 0x48) == '\0') && (param_2 == '\0')) {
      local_25 = 0;
    }
    else {
      local_25 = 1;
    }
    FUN_0066f610(local_25);
  }
  ExceptionList = local_10;
  return;
}

