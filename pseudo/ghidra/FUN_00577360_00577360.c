// FUN_00577360  00577360

void __fastcall FUN_00577360(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_24;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a64b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5cc0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  param_1[0x62] = 0;
  (**(code **)(*param_1 + 0x78))((short)param_1[0x61] * 0x11,0x19);
  for (local_14 = 0; local_14 < (short)param_1[0x61]; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1[99] + local_14 * 4) = local_24;
    FUN_005eaf00(0x16023);
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x40))();
    uVar3 = (**(code **)(*param_1 + 0x54))();
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x44))
              (param_1[6] + (local_14 + 1) * -0x11,uVar3);
    uVar3 = FUN_005f53c0();
    (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x6c))(uVar3);
    cVar1 = FUN_005f54c0();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x74))();
    }
    else {
      (**(code **)(**(int **)(param_1[99] + local_14 * 4) + 0x70))();
    }
  }
  ExceptionList = local_10;
  return;
}

