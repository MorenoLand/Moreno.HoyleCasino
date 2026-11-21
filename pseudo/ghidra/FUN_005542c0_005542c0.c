// FUN_005542c0  005542c0

void __fastcall FUN_005542c0(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_12c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5584;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0xc))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00559130();
  if (cVar1 != '\0') {
    FUN_00552e90(1);
    FUN_00552e90(0);
  }
  cVar1 = FUN_00559180();
  if (cVar1 == '\0') {
    FUN_00552f00(5);
    if (*(int *)(DAT_00793420 + 8) == 0) {
      (**(code **)(*(int *)param_1[0x1b] + 0x74))();
      pvVar2 = operator_new(0x1c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_12c = 0;
      }
      else {
        local_12c = FUN_00600a70(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_12c);
      FUN_005f5d50(0);
      (**(code **)(*(int *)param_1[0x1c] + 0x70))();
      FUN_005f5d50(0);
      (**(code **)(*(int *)param_1[0x1d] + 0x70))();
    }
  }
  else {
    FUN_00552e90(5);
  }
  FUN_00552e90(6);
  cVar1 = FUN_005591a0();
  if (cVar1 != '\0') {
    uVar3 = FUN_005dcb00(0);
    FUN_005dbb70(uVar3);
  }
  ExceptionList = local_10;
  return;
}

