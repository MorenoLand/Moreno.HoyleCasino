// FUN_005c2000  005c2000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c2000(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a855f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x4c) == 0) {
    pvVar2 = operator_new(0x184);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = local_28;
    FUN_005eaf00(0x15f97);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(0x5a);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))(0x78,0x6c);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x70))();
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x178) = 4;
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x74))();
  pvVar2 = operator_new(0x20);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_006010a0(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_2c);
  FUN_00600520(1);
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a96,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  ExceptionList = local_10;
  return;
}

