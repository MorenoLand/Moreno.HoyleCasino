// FUN_005cf060  005cf060

void __thiscall FUN_005cf060(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_005f88f0();
  if ((cVar1 == '\0') && (*(char *)(param_2 + 4) == '\0')) {
    if ((*(int *)(param_2 + 0x18) == 4) && (*(char *)(param_2 + 0x14) == '\x1b')) {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    if (*(int *)(param_2 + 0x18) == 1) {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      FUN_005f4510(*(undefined4 *)(param_1 + 0x1c0),1);
      *(undefined1 *)(param_2 + 4) = 1;
      FUN_005dc190();
    }
  }
  return;
}

