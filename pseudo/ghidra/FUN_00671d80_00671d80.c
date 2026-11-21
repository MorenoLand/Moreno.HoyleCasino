// FUN_00671d80  00671d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00671d80(int *param_1)

{
  void *pvVar1;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad251;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[5] == 0) {
    (**(code **)(*(int *)param_1[9] + 0xb0))(0,DAT_00781870 ^ (uint)&stack0xfffffffc);
    pvVar1 = operator_new(0x20);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_006010a0(param_1);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_28);
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (0x27ac42 - (uint)((char)param_1[8] != '\0'),0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  else if (param_1[5] == 1) {
    FUN_005f5df0(0);
  }
  ExceptionList = local_10;
  return;
}

