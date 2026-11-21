// FUN_0064fa90  0064fa90

void __thiscall FUN_0064fa90(int param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac267;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(char *)(param_1 + 0x48) = param_2;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_005e9f20("script","..\\casinoShell\\room.cpp",0x507,uVar2);
  }
  if (param_2 != '\0') {
    uVar3 = FUN_005f3bf0();
    piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar3);
    cVar1 = (**(code **)(*piVar4 + 0xac))();
    if (cVar1 != '\0') {
      pvVar5 = operator_new(0x2c);
      local_8 = 0;
      if (pvVar5 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00678690(param_3);
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_24);
      ExceptionList = local_10;
      return;
    }
  }
  FUN_005fc420(0);
  ExceptionList = local_10;
  return;
}

