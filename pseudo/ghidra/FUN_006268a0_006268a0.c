// FUN_006268a0  006268a0

void __thiscall FUN_006268a0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x4e) = param_2;
  *(undefined1 *)(param_1 + 0x4f) = param_3;
  *(undefined1 *)(param_1 + 0x50) = param_4;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_005f6430(CONCAT13((char)((uint)(param_1 + 0x4e) >> 0x18),*(undefined3 *)(param_1 + 0x4e)));
    if (*(char *)(param_1 + 0x68) != '\0') {
      FUN_005f6510((uint)*(uint3 *)(param_1 + 0x48));
    }
  }
  return;
}

