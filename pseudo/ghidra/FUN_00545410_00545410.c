// FUN_00545410  00545410

void __thiscall FUN_00545410(int param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a501a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == '\0') || (*(char *)(DAT_00793404 + 0x1c) != '\0')) {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x70))(uVar1);
  }
  else {
    pvVar2 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_20);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

