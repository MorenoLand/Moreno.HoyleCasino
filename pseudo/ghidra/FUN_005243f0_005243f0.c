// FUN_005243f0  005243f0

void __fastcall FUN_005243f0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_14;
  int local_8;
  
  bVar1 = false;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00527e50();
  (**(code **)(**(int **)(DAT_00793370 + 4) + 4))(1);
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar3 = FUN_005dcb00(local_8);
    if (*(int *)(iVar3 + 0x49c) != 0) {
      FUN_005dcb00(local_8);
      cVar2 = FUN_005f54a0();
      if (cVar2 != '\0') {
        if (bVar1) {
          local_14 = 0;
        }
        else {
          local_14 = *(undefined4 *)(DAT_00793370 + 4);
        }
        FUN_005dcb00(local_8,local_14);
        FUN_005d6980(local_14);
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    FUN_00524500();
  }
  return;
}

