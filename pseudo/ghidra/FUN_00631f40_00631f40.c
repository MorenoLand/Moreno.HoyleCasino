// FUN_00631f40  00631f40

void __thiscall FUN_00631f40(undefined4 param_1,int param_2)

{
  if (((*(int *)(param_2 + 0x18) == 0x16) && ((*(uint *)(param_2 + 0x1c) & 0x42) != 0)) &&
     (*(char *)(param_2 + 0x14) == 'w')) {
    DAT_00795fbf = '\x01' - (DAT_00795fbf != '\0');
    FUN_006397a0(param_1);
  }
  FUN_005f37f0(param_2);
  return;
}

