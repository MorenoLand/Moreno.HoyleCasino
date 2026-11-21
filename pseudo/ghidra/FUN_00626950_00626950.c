// FUN_00626950  00626950

void __thiscall FUN_00626950(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x49) = param_3;
  *(undefined1 *)(param_1 + 0x4a) = param_4;
  if (*(char *)(param_1 + 0x68) != '\0') {
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_005f6510((uint)*(uint3 *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_005ee920(*(undefined3 *)(param_1 + 0x48));
    }
  }
  return;
}

