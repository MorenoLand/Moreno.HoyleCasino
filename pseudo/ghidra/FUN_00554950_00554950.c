// FUN_00554950  00554950

void __fastcall FUN_00554950(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a55e4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_0054c460(*(undefined4 *)(DAT_007947e0 + 0x4f14),DAT_00793420 + 0x22);
  if (*(int *)(DAT_00793420 + 0x14) == 1) {
    FUN_00552e90(4);
    FUN_00552e90(3);
    FUN_00552e90(2);
  }
  (**(code **)(*param_1 + 4))(uVar1);
  if ((-1 < iVar2) && (*(char *)(DAT_00793420 + 0x2c) == '\0')) {
    (**(code **)(*(int *)param_1[0x1b] + 0x70))();
    (**(code **)(*(int *)param_1[0x1c] + 0xb0))(iVar2 * 6 + 5);
    iVar2 = *(int *)(DAT_00793420 + 8);
    iVar3 = FUN_005eb220();
    (**(code **)(*(int *)param_1[0x1d] + 0xb0))(iVar3 + iVar2);
    if (*(int *)(DAT_00793420 + 0x14) == 1) {
      (**(code **)(*(int *)param_1[0x1c] + 0x74))();
      (**(code **)(*(int *)param_1[0x1d] + 0x74))();
    }
    else {
      pvVar4 = operator_new(0x28);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_00601110(7,1,0,0,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_3c);
      pvVar4 = operator_new(0x28);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_00601110(7,1,0,0,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_40);
    }
  }
  ExceptionList = local_10;
  return;
}

