// FUN_005571c0  005571c0

void __fastcall FUN_005571c0(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a577e;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar3 = operator_new(0x810);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 0x10) = local_24;
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_00557340(uVar2);
  FUN_00642e70(-(cVar1 != '\0') & 7);
  FUN_00557310();
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    *(undefined2 *)(param_1 + 0x18 + local_14 * 2) = 0;
    *(undefined2 *)(param_1 + 0x22 + local_14 * 2) = 0;
  }
  *(undefined1 *)(param_1 + 0x2e) = 1;
  FUN_0057ab80(7,&DAT_00740a90);
  FUN_005f2ba0(0x1391);
  ExceptionList = local_10;
  return;
}

