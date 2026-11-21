// FUN_00626800  00626800

void __thiscall FUN_00626800(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x4b) = param_2;
  *(undefined1 *)(param_1 + 0x4c) = param_3;
  *(undefined1 *)(param_1 + 0x4d) = param_4;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_005f6430(CONCAT13((char)((uint)(param_1 + 0x4b) >> 0x18),*(undefined3 *)(param_1 + 0x4b)));
    if (*(char *)(param_1 + 0x68) != '\0') {
      FUN_005f6580(0,0,0);
    }
  }
  return;
}

