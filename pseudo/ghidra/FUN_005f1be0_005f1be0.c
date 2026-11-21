// FUN_005f1be0  005f1be0

undefined4 __fastcall FUN_005f1be0(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9dc6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f24a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    (**(code **)(*param_1 + 0x34))(&local_14,&local_28,&local_1c);
    if (local_1c == 0) {
      uVar3 = 0;
    }
    else {
      for (local_18 = 0; *(int *)(local_1c + local_18 * 0xc) != -1; local_18 = local_18 + 1) {
        pvVar2 = operator_new(0x1f0);
        local_8 = 0;
        if (pvVar2 == (void *)0x0) {
          local_3c = 0;
        }
        else {
          local_3c = FUN_005fc680(*(undefined4 *)(local_1c + local_18 * 0xc),1);
        }
        local_8 = 0xffffffff;
        uVar3 = FUN_005f9de0(local_3c,*(undefined4 *)(local_1c + local_18 * 0xc),
                             *(undefined4 *)(local_1c + 4 + local_18 * 0xc),local_14,local_28,0x2712
                             ,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
        local_14 = local_14 + *(int *)(local_1c + 8 + local_18 * 0xc);
        FUN_0060c840(uVar3);
        FUN_005f2370(*(undefined4 *)(local_1c + local_18 * 0xc),0,1);
      }
      (**(code **)(*param_1 + 0x38))(&local_20,&local_24);
      if (local_20 != 0) {
        FUN_005f9ce0(0,0xffffffff,local_20,0,0,10000,0,0xff,0);
      }
      if (local_24 != 0) {
        FUN_005f9ce0(0,0xffffffff,local_24,0,0,0x2711,0,0xff,0);
      }
      (**(code **)(*param_1 + 0x2c))();
      (**(code **)(*DAT_015e55e8 + 0x48))();
      uVar3 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar3;
}

