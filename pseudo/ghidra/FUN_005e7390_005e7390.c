// FUN_005e7390  005e7390

void __thiscall FUN_005e7390(int param_1,int param_2)

{
  char cVar1;
  int local_8;
  
  if ((*(char *)(param_2 + 4) == '\0') && (cVar1 = FUN_005f88f0(), cVar1 == '\0')) {
    if ((*(int *)(param_2 + 0x18) == 4) && (*(char *)(param_2 + 0x14) == '\x1b')) {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    if (*(int *)(param_2 + 0x18) == 1) {
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x238) + local_8 * 4) + 0x20) != 0) {
          FUN_0063b2d0();
        }
      }
      Clear();
    }
  }
  return;
}

