// FUN_0047e440  0047e440

void __fastcall FUN_0047e440(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + 1;
  iVar1 = FUN_0047f950();
  if (iVar1 <= *(int *)(param_1 + 0x428)) {
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  return;
}

