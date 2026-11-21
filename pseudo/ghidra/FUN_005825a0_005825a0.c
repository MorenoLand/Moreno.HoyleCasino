// FUN_005825a0  005825a0

void __thiscall FUN_005825a0(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
    if ((param_2 < 1) || (0x50 < param_2)) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\kenodisplay.cpp",0x49e);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x41d4 + param_2 * 4) + 0x74))();
    }
  }
  return;
}

