// FUN_00480580  00480580

void __thiscall FUN_00480580(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004804f0(param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_004806b0();
    *(undefined4 *)(param_1 + 0x3e4 + iVar2 * 4) = param_2;
    iVar2 = FUN_004805e0();
    if (iVar2 != -1) {
      *(int *)(param_1 + 0x3fc) = iVar2;
    }
  }
  return;
}

