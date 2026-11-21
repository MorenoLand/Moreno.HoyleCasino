// FUN_0052cb00  0052cb00

void __fastcall FUN_0052cb00(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a446d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f2ba0(0x30ef5a);
  FUN_005f2ba0(0x30ef5b);
  FUN_005f2ba0(0x30ef5c);
  FUN_005f2ba0(0x30ef5d);
  FUN_005f2ba0(0x30ef5e);
  FUN_00609870(*(undefined4 *)(param_1 + 0x60),1);
  FUN_00609870(*(undefined4 *)(param_1 + 100),1);
  FUN_005f5d50(0);
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x70))();
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    piVar1 = (int *)FUN_005fb300(local_14);
    (**(code **)(*piVar1 + 0xd0))();
  }
  pvVar2 = operator_new(0x34);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_0052f930();
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_28);
  ExceptionList = local_10;
  return;
}

