// FUN_00481150  00481150

void __fastcall FUN_00481150(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x409) = 0;
  *(undefined1 *)(param_1 + 0x40a) = 0;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && ((*(int *)(param_1 + 0x100) == 0xe || (*(int *)(param_1 + 0x100) == 0x2a)))
     ) {
    *(undefined1 *)(param_1 + 0x104) = 1;
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x104) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0xfc);
    if (*(int *)(param_1 + 0x100) == 0xe) {
      cVar1 = FUN_00481a00(2);
      if (cVar1 == '\0') {
        *(undefined1 *)(DAT_00791364 + 0x408) = 1;
        FUN_00480390(param_1,uVar2);
      }
    }
    else {
      cVar1 = FUN_00481a00(3);
      if (cVar1 == '\0') {
        *(undefined1 *)(DAT_00791364 + 0x408) = 1;
        FUN_00480390();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x104) = 0;
  (**(code **)(**(int **)(DAT_00791eb8 + 4) + 0x1c))(0);
  return;
}

