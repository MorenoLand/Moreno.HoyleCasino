// FUN_00641e20  00641e20

void FUN_00641e20(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int local_10;
  int local_8;
  
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < param_2 + -1; local_10 = local_10 + 1) {
      uVar2 = (undefined2)((uint)(param_2 + -1) >> 0x10);
      cVar1 = FUN_00642c20(CONCAT22(uVar2,*(undefined2 *)(param_1 + local_10 * 2)),
                           CONCAT22(uVar2,*(undefined2 *)(param_1 + 2 + local_10 * 2)));
      if (cVar1 != '\0') {
        uVar2 = *(undefined2 *)(param_1 + local_10 * 2);
        *(undefined2 *)(param_1 + local_10 * 2) = *(undefined2 *)(param_1 + 2 + local_10 * 2);
        *(undefined2 *)(param_1 + 2 + local_10 * 2) = uVar2;
      }
    }
  }
  return;
}

