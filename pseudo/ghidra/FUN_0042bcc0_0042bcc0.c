// FUN_0042bcc0  0042bcc0

void FUN_0042bcc0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_14;
  int local_8;
  
  bVar1 = false;
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
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
          local_14 = *(undefined4 *)(DAT_0162ee80 + 4);
        }
        FUN_005dcb00(local_8,local_14);
        FUN_005d6980(local_14);
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0);
  }
  return;
}

