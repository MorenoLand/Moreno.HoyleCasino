// FUN_00526240  00526240

void FUN_00526240(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x18) == 4)) {
    iVar2 = tolower((int)*(char *)(param_1 + 0x14));
    if ((iVar2 == 0x70) && (DAT_00793374 != 0)) {
      FUN_005f2a60(0x30eb72,0);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 4) = 1;
        FUN_00528ff0(0xffffffff);
      }
    }
  }
  FUN_005d7f40(param_1);
  return;
}

