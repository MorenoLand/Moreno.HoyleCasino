// FUN_00563b80  00563b80

void __thiscall FUN_00563b80(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 == '\0') {
    *(undefined4 *)(*(int *)(DAT_00793440 + 0xb8) + 0x848 + param_1[0x5e] * 4) = 0;
  }
  else if (*(int *)(param_2 + 0x18) == 3) {
    *(undefined1 *)(param_2 + 4) = 1;
    *(undefined4 *)(*(int *)(DAT_00793440 + 0xb8) + 0x848 + param_1[0x5e] * 4) = 1;
  }
  if (param_1[0x5e] == 0) {
    FUN_00563c20();
  }
  return;
}

