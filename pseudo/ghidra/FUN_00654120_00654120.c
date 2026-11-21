// FUN_00654120  00654120

void __fastcall FUN_00654120(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00630f40("SID_SHELL_CLEARSTATS",4);
  uVar1 = FUN_00630f40("SID_SHELL_CONFIRMCLEARSTATISTICS",uVar1);
  iVar2 = FUN_0062ff10(uVar1);
  if (iVar2 != 7) {
    iVar2 = FUN_005e4390();
    *(undefined1 *)(*(int *)(iVar2 + 0x24) + *(int *)(param_1 + 0x570)) = 1;
    FUN_00653bd0(*(undefined4 *)(param_1 + 0x570));
  }
  return;
}

