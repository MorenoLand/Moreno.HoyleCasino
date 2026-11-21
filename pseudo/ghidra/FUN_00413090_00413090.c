// FUN_00413090  00413090

void __thiscall FUN_00413090(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    *(undefined1 *)(param_1 + 0xb) = 1;
    iVar1 = DAT_00790324;
    *(undefined4 *)(DAT_00790324 + 0x4ec) = 10;
    *(undefined4 *)(iVar1 + 0x4f0) = 4;
    (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
  }
  else if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    iVar1 = DAT_00790324;
    *(undefined4 *)(DAT_00790324 + 0x4ec) = 3;
    *(undefined4 *)(iVar1 + 0x4f0) = param_2;
    (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_0041b780(param_2);
    (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
  }
  return;
}

