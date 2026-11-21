// FUN_004c68c0  004c68c0

void __thiscall FUN_004c68c0(int param_1,int param_2)

{
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  else {
    *(int *)(param_1 + 0x400) = param_2;
  }
  FUN_004c6900();
  return;
}

