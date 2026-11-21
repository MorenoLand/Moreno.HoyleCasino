// FUN_00554670  00554670

void __fastcall FUN_00554670(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_140;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a55b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0xc))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(DAT_00793420 + 8) != 0) {
    FUN_00552f70();
    FUN_005f5d50(0);
    if (*(int *)(DAT_00793420 + 0x14) == 0) {
      (**(code **)(*(int *)param_1[0x1b] + 0xb0))(0);
    }
    (**(code **)(*(int *)param_1[0x1b] + 0x74))();
    iVar1 = *(int *)(DAT_00793420 + 8);
    iVar3 = FUN_005eb220();
    if ((iVar1 + -1) - iVar3 < 2) {
      (**(code **)(*(int *)param_1[0x1b] + 0xb0))(*(int *)(DAT_00793420 + 8) + -1);
    }
    else {
      pvVar4 = operator_new(0x20);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_140 = 0;
      }
      else {
        local_140 = FUN_00600f30(*(int *)(DAT_00793420 + 8) + -1,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_140);
    }
    FUN_005f5d50(0);
    (**(code **)(*(int *)param_1[0x1c] + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(*(int *)param_1[0x1d] + 0x70))();
    (**(code **)(*param_1 + 0x14))();
    if (*(int *)(DAT_00793420 + 8) == 5) {
      FUN_00552f00(6);
    }
    else {
      FUN_00552e90(4);
      cVar2 = FUN_00559130();
      if (cVar2 != '\0') {
        FUN_00552e90(1);
        FUN_00552e90(0);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

