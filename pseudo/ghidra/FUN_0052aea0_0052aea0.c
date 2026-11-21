// FUN_0052aea0  0052aea0

void __thiscall FUN_0052aea0(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a42aa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*DAT_00793394 + 0x40))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (iVar1 == 3) {
    if ((param_2 < 1) || (3 < param_2)) {
      FUN_005e9f20("1<= coin && coin <=3","..\\Casino\\slotmachinedisplay.cpp",0x128);
    }
    local_14 = param_2 + -1;
  }
  else {
    if ((param_2 < 1) || (5 < param_2)) {
      FUN_005e9f20("1<= coin && coin <=5","..\\Casino\\slotmachinedisplay.cpp",299);
    }
    local_14 = param_2 + 2;
  }
  if ((local_14 < 0) || (7 < local_14)) {
    FUN_005e9f20("0<= x && x <=7","..\\Casino\\slotmachinedisplay.cpp",0x12e);
  }
  pvVar2 = operator_new(0x28);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_00601110(0,0,1,0,0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_24);
  (**(code **)(**(int **)(param_1 + 0x3c + local_14 * 4) + 0x74))();
  ExceptionList = local_10;
  return;
}

