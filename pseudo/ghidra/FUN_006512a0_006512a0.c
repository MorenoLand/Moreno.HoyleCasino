// FUN_006512a0  006512a0

void __thiscall FUN_006512a0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c4);
  }
  else if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c8);
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1cc);
  }
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  return;
}

