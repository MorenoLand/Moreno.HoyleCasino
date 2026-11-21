// FUN_005694f0  005694f0

void __thiscall FUN_005694f0(int param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    cVar1 = FUN_00568840(param_2);
    if (cVar1 == '\0') {
      FUN_00568ed0(param_2);
    }
    else {
      iVar2 = FUN_00568f20(param_2);
      *(undefined2 *)(param_1 + 0x1a + iVar2 * 2) = 0;
    }
    FUN_00561e20();
    FUN_0056ace0();
    FUN_005645c0(0);
  }
  return;
}

