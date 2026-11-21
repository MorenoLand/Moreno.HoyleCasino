// FUN_0064cfa0  0064cfa0

undefined4 __fastcall FUN_0064cfa0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x30))(param_1);
  if (cVar1 == '\0') {
    FUN_005f2ae0(0x186c7,0x186c8);
  }
  else {
    cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x2c))();
    if (cVar1 == '\0') {
      FUN_005f2ae0(0x186c9,0x186c7);
    }
    else {
      FUN_005f2ae0(0x186c8,0x186c7);
    }
  }
  return 1;
}

