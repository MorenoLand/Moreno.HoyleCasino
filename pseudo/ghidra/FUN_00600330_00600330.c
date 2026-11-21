// FUN_00600330  00600330

void __fastcall FUN_00600330(int param_1)

{
  if (*(char *)(param_1 + 0x1dc) == '\0') {
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1ec);
  }
  else {
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 500);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1fc);
  }
  FUN_00602f60();
  return;
}

