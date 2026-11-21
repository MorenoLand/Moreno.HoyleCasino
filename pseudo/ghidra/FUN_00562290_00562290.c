// FUN_00562290  00562290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00562290(int param_1)

{
  void *pvVar1;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5944;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)((int)DAT_0162ee84 + 0x25) == '\0') {
    (**(code **)(**(int **)(DAT_00793438 + 4) + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a96,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x178) = 1;
  (**(code **)(**(int **)(param_1 + 0x74) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x74) + 0x74))();
  pvVar1 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_00563370(*(undefined4 *)(DAT_00793438 + 4));
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_24);
  FUN_00561950();
  ExceptionList = local_10;
  return;
}

