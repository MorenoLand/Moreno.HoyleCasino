// FUN_0060d7a0  0060d7a0

void __thiscall FUN_0060d7a0(int param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    iVar1 = strcmp(param_2,*(char **)(param_1 + 0x84));
    if (iVar1 != 0) {
      FUN_00614030(param_2);
      SetWindowTextA(*(HWND *)(param_1 + 0x8c),*(LPCSTR *)(param_1 + 0x84));
    }
  }
  return;
}

