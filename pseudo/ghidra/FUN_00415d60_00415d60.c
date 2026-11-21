// FUN_00415d60  00415d60

void FUN_00415d60(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  cVar1 = FUN_005df700(0xffffffff);
  if ((cVar1 != '\0') && (cVar1 = FUN_005da7b0(extraout_var), cVar1 == '\0')) {
    if (*(int *)(DAT_0079032c + 0x34) != 0) {
      uVar2 = FUN_0040b260(*(undefined4 *)(DAT_00790324 + 0x4d0));
      FUN_00411c20(uVar2);
    }
    if (*(int *)(DAT_0079032c + 0x30) != 0) {
      (**(code **)(**(int **)(*(int *)(DAT_0079032c + 0x30) + 0x1bc) + 0x74))();
    }
  }
  return;
}

