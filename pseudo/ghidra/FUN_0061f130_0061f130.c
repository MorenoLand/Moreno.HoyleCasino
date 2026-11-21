// FUN_0061f130  0061f130

undefined4 __fastcall FUN_0061f130(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x158) == 0) {
    if (*(int *)(param_1 + 0x158) == 0) {
      FUN_005e9f20(&DAT_006d8e14,"..\\scilib\\platform\\resource.cpp",0x207);
    }
    uVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x158);
  }
  return uVar1;
}

