// FUN_005ad0a0  005ad0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad0a0(void)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7c8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f2870(DAT_00781870 ^ (uint)&stack0xfffffffc);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    uVar3 = FUN_0064c8a0(0,0);
    FUN_005dcb00(local_14,uVar3);
    FUN_005d6050(uVar3);
  }
  cVar1 = FUN_005b6740();
  if (cVar1 == '\0') {
    pvVar2 = operator_new(0x28);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005aa980();
    }
    local_8 = 0xffffffff;
    FUN_005da390(local_2c);
  }
  else {
    FUN_005b7ef0();
    (**(code **)(**(int **)(DAT_00793600 + 4) + 4))(1);
    (**(code **)(*DAT_0162ee84 + 0x80))
              (0xfb3,*(undefined4 *)(DAT_00793600 + 4),0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  ExceptionList = local_10;
  return;
}

