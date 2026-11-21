// FUN_004fc6a0  004fc6a0

void __fastcall FUN_004fc6a0(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a278d;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x80) == 0) {
    pvVar3 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0051cad0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80) = local_20;
    (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))();
    FUN_005f7320(0,0);
  }
  FUN_0051cba0(uVar2);
  cVar1 = FUN_005f88f0();
  if (cVar1 != '\0') {
    FUN_005f85d0();
  }
  ExceptionList = local_10;
  return;
}

