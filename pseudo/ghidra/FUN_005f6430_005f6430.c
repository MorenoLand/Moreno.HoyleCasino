// FUN_005f6430  005f6430

void __thiscall FUN_005f6430(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x49) == '\0') ||
     (iVar1 = memcmp((void *)(param_1 + 0x4d),&param_2,3), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    *(undefined2 *)(param_1 + 0x4d) = (undefined2)param_2;
    *(undefined1 *)(param_1 + 0x4f) = param_2._2_1_;
    FUN_005f6b60();
  }
  return;
}

