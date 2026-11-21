// FUN_005ced60  005ced60

void __thiscall FUN_005ced60(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005f88f0();
  if ((cVar1 == '\0') && (*(char *)(param_2 + 4) == '\0')) {
    if ((*(int *)(param_2 + 0x18) == 4) && (*(char *)(param_2 + 0x14) == '\x1b')) {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    if (*(int *)(param_2 + 0x18) == 2) {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      *(undefined1 *)(param_2 + 4) = 1;
      FUN_005dc0a0();
      FUN_005dbf30();
      uVar2 = (**(code **)(*DAT_0162ee84 + 600))();
      (**(code **)(*DAT_0162ee84 + 0x34))(uVar2);
    }
  }
  return;
}

