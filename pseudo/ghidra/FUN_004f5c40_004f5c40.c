// FUN_004f5c40  004f5c40

undefined4 __thiscall FUN_004f5c40(int param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_1 + 8);
  uVar2 = FUN_004f58c0(param_2);
  *(short *)(*(int *)(param_1 + 0x5c) + sVar1 * 2) =
       *(short *)(*(int *)(param_1 + 0x5c) + sVar1 * 2) + -1;
  *(short *)(*(int *)(param_1 + 0x50) + sVar1 * 2) =
       *(short *)(*(int *)(param_1 + 0x50) + sVar1 * 2) + -1;
  iVar3 = 0;
  if (param_3 != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(undefined1 *)(sVar1 + iVar3) = 0;
  }
  return CONCAT22((short)((uint)iVar3 >> 0x10),uVar2);
}

