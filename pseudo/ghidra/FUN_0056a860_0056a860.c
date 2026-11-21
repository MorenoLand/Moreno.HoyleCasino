// FUN_0056a860  0056a860

void __fastcall FUN_0056a860(int param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined4 local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5cdf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005687e0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  for (local_14 = 0; local_14 < 0x31; local_14 = local_14 + 1) {
    cVar2 = FUN_0056b950(local_14,0);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x2e8 + local_14 * 4) == 0) {
        pvVar3 = operator_new(0x810);
        local_8 = 0;
        if (pvVar3 == (void *)0x0) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_00642e10();
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2e8 + local_14 * 4) = local_28;
      }
      FUN_00642e70(-(cVar1 != '\0') & 7);
    }
  }
  ExceptionList = local_10;
  return;
}

